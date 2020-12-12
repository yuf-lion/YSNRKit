







#import <Foundation/Foundation.h>

typedef void (^LeePhotoOrAlbumImagePickerBlock)(UIImage *image);

NS_ASSUME_NONNULL_BEGIN

@interface YFBIctionaryMedia : NSObject






- (void)getPhotoAlbumOrTakeAPhotoWithController:(UIViewController *)controller photoBlock:(LeePhotoOrAlbumImagePickerBlock)photoBlock;


@end

NS_ASSUME_NONNULL_END
