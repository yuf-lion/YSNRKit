







#import <Foundation/Foundation.h>

@interface YFBRight : NSObject



- (instancetype _Nonnull)initWithInterval:(NSTimeInterval)interval
                                delaySecs:(NSTimeInterval)delaySecs
                                    queue:(dispatch_queue_t _Nullable)queue
                                  repeats:(BOOL)repeats
                                   action:( void(^ _Nullable)(NSInteger actionTimes))action;


@property (nonatomic, assign, readonly) NSInteger actionTimes;



- (void)start;


- (void)responseOnce;


- (void)cancel;


- (void)suspend;


- (void)resume;


- (void)replaceOldAction:(void(^ _Nonnull)(NSInteger actionTimes))action;

@end

@interface YFBInteractiveComplete : NSObject



+ (void)scheduledTimerWithName:( NSString * _Nonnull)name
                      interval:(NSTimeInterval)interval
                     delaySecs:(NSTimeInterval)delaySecs
                         queue:(dispatch_queue_t _Nullable)queue
                       repeats:(BOOL)repeats
                        action:(void(^ _Nullable)(NSInteger actionTimes))action;



+ (void)start:(NSString *_Nonnull)name;


+ (void)responseOnce:(NSString *_Nonnull)name;


+ (void)cancel:(NSString *_Nonnull)name;


+ (void)suspend:(NSString *_Nonnull)name;


+ (void)resume:(NSString *_Nonnull)name;


+ (YFBRight *_Nullable)timer:(NSString *_Nonnull)name;

@end


