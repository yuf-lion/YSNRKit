







#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "YFBSoquOrigin.h"
#import "YFBStartup.h"
#import "YFBTextInteraction.h"
#import "YFBCollection.h"


typedef enum : NSUInteger {
    HXPhotoManagerSelectedTypePhoto = 0,        
    HXPhotoManagerSelectedTypeVideo = 1,        
    HXPhotoManagerSelectedTypePhotoAndVideo     
} HXPhotoManagerSelectedType;

@interface YFBContentEffects : NSObject

@property (assign, nonatomic) HXPhotoManagerSelectedType type;



- (instancetype)initWithType:(HXPhotoManagerSelectedType)type;



@property (strong, nonatomic) YFBCollection *configuration;



@property (copy, nonatomic) NSArray *localImageList;



- (void)addLocalImage:(NSArray *)images selected:(BOOL)selected;



- (void)addLocalImageToAlbumWithImages:(NSArray *)images;



- (void)addNetworkingImageToAlbum:(NSArray<NSString *> *)imageUrls selected:(BOOL)selected;



@property (strong, nonatomic,readonly) NSMutableArray *albums;



@property (strong, nonatomic) NSArray<NSString *> *networkPhotoUrls;




- (void)getAllPhotoAlbums:(void(^)(YFBSoquOrigin *firstAlbumModel))firstModel albums:(void(^)(NSArray *albums))albums isFirst:(BOOL)isFirst;



- (void)getPhotoListWithAlbumModel:(YFBSoquOrigin *)albumModel complete:(void (^)(NSArray *allList , NSArray *previewList,NSArray *photoList ,NSArray *videoList ,NSArray *dateList , YFBStartup *firstSelectModel))complete;



- (void)addICloudModel:(YFBStartup *)model;



- (NSString *)maximumOfJudgment:(YFBStartup *)model;





- (NSInteger)selectedCount;


- (NSInteger)selectedPhotoCount;


- (NSInteger)selectedVideoCount;


- (NSArray *)selectedArray;


- (NSArray *)selectedPhotoArray;


- (NSArray *)selectedVideoArray;


- (BOOL)original;


- (void)setOriginal:(BOOL)original;


- (BOOL)beforeSelectPhotoCountIsMaximum;


- (BOOL)beforeSelectVideoCountIsMaximum;


- (void)beforeSelectedListdeletePhotoModel:(YFBStartup *)model;


- (void)beforeSelectedListAddPhotoModel:(YFBStartup *)model;


- (void)beforeSelectedListAddEditPhotoModel:(YFBStartup *)model;


- (void)beforeListAddCameraTakePicturesModel:(YFBStartup *)model;





- (BOOL)afterSelectCountIsMaximum;


- (BOOL)afterSelectPhotoCountIsMaximum;


- (BOOL)afterSelectVideoCountIsMaximum;


- (NSInteger)afterSelectedCount;


- (NSArray *)afterSelectedArray;


- (NSArray *)afterSelectedPhotoArray;


- (NSArray *)afterSelectedVideoArray;


- (void)setAfterSelectedPhotoArray:(NSArray *)array;


- (void)setAfterSelectedVideoArray:(NSArray *)array;


- (BOOL)afterOriginal;


- (void)afterSelectedArraySwapPlacesWithFromModel:(YFBStartup *)fromModel fromIndex:(NSInteger)fromIndex toModel:(YFBStartup *)toModel toIndex:(NSInteger)toIndex;


- (void)afterSelectedArrayReplaceModelAtModel:(YFBStartup *)atModel withModel:(YFBStartup *)model;


- (void)afterSelectedListAddEditPhotoModel:(YFBStartup *)model;


- (void)afterListAddCameraTakePicturesModel:(YFBStartup *)model;


- (void)afterSelectedListdeletePhotoModel:(YFBStartup *)model;


- (void)afterSelectedListAddPhotoModel:(YFBStartup *)model;



- (void)selectedListTransformAfter;
- (void)selectedListTransformBefore;



- (void)cancelBeforeSelectedList;



- (void)clearSelectedList;



- (void)changeAfterCameraArray:(NSArray *)array;
- (void)changeAfterCameraPhotoArray:(NSArray *)array;
- (void)changeAfterCameraVideoArray:(NSArray *)array;
- (void)changeAfterSelectedCameraArray:(NSArray *)array;
- (void)changeAfterSelectedCameraPhotoArray:(NSArray *)array;
- (void)changeAfterSelectedCameraVideoArray:(NSArray *)array;
- (void)changeAfterSelectedArray:(NSArray *)array;
- (void)changeAfterSelectedPhotoArray:(NSArray *)array;
- (void)changeAfterSelectedVideoArray:(NSArray *)array;
- (void)changeICloudUploadArray:(NSArray *)array;
- (NSArray *)afterCameraArray;
- (NSArray *)afterCameraPhotoArray;
- (NSArray *)afterCameraVideoArray;
- (NSArray *)afterSelectedCameraArray;
- (NSArray *)afterSelectedCameraPhotoArray;
- (NSArray *)afterSelectedCameraVideoArray;
- (NSArray *)afterICloudUploadArray;
@end
