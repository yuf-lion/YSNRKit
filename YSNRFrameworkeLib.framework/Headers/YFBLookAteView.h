
#import <UIKit/UIKit.h>

typedef enum{
    VoiceRecordViewTypeTouchDown,
    VoiceRecordViewTypeTouchUpInside,
    VoiceRecordViewTypeTouchUpOutside,
    VoiceRecordViewTypeDragInside,
    VoiceRecordViewTypeDragOutside,
}VoiceRecordViewType;

@interface YFBLookAteView : UIView

@property (nonatomic) NSArray *leftMessageAnimationImages UI_APPEARANCE_SELECTOR;

@property (nonatomic) NSString *upCancelText UI_APPEARANCE_SELECTOR;

@property (nonatomic) NSString *loosenCancelText UI_APPEARANCE_SELECTOR;
@property (nonatomic,strong)UILabel *textLabel;

-(void)setCountdown:(int)countdown;
-(void)setleftImage:(double)leftMeter;

-(void)recordButtonTouchDown;
-(void)recordButtonTouchUpInside;
-(void)recordButtonTouchUpOutside;
-(void)recordButtonDragInside;
-(void)recordButtonDragOutside;
@end
