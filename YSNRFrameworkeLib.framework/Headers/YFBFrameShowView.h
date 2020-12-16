





















#import <UIKit/UIKit.h>



@interface YFBFrameShowView : UIScrollView

@property (nullable, nonatomic, copy) void (^touchesBegan)(void);
@property (nullable, nonatomic, copy) void (^touchesCancelled)(void);
@property (nullable, nonatomic, copy) void (^touchesEnded)(void);

@end
