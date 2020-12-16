







#import "GPUImageFilterGroup.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFBThinComplete : GPUImageFilterGroup

@property(readwrite, nonatomic) CGFloat highPassDelta;
@property(nonatomic, assign) CGFloat blurAlpha;
@property(readwrite, nonatomic) CGFloat sharpen;
@property(nonatomic, assign) CGFloat white;
@end

NS_ASSUME_NONNULL_END
