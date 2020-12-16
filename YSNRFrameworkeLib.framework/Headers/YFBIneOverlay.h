







#import <UIKit/UIKit.h>

@interface YFBIneOverlay : UIView



+(YFBIneOverlay*)shareInstanse;



-(void)showNetImages:(NSArray <NSString *>*)imageUrls index:(NSInteger)index fromImageContainer:(UIView*)imageContainer;



-(void)showLocalImages:(NSArray <NSString *>*)imagePathes index:(NSInteger)index fromImageContainer:(UIView*)imageContainer;


@property (nonatomic, strong) UIView *superContentView;
@end
