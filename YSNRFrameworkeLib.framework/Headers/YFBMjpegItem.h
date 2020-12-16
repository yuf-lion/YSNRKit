







#import <UIKit/UIKit.h>

typedef void(^VoidBlock)(void);

@interface YFBMjpegItem : UICollectionViewCell


@property (nonatomic ,assign) BOOL showNetImage;

@property (nonatomic, assign) CGRect anchorFrame;

@property (nonatomic, assign) BOOL isStart;

@property (nonatomic, copy) NSString *imageUrl;

@property (nonatomic, assign) UIViewContentMode imageViewContentMode;


@property (nonatomic, weak) UICollectionView *collectionView;


-(void)addHideBlockStart:(VoidBlock)start finish:(VoidBlock)finish cancle:(VoidBlock)cancle;

-(void)showEnlargeAnimation;

-(void)saveImage;

@end
