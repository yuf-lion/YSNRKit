







#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,VideoFillMode){
    VideoFillModeResize = 0,       
    VideoFillModeResizeAspect,     
    VideoFillModeResizeAspectFill, 
};
typedef NS_ENUM(NSUInteger, TopToolBarHiddenType) {
    TopToolBarHiddenNever = 0, 
    TopToolBarHiddenAlways,    
    TopToolBarHiddenSmall,     
};
typedef void(^BackButtonBlock)(UIButton *button);
typedef void(^EndBolck)(void);

@interface YFBTypes : NSObject



@property (nonatomic, assign) BOOL                    backPlay;


@property (nonatomic, assign) BOOL                    repeatPlay;


@property (nonatomic, assign) BOOL                    isLandscape;


@property (nonatomic, assign) BOOL                    autoRotate;


@property (nonatomic, assign) BOOL                    mute;


@property (nonatomic, assign) BOOL                    smallGestureControl;


@property (nonatomic, assign) BOOL                    fullGestureControl;;


@property (nonatomic, assign) NSInteger               toolBarDisappearTime;


@property (nonatomic, assign) VideoFillMode           videoFillMode;


@property (nonatomic, assign) TopToolBarHiddenType    topToolBarHiddenType;



@property (nonatomic, strong) UIColor                 *progressBackgroundColor;


@property (nonatomic, strong) UIColor                 *progressBufferColor;


@property (nonatomic, strong) UIColor                 *progressPlayFinishColor;


@property (nonatomic, strong) UIColor                 *strokeColor;



+ (instancetype)defaultConfigure;

@end

@interface YFBCtivityTransitioningView : UIView



@property (nonatomic, assign, readonly) BOOL          isFullScreen;


@property (nonatomic, strong) NSURL                   *url;



- (void)updateWithConfigure:(void(^)(YFBTypes *configure))configureBlock;



- (void)playVideo;


- (void)pausePlay;


- (void)backButton:(BackButtonBlock) backButton;


- (void)endPlay:(EndBolck) end;


- (void)destroyPlayer;

@end
