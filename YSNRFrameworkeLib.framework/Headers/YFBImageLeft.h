








#import "GPUImageVideoCamera.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFBImageLeft : GPUImageVideoCamera
@property(nonatomic, assign) BOOL drawLandmarks;

- (void)switchTorch;
- (BOOL)torchAvailable;

- (void)setupFacepp;
@end

NS_ASSUME_NONNULL_END
