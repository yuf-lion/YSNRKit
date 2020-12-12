







#import <UIKit/UIKit.h>

@class YFBImageSourceSedllView;
@protocol STHeaderViewDelegate <NSObject>

- (CGPoint)minHeaderViewFrameOrgin;
- (CGPoint)maxHeaderViewFrameOrgin;

@optional
- (void)headerViewDidFrameChanged:(YFBImageSourceSedllView *)headerView;
- (void)headerView:(YFBImageSourceSedllView *)headerView didPan:(UIPanGestureRecognizer *)pan;
- (void)headerView:(YFBImageSourceSedllView *)headerView didPanGestureRecognizerStateChanged:(UIPanGestureRecognizer *)pan;

@end




NS_CLASS_AVAILABLE_IOS(7_0) @interface YFBImageSourceSedllView : UIView

@property (nonatomic, readonly, strong) UIPanGestureRecognizer * panGestureRecognizer;
@property (nonatomic, weak) id<STHeaderViewDelegate> delegate;
@property (nonatomic, readonly, getter=isTracking)     BOOL tracking;
@property (nonatomic, readonly, getter=isDragging)     BOOL dragging;
@property (nonatomic, readonly, getter=isDecelerating) BOOL decelerating;



- (void)endDecelerating;

@end
