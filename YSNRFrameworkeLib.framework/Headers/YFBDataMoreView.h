







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface YFBAce : NSObject


@property (nonatomic, assign) CGFloat startAngle;

@property (nonatomic, assign) CGFloat endAngle;

@property (nonatomic, assign) CFTimeInterval duration;

@property (nonatomic, assign) CFTimeInterval intervalDuration;

@property (nonatomic, assign) NSInteger number;

@property (nonatomic, assign) CGFloat diameter;

@property (nonatomic, strong) UIColor *backgroundColor;

@end


@interface YFBDataMoreView : UIView


- (void)startAnimation;

- (void)stopAnimation;

- (void)pauseAnimation;

- (void)resumeAnimation;

- (void)updateWithConfigure:(void(^)(YFBAce *configure))configBlock;

@end

NS_ASSUME_NONNULL_END
