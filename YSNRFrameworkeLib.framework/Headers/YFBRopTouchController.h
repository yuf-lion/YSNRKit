







#import <UIKit/UIKit.h>
#import <PhotosUI/PhotosUI.h>
#import "YFBContentEffects.h"

@class YFBRopTouchController,YFBSerializerView,YFBNavigationLightCell,YFBGeneratorReceiveView;
@protocol HXDatePhotoPreviewViewControllerDelegate <NSObject>
@optional
- (void)datePhotoPreviewControllerDidSelect:(YFBRopTouchController *)previewController model:(YFBStartup *)model;
- (void)datePhotoPreviewControllerDidDone:(YFBRopTouchController *)previewController;
- (void)datePhotoPreviewDidEditClick:(YFBRopTouchController *)previewController;
- (void)datePhotoPreviewSingleSelectedClick:(YFBRopTouchController *)previewController model:(YFBStartup *)model;
- (void)datePhotoPreviewDownLoadICloudAssetComplete:(YFBRopTouchController *)previewController model:(YFBStartup *)model;
- (void)datePhotoPreviewSelectLaterDidEditClick:(YFBRopTouchController *)previewController beforeModel:(YFBStartup *)beforeModel afterModel:(YFBStartup *)afterModel;
@end

@interface YFBRopTouchController : UIViewController<UIViewControllerTransitioningDelegate,UINavigationControllerDelegate>
@property (weak, nonatomic) id<HXDatePhotoPreviewViewControllerDelegate> delegate;
@property (strong, nonatomic) YFBContentEffects *manager;
@property (strong, nonatomic) NSMutableArray *modelArray;
@property (assign, nonatomic) NSInteger currentModelIndex;
@property (assign, nonatomic) BOOL outside;
@property (assign, nonatomic) BOOL selectPreview;
@property (strong, nonatomic) UICollectionView *collectionView;
@property (strong, nonatomic) YFBSerializerView *bottomView;
@property (strong, nonatomic) YFBGeneratorReceiveView *photoView;
@property (assign, nonatomic) BOOL stopCancel;
- (YFBNavigationLightCell *)currentPreviewCell:(YFBStartup *)model;
- (void)setSubviewAlphaAnimate:(BOOL)animete;
@end


@interface YFBNavigationLightCell : UICollectionViewCell
@property (assign, nonatomic) BOOL stopCancel;
@property (strong, nonatomic) YFBStartup *model;
@property (strong, nonatomic, readonly) UIImageView *imageView;
@property (strong, nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (strong, nonatomic, readonly) UIImage *gifImage;
@property (strong, nonatomic) UIButton *videoPlayBtn;
@property (assign, nonatomic) BOOL dragging;
@property (nonatomic, copy) void (^cellTapClick)();
@property (nonatomic, copy) void (^cellDidPlayrightBtn)(BOOL play);
@property (nonatomic, copy) void (^cellDownloadICloudAssetComplete)(YFBNavigationLightCell *myCell);
- (void)againAddImageView;
- (void)resetScale;
- (void)requestHDImage;
- (void)cancelRequest;
@end
