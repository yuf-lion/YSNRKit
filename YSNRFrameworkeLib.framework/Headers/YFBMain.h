







#import <UIKit/UIKit.h>

@class YFBStartup;
@interface UIImageView (HXExtension)
- (void)hx_setImageWithModel:(YFBStartup *)model progress:(void (^)(CGFloat progress, YFBStartup *model))progressBlock completed:(void (^)(UIImage * image, NSError * error, YFBStartup * model))completedBlock;
@end
