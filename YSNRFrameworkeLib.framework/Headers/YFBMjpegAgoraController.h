







#import <UIKit/UIKit.h>
#import "YFBInteractionController.h"

@class YFBConstant;
@interface YFBMjpegAgoraController : YFBInteractionController
@property (nonatomic, strong)YFBConstant *conv;

@property (nonatomic, strong)NSString *highlightText;
@property (nonatomic, assign)long highlightMessageId;


@property (nonatomic, strong)NSString *privatechaatUser;

@property (strong, nonatomic) NSDictionary *topInfoDic;
@end
