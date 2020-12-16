







#import <Foundation/Foundation.h>

@interface YFBAgoraAlertItem : NSObject
@property(nonatomic, copy) NSString *name;
@property(nonatomic, assign) BOOL selected;
@property(nonatomic, readonly) NSString *thumbPath;

@property(nonatomic, copy) NSString *path;
@end

@interface YFBLoading : NSObject

@property(nonatomic, copy) NSString *videoPath;
@property(nonatomic, readonly) NSString *musicPath;
@property(nonatomic, copy) NSArray<YFBAgoraAlertItem*> *musicItems;

- (void)setPreview:(UIView *)preview;

- (void)play;
- (void)pause;
- (void)playWithMusic:(NSString *)music;

- (CGFloat)musicVolume;
- (CGFloat)originVolume;
- (void)changeVolume:(CGFloat)volume isMusic:(CGFloat)isMusic;

- (void)saveMovieWithProgressHandle:(void(^)(CGFloat progress))progressHandle;

@end


