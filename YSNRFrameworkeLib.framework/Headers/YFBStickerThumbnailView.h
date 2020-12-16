







#import <UIKit/UIKit.h>


@class YFBStickerThumbnailView;
@class YFBSex;



@protocol STCollectionViewDataSource <NSObject>



- (NSInteger)stCollectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell *)stCollectionView:(YFBStickerThumbnailView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath;

@optional



- (NSInteger)numberOfSectionsInStCollectionView:(UICollectionView *)collectionView;



- (UICollectionReusableView *)stCollectionView:(UICollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;

@end


@protocol STCollectionViewDelegate <UICollectionViewDelegate>
@end





@interface YFBStickerThumbnailView : UICollectionView



@property (nonatomic, weak) id<STCollectionViewDataSource>stDataSource;
@property (nonatomic, weak) id<STCollectionViewDelegate>stDelegate;



@property (nonatomic, assign) CGSize minRequireContentSize;



@property (nonatomic, readonly, strong) UIView * collectionHeadView;



@property (nonatomic, readonly, strong) YFBSex * st_collectionViewLayout;




- (instancetype)initWithFrame:(CGRect)frame NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end






@protocol STCollectionViewFlowLayoutDelegate <UICollectionViewDelegateFlowLayout>

@required


- (NSInteger)collectionView:(UICollectionView *)collectionView
                     layout:(YFBSex *)layout
   numberOfColumnsInSection:(NSInteger)section;

@end



@interface YFBSex : UICollectionViewFlowLayout

@property (nonatomic, assign) CGFloat columnCount;
@property (nonatomic, assign) CGFloat minimumLineSpacing;
@property (nonatomic, assign) CGFloat minimumInteritemSpacing;
@property (nonatomic, assign) UIEdgeInsets sectionInset;
@property (nonatomic, assign) CGSize itemSize;



@property (nonatomic, readonly, assign) CGFloat topOffsetOfFirstAttributes;

@end










