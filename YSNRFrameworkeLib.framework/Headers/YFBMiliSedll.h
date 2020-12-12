







#import <UIKit/UIKit.h>

@interface YFBMiliSedll : NSObject
+ (CGSize)getTextDrawingSize:(NSString *)text
                        font:(UIFont *)font
             constrainedSize:(CGSize)constrainedSize;
+ (NSString *)formatTimeLabel:(int64_t)timestamp;
+ (NSString *)formatTimeDetailLabel:(int64_t)timestamp;
+ (UIImage *)thumbnailWithImage:(UIImage *)originalImage maxSize:(CGSize)size;
+ (NSString *)formatWeek:(NSUInteger)weekDays;
@end
