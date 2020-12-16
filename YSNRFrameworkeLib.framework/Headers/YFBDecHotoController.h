







#import <UIKit/UIKit.h>

@interface YFBDecHotoController : UINavigationController
@property (nonatomic , assign) UIInterfaceOrientation interfaceOrientation;
@property (nonatomic , assign) UIInterfaceOrientationMask interfaceOrientationMask;
@property (nonatomic , strong) UIViewController * _Nullable lastViewController;


- (void)popViewController;
- (void)pushToViewController:(UIViewController *_Nullable)viewController;
- (void)popViewControllerWithBackIndex:(NSInteger)backIndex;
- (void)presentToViewController:(UIViewController *)viewController;

- (void)dissMissViewController;
-(void)dismissToRootViewController;


- (void)presentViewController:(UIViewController *)viewControllerToPresent animated: (BOOL)flag completion:(void (^ __nullable)(void))completion API_AVAILABLE(ios(5.0));
@end
