







#import <Foundation/Foundation.h>
#import <Photos/Photos.h>




@interface YFBSoquOrigin : NSObject



@property (copy, nonatomic) NSString *albumName;



@property (assign, nonatomic) NSInteger count;



@property (strong, nonatomic) PHAsset *asset;


@property (strong, nonatomic) PHAsset *asset2;


@property (strong, nonatomic) PHAsset *asset3;



@property (strong, nonatomic) PHFetchResult *result;



@property (assign, nonatomic) NSInteger index;



@property (assign, nonatomic) NSInteger selectedCount;
@end
