







#import <UIKit/UIKit.h>
#import "YFBIneNterestView.h"
NS_ASSUME_NONNULL_BEGIN

typedef void (^OnPlayerReady)(void);


@interface YFBEasterncattleCell : UITableViewCell
@property(nonatomic,strong) UIImageView * viewBackImage;
@property(nonatomic,strong) UIImageView * backImageView;
@property(nonatomic,strong) UILabel * titleLabel;
@property(nonatomic,strong) UILabel * topALabel;
@property(nonatomic,strong) UILabel * topIdLabel;
@property(nonatomic,strong) UILabel * topOnlineLabel;
@property(nonatomic,strong) UILabel * descriptionLabel;
@property(nonatomic,strong) UIImageView * titileBackImageView;
@property(nonatomic,strong) UIImageView * titileImageView;
@property(nonatomic,strong) UIButton * topDetailButton;
@property(nonatomic,strong) UIImageView * folwMakRedImage;
@property(nonatomic,strong) UIImageView * focusImageView;
@property(nonatomic,strong) UIButton * focusButton;
@property(nonatomic,strong) UIImageView * rightSedllImageVIew;
@property(nonatomic,strong) UIButton * rightSedllButton;
@property(nonatomic,strong) UIImageView * chaatImageView;
@property(nonatomic,strong) UIButton * chaatButton;



@property (nonatomic, strong) OnPlayerReady    onPlayerReady;
@property (nonatomic, assign) BOOL                              isCurPlayerPause;
@property (nonatomic, strong) YFBIneNterestView             *playerView;
@property (nonatomic, assign) BOOL             isPlayerReady;

@property(nonatomic,copy)void(^videoBlock)();
@property(nonatomic,copy)void(^settingBlock)(NSInteger num);
- (void)initData:(NSDictionary *)rightData;
- (void)play;
- (void)pause;
- (void)replay;
- (void)startDownloadBackgroundTask;
- (void)startDownloadHighPriorityTask;
- (void)showPauseViewAnim:(CGFloat)rate;
- (void)singleTapAction;

@end

NS_ASSUME_NONNULL_END
