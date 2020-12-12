







#import <UIKit/UIKit.h>
#import "YFBImageSourceSedllView.h"

@protocol SwipeTableViewDataSource;
@protocol SwipeTableViewDelegate;
@interface YFBAttributedView : UIView

@property (nonatomic, weak) id<SwipeTableViewDelegate>delegate;
@property (nonatomic, weak) id<SwipeTableViewDataSource>dataSource;
@property (nonatomic, readonly, strong) UICollectionView * contentView;











@property (nonatomic, strong) UIView * swipeHeaderView;



@property (nonatomic, strong) UIView * swipeHeaderBar;



@property (nonatomic, assign) CGFloat swipeHeaderTopInset;



@property (nonatomic, readonly) NSInteger currentItemIndex;



@property (nonatomic, readonly, strong) UIScrollView * currentItemView;



@property (nonatomic, assign) BOOL alwaysBounceHorizontal;



@property (nonatomic, assign) BOOL shouldAdjustContentSize;



@property (nonatomic, assign) BOOL swipeHeaderBarScrollDisabled;

@property (nonatomic, assign) BOOL scrollEnabled;


- (void)reloadData;
- (void)scrollToItemAtIndex:(NSInteger)index animated:(BOOL)animated;

@end



@protocol SwipeTableViewDataSource <NSObject>

- (NSInteger)numberOfItemsInSwipeTableView:(YFBAttributedView *)swipeView;
- (UIScrollView *)swipeTableView:(YFBAttributedView *)swipeView viewForItemAtIndex:(NSInteger)index reusingView:(UIScrollView *)view;

@end

@protocol SwipeTableViewDelegate <NSObject>

@optional
- (void)swipeTableViewDidScroll:(YFBAttributedView *)swipeView;
- (void)swipeTableViewCurrentItemIndexDidChange:(YFBAttributedView *)swipeView;
- (void)swipeTableViewWillBeginDragging:(YFBAttributedView *)swipeView;
- (void)swipeTableViewDidEndDragging:(YFBAttributedView *)swipeView willDecelerate:(BOOL)decelerate;
- (void)swipeTableViewWillBeginDecelerating:(YFBAttributedView *)swipeView;
- (void)swipeTableViewDidEndDecelerating:(YFBAttributedView *)swipeView;
- (void)swipeTableViewDidEndScrollingAnimation:(YFBAttributedView *)swipeView;
- (BOOL)swipeTableView:(YFBAttributedView *)swipeView shouldSelectItemAtIndex:(NSInteger)index;
- (void)swipeTableView:(YFBAttributedView *)swipeView didSelectItemAtIndex:(NSInteger)index;




- (BOOL)swipeTableView:(YFBAttributedView *)swipeTableView shouldPullToRefreshAtIndex:(NSInteger)index; 
- (CGFloat)swipeTableView:(YFBAttributedView *)swipeTableView heightForRefreshHeaderAtIndex:(NSInteger)index; 

@end




@interface UIScrollView (YFBAttributedView)
@property (nonatomic, readonly, weak) YFBAttributedView * swipeTableView;
@end

