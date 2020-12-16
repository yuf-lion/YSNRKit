







#import <UIKit/UIKit.h>

@interface YFBImageSource : UIImage







@property (nonatomic, readonly) NSTimeInterval *frameDurations;



@property (nonatomic, readonly) NSTimeInterval totalDuration;



@property (nonatomic, readonly) NSUInteger loopCount;

- (UIImage*)getFrameWithIndex:(NSUInteger)idx;

@end
