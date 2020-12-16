







#import <CoreMedia/CoreMedia.h>
#import <Foundation/Foundation.h>

@protocol FillDataDelegate <NSObject>

- (NSInteger)fillAudioData:(SInt16*)sampleBuffer numFrames:(NSInteger)frameNum numChannels:(NSInteger)channels;
- (void)recordDidReceiveAudioBuffer:(AudioBufferList *)audioBuffer;
@end

@interface YFBUtilitiesComplete : NSObject



@property (nonatomic, assign) Float32 originVolume;
@property (nonatomic, assign) Float32 musicVolume;

- (id)initWithChannels:(NSInteger)channels sampleRate:(NSInteger)sampleRate filleDataDelegate:(id<FillDataDelegate>)fillAudioDataDelegate;

- (void)play;
- (void)stop;
- (void)playWithMusicFile:(NSString *)filePath startOffset:(NSTimeInterval)startOffset;


- (void)resumeMusicPlay;
- (void)pauseMusicPlay;
@end
