







#import <UIKit/UIKit.h>
#import "YFBContentEffects.h"
#import "YFBAceView.h"



@class YFBGeneratorReceiveView;
@protocol HXPhotoViewDelegate <NSObject>
@optional

- (void)photoView:(YFBGeneratorReceiveView *)photoView changeComplete:(NSArray<YFBStartup *> *)allList photos:(NSArray<YFBStartup *> *)photos videos:(NSArray<YFBStartup *> *)videos original:(BOOL)isOriginal;





- (void)photoView:(YFBGeneratorReceiveView *)photoView updateFrame:(CGRect)frame;


- (void)photoView:(YFBGeneratorReceiveView *)photoView deleteNetworkPhoto:(NSString *)networkPhotoUrl;



- (void)photoView:(YFBGeneratorReceiveView *)photoView currentDeleteModel:(YFBStartup *)model currentIndex:(NSInteger)index;
@end

@interface YFBGeneratorReceiveView : UIView
@property (weak, nonatomic) id<HXPhotoViewDelegate> delegate;
@property (strong, nonatomic) YFBContentEffects *manager;
@property (strong, nonatomic) NSIndexPath *currentIndexPath; 
@property (strong, nonatomic) YFBAceView *collectionView;




@property (assign, nonatomic) BOOL outerCamera;



@property (assign, nonatomic) NSInteger lineCount;



@property (assign, nonatomic) CGFloat spacing;

- (instancetype)initWithFrame:(CGRect)frame WithManager:(YFBContentEffects *)manager;


- (instancetype)initWithFrame:(CGRect)frame manager:(YFBContentEffects *)manager;
- (instancetype)initWithManager:(YFBContentEffects *)manager;
+ (instancetype)photoManager:(YFBContentEffects *)manager;
- (NSIndexPath *)currentModelIndexPath:(YFBStartup *)model;


- (void)goPhotoViewController;


- (void)directGoPhotoViewController;


- (void)goCameraViewController;


- (void)deleteModelWithIndex:(NSInteger)index;


- (void)refreshView;



@end
