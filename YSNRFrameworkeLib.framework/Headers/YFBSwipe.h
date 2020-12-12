







#import "YFBSoundRopped.h"



typedef NS_ENUM(NSInteger, WFCCTypingType) {
    Typing_TEXT = 0,
    Typing_VOICE = 1,
    Typing_CAMERA = 2,
    Typing_LOCATION = 3,
    Typing_FILE = 4
};




@interface YFBSwipe : YFBSoundRopped



+ (instancetype)contentType:(WFCCTypingType)type;



@property (nonatomic, assign)WFCCTypingType type;
@end
