







#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "YFBStartup.h"
#import "YFBSoquOrigin.h"
#import "YFBPhotoModel.h"
#import "YFBSoftAlert.h"
#import "YFBAppOp.h"
#import "YFBEmoji.h"
#import <CoreLocation/CoreLocation.h>
#import "HXPhotoDefine.h"


@class YFBContentEffects;
@interface YFBTextInteraction : NSObject

+ (UIImage *)hx_imageNamed:(NSString *)imageName;



+ (void)saveVideoToCustomAlbumWithName:(NSString *)albumName videoURL:(NSURL *)videoURL;



+ (void)savePhotoToCustomAlbumWithName:(NSString *)albumName photo:(UIImage *)photo;

+ (CLGeocoder *)getDateLocationDetailInformationWithModel:(YFBPublishRequest *)model completion:(void (^)(CLPlacemark *placemark,YFBPublishRequest *model))completion;



+ (PHImageRequestID)getPhotoForPHAsset:(PHAsset *)asset size:(CGSize)size completion:(void(^)(UIImage *image,NSDictionary *info))completion;


+ (PHImageRequestID)getHighQualityFormatPhotoForPHAsset:(PHAsset *)asset size:(CGSize)size completion:(void(^)(UIImage *image,NSDictionary *info))completion error:(void(^)(NSDictionary *info))error;

+ (PHImageRequestID)getImageWithModel:(YFBStartup *)model completion:(void (^)(UIImage *image, YFBStartup *model))completion;

+ (PHImageRequestID)getImageWithAlbumModel:(YFBSoquOrigin *)model size:(CGSize)size completion:(void (^)(UIImage *image, YFBSoquOrigin *model))completion;

+ (PHImageRequestID)getImageWithAlbumModel:(YFBSoquOrigin *)model asset:(PHAsset *)asset size:(CGSize)size completion:(void (^)(UIImage *image, YFBSoquOrigin *model))completion;

+ (PHImageRequestID)getPlayerItemWithPHAsset:(PHAsset *)asset startRequestIcloud:(void (^)(PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(double progress))progressHandler completion:(void(^)(AVPlayerItem *playerItem))completion failed:(void(^)(NSDictionary *info))failed;

+ (PHImageRequestID)getAVAssetWithPHAsset:(PHAsset *)phAsset startRequestIcloud:(void (^)(PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(double progress))progressHandler completion:(void(^)(AVAsset *asset))completion failed:(void(^)(NSDictionary *info))failed;

+ (PHImageRequestID)getHighQualityFormatPhoto:(PHAsset *)asset size:(CGSize)size succeed:(void (^)(UIImage *image))succeed failed:(void(^)())failed;

+ (PHImageRequestID)getHighQualityFormatPhoto:(PHAsset *)asset size:(CGSize)size startRequestIcloud:(void (^)(PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(double progress))progressHandler completion:(void(^)(UIImage *image))completion failed:(void(^)(NSDictionary *info))failed;

+ (PHImageRequestID)getLivePhotoForAsset:(PHAsset *)asset size:(CGSize)size startRequestICloud:(void (^)(PHImageRequestID iCloudRequestId))startRequestICloud progressHandler:(void (^)(double progress))progressHandler completion:(void(^)(PHLivePhoto *livePhoto))completion failed:(void(^)())failed;

+ (PHImageRequestID)getImageData:(PHAsset *)asset startRequestIcloud:(void (^)(PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(double progress))progressHandler completion:(void(^)(NSData *imageData, UIImageOrientation orientation))completion failed:(void(^)(NSDictionary *info))failed;



+ (PHImageRequestID)getAVAssetWithModel:(YFBStartup *)model startRequestIcloud:(void (^)(YFBStartup *model, PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(YFBStartup *model, double progress))progressHandler completion:(void(^)(YFBStartup *model, AVAsset *asset))completion failed:(void(^)(YFBStartup *model, NSDictionary *info))failed;

+ (PHImageRequestID)getLivePhotoWithModel:(YFBStartup *)model size:(CGSize)size startRequestICloud:(void (^)(YFBStartup *model, PHImageRequestID iCloudRequestId))startRequestICloud progressHandler:(void (^)(YFBStartup *model, double progress))progressHandler completion:(void(^)(YFBStartup *model, PHLivePhoto *livePhoto))completion failed:(void(^)(YFBStartup *model, NSDictionary *info))failed;

+ (PHImageRequestID)getImageDataWithModel:(YFBStartup *)model startRequestIcloud:(void (^)(YFBStartup *model, PHImageRequestID cloudRequestId))startRequestIcloud progressHandler:(void (^)(YFBStartup *model, double progress))progressHandler completion:(void(^)(YFBStartup *model, NSData *imageData, UIImageOrientation orientation))completion failed:(void(^)(YFBStartup *model, NSDictionary *info))failed;



+ (void)getVideoEachFrameWithAsset:(AVAsset *)asset total:(NSInteger)total size:(CGSize)size complete:(void (^)(AVAsset *asset, NSArray<UIImage *> *images))complete;



+ (NSString *)getNewTimeFromDurationSecond:(NSInteger)duration;



+ (NSString *)transFormPhotoTitle:(NSString *)englishName;



+ (void)FetchPhotosBytes:(NSArray *)photos completion:(void (^)(NSString *totalBytes))completion;



+ (CGFloat)getTextWidth:(NSString *)text height:(CGFloat)height fontSize:(CGFloat)fontSize;
+ (CGFloat)getTextHeight:(NSString *)text width:(CGFloat)width fontSize:(CGFloat)fontSize;

+ (BOOL)platform;
+ (BOOL)isIphone6;




+ (void)selectListWriteToTempPath:(NSArray *)selectList requestList:(void (^)(NSArray *imageRequestIds, NSArray *videoSessions))requestList completion:(void (^)(NSArray<NSURL *> *allUrl, NSArray<NSURL *> *imageUrls, NSArray<NSURL *> *videoUrls))completion error:(void (^)())error;
@end
