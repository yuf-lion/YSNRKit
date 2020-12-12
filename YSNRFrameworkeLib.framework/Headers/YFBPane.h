

#import "MBProgressHUD.h"

@interface MBProgressHUD (Add)
+ (void)show:(NSString *)text icon:(NSString *)icon view:(UIView *)view;
+ (void)showText:(NSString *)text;
+ (void)showText:(NSString *)text dismissAfter:(CGFloat)time;
+ (void)showLoadIngViewToView:(UIView *)view;
+ (void)showLoadingText:(NSString *)text dismissAfter:(CGFloat)time;

+ (void)showLoadIngView;
+ (void)showLoadErrorToView:(UIView *)view;
+ (void)showLoadNoDataToView:(UIView *)view;
+ (void)showLoadNoCollectionToView:(UIView *)view;
+ (void)showLoadNoAddressToView:(UIView *)view;
+ (void)showLoadNoNoticeToView:(UIView *)view;
+ (void)showLoadNoNetworkToView:(UIView *)view;
+ (void)showLoadNoMessageToView:(UIView *)view;
@end
