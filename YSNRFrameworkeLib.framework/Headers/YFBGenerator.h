







#import <UIKit/UIKit.h>
#import <CoreMedia/CoreMedia.h>

typedef NS_ENUM(NSUInteger, FaceDetectorSampleBufferOrientation) {
    FaceDetectorSampleBufferOrientationCameraFrontAndHorizontallyMirror,
    FaceDetectorSampleBufferOrientationCameraBack,
    FaceDetectorSampleBufferOrientationNoRatation,
    FaceDetectorSampleBufferOrientationRatation90,
    FaceDetectorSampleBufferOrientationRatation180,
    FaceDetectorSampleBufferOrientationRatation270,
};

typedef NS_ENUM(NSUInteger, FaceDetectorSampleType) {
    FaceDetectorSampleTypeNone,
    FaceDetectorSampleTypeCamera,
    FaceDetectorSampleTypeMovieFile,
};

NS_ASSUME_NONNULL_BEGIN

@interface YFBGeneratorMain : NSObject
@property (nonatomic, assign) CGRect bounds;
@property (nonatomic, copy) NSArray<NSValue *> *landmarks;

@property (nonatomic, assign) CGFloat yawAngle;
@property (nonatomic, assign) CGFloat rollAngle;
@property (nonatomic, assign) CGFloat pitchAngle;

@end

@interface YFBGenerator : NSObject

@property (assign, nonatomic) BOOL isAuth;

@property (copy, nonatomic, readonly) NSArray<YFBGeneratorMain *> *faceModels;
@property (strong, nonatomic, readonly) YFBGeneratorMain *oneFace;
@property (assign, nonatomic, readonly) BOOL isWorking;
@property (assign, nonatomic) int faceOrientation;
@property (assign, nonatomic) FaceDetectorSampleBufferOrientation sampleBufferOrientation;
@property (assign, nonatomic) FaceDetectorSampleType sampleType;

+ (instancetype)shareInstance;
- (void)getLandmarksFromSampleBuffer:(CMSampleBufferRef)detectSampleBufferRef;
- (void)auth;
@end

NS_ASSUME_NONNULL_END
