







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFBXiaoxiCell : UICollectionViewCell<AVAudioPlayerDelegate,LQRequestApiDelegate>
@property(nonatomic,strong) UIImageView * topImageView;
@property(nonatomic,strong) UILabel * topImageLabel;
@property(nonatomic,strong) UILabel * topNameLabel;
@property(nonatomic,strong) UIImageView * topSxImage;
@property(nonatomic,strong) UIButton * topAeButton;
@property(nonatomic,strong) UIButton * topIDButton;
@property(nonatomic,strong) UIButton * topLeftButton;
@property(nonatomic,strong) UILabel * topStatusView;
@property(nonatomic,strong) UIView * statusBackView;
@property(nonatomic,strong) UILabel * topStatusLineLabel;
@property(nonatomic,strong) UILabel * topStatusLabel;
@property(nonatomic,strong) UILabel * timeBackLabel;
@property(nonatomic,strong) UIView * timeBackView;
@property(nonatomic,strong) UIImageView * timeOnlineImageView;
@property(nonatomic,strong) UILabel * timeLabel;


@property (strong, nonatomic) NSDictionary *leftDic;
@property (strong, nonatomic) AVAudioPlayer *player;
@property(nonatomic,strong) YFBDecHotoController                 *navController;
@end

NS_ASSUME_NONNULL_END
