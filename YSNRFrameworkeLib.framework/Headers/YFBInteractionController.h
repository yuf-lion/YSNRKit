







#import <UIKit/UIKit.h>

#import "YFBInteractiveInput.h"
#import "YFBWavRop.h"

@interface YFBInteractionController : UIViewController<LQRequestApiDelegate>{
    YFBInteractiveInput       *shareApi;

}
@property (nonatomic ,strong) YFBInteractiveInput       *shareApi;
@property (nonatomic ,strong) NSTimer       *cyclechaatTimer;
@property NSInteger chaatCounter;


- (void) adaptiveViewLayout:(UIView *)viewLayout;

- (void)ShowMainCorePage;
-(void)dismissWaitDialog;
- (NSString *)dataIsNull:(NSDictionary *)dic dataStr:(NSString *)dataStr;

- (void)queryUrInfoEndForId;
@end
