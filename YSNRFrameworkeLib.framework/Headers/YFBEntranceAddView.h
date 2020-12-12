







@class YFBEntranceAddView;

#import <UIKit/UIKit.h>

@protocol JZLSliderMenuDelegate <NSObject>




- (void)sliderMenu:(YFBEntranceAddView *)sliderMenuView selectItemAtIndex: (NSInteger)index;

@end

@interface YFBEntranceAddView : UIView<UICollectionViewDelegate,UICollectionViewDataSource,UIScrollViewDelegate>
@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, strong) UIScrollView *mainView;


@property (nonatomic, assign) NSInteger selectedIndex;

@property (nonatomic, strong) NSMutableArray *childViewControllers;


@property (nonatomic, strong) NSArray *titleArray;


@property (nonatomic, weak) id<JZLSliderMenuDelegate> delegate;






+ (instancetype) initWithFrame: (CGRect)frame  childViewControllers: (NSArray <UIViewController *>*)childViewControllers titleArray: (NSArray *)titleArray selectedIndex: (NSInteger)selectedIndex;
@end

