







#import <UIKit/UIKit.h>
@class YFBAceView;
@protocol HXCollectionViewDelegate <UICollectionViewDelegate>

@required


- (void)dragCellCollectionView:(YFBAceView *)collectionView newDataArrayAfterMove:(NSArray *)newDataArray;

@optional


- (void)dragCellCollectionViewCellEndMoving:(YFBAceView *)collectionView;


- (void)dragCellCollectionView:(YFBAceView *)collectionView moveCellFromIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;
@end

@protocol HXCollectionViewDataSource<UICollectionViewDataSource>


@required


- (NSArray *)dataSourceArrayOfCollectionView:(YFBAceView *)collectionView;

@end


@interface YFBAceView : UICollectionView

@property (weak, nonatomic) id<HXCollectionViewDelegate> delegate;
@property (weak, nonatomic) id<HXCollectionViewDataSource> dataSource;
@property (assign, nonatomic) BOOL editEnabled;

@end
