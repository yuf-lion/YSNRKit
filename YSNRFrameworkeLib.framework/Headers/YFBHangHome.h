







#import "YFBDetail.h"
#import <UIKit/UIKit.h>



@interface YFBHangHome : YFBDetail



+ (instancetype)contentFrom:(UIImage *)image;



@property (nonatomic, strong)UIImage *contentImage;



@property (nonatomic, strong)UIImage *thumbnail;



@property (nonatomic, assign, readonly)CGSize size;



@property (nonatomic, strong)NSString *thumbParameter;

@end
