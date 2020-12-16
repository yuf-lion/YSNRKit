







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


typedef void(^didSelectBlock)(NSInteger selectRow);

@interface YFBRefreshAlertView : UIView

@property (strong, nonatomic) didSelectBlock didSelectBlock;
@property (weak, nonatomic) IBOutlet UILabel *wenxinTishiLabel;
@property (weak, nonatomic) IBOutlet UIButton *alertOneButton;
@property (weak, nonatomic) IBOutlet UIButton *alertTwoButton;

- (void)xianshiView:(UIViewController *)superViewController;

@end

NS_ASSUME_NONNULL_END
