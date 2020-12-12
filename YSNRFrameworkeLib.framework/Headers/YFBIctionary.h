







#import <CoreMedia/CoreMedia.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFBIctionary : NSObject

@property(nonatomic, assign) CGFloat audioDuration;
@property(nonatomic, assign) CGFloat videoDuration;

- (id)initWithURL:(NSURL *)url;
- (BOOL)openFile;


- (NSArray *)decodeSampleBuffers;
- (CMSampleBufferRef)decodeSingleVideoSampleBufferAtTime:(CMTime)time;

- (CMTime)seekToBegin;
- (CMTime)seekToTime:(CMTime)time;



- (CGFloat)orientation;
- (CMTime)duration;
- (NSUInteger)sampleRate;
- (NSUInteger)channels;
- (BOOL)isEOF;

@end

NS_ASSUME_NONNULL_END
