







#import "YFBDetail.h"



@interface YFBThumbnail : YFBDetail



+ (instancetype)soundMessageContentForWav:(NSString *)wavPath
                                 duration:(long)duration;



@property (nonatomic, assign)long duration;



- (void)updateAmrData:(NSData *)leftData;



- (NSData *)getWavData;
@end
