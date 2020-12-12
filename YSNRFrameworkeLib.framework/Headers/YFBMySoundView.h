







#import <UIKit/UIKit.h>
#import "YFBPresentTouch.h"
#import "YFBDataMoreView.h"

@protocol CLPlayerMaskViewDelegate <NSObject>


- (void)cl_backButtonAction:(UIButton *)button;


- (void)cl_playButtonAction:(UIButton *)button;


- (void)cl_fullButtonAction:(UIButton *)button;


- (void)cl_progressSliderTouchBegan:(YFBPresentTouch *)slider;


- (void)cl_progressSliderValueChanged:(YFBPresentTouch *)slider;


- (void)cl_progressSliderTouchEnded:(YFBPresentTouch *)slider;


- (void)cl_failButtonAction:(UIButton *)button;
@end

@interface YFBMySoundView : UIView


@property (nonatomic,strong) UIView *topToolBar;


@property (nonatomic,strong) UIView *bottomToolBar;


@property (nonatomic,strong) YFBDataMoreView *loadingView;


@property (nonatomic,strong) UIButton *backButton;


@property (nonatomic,strong) UIButton *playButton;


@property (nonatomic,strong) UIButton *fullButton;


@property (nonatomic,strong) UILabel *currentTimeLabel;


@property (nonatomic,strong) UILabel *totalTimeLabel;


@property (nonatomic,strong) UIProgressView *progress;


@property (nonatomic,strong) YFBPresentTouch *slider;


@property (nonatomic,strong) UIButton *failButton;


@property (nonatomic,weak) id<CLPlayerMaskViewDelegate> delegate;


@property (nonatomic,strong) UIColor *progressBackgroundColor;


@property (nonatomic,strong) UIColor *progressBufferColor;


@property (nonatomic,strong) UIColor *progressPlayFinishColor;

@end
