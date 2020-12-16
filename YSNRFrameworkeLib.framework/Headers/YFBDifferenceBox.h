










#define MESSAGE_CONTENT_TYPE_UNKNOWN 0

#define MESSAGE_CONTENT_TYPE_TEXT 1

#define MESSAGE_CONTENT_TYPE_SOUND 2

#define MESSAGE_CONTENT_TYPE_IMAGE 3

#define MESSAGE_CONTENT_TYPE_LOCATION 4

#define MESSAGE_CONTENT_TYPE_FILE 5

#define MESSAGE_CONTENT_TYPE_VIDEO 6

#define MESSAGE_CONTENT_TYPE_STICKER 7

#define MESSAGE_CONTENT_TYPE_IMAGETEXT 8

#define MESSAGE_CONTENT_TYPE_P_TEXT 9



#define MESSAGE_CONTENT_TYPE_RESedll 80


#define MESSAGE_CONTENT_TYPE_TIP 90


#define MESSAGE_CONTENT_TYPE_TYPING 91



#define MESSAGE_CONTENT_TYPE_CREATE_GROUP 104

#define MESSAGE_CONTENT_TYPE_ADD_GROUP_MEMBER 105

#define MESSAGE_CONTENT_TYPE_KICKOF_GROUP_MEMBER 106

#define MESSAGE_CONTENT_TYPE_QUIT_GROUP 107

#define MESSAGE_CONTENT_TYPE_DISMISS_GROUP 108

#define MESSAGE_CONTENT_TYPE_TRANSFER_GROUP_OWNER 109

#define MESSAGE_CONTENT_TYPE_CHANGE_GROUP_NAME 110

#define MESSAGE_CONTENT_TYPE_MODIFY_GROUP_ALIAS 111

#define MESSAGE_CONTENT_TYPE_CHANGE_GROUP_PORTRAIT 112

#define MESSAGE_CONTENT_TYPE_CHANGE_MUTE 113
#define MESSAGE_CONTENT_TYPE_CHANGE_JOINTYPE 114
#define MESSAGE_CONTENT_TYPE_CHANGE_PRIVATEchaat 115
#define MESSAGE_CONTENT_TYPE_CHANGE_SEARCHABLE 116
#define MESSAGE_CONTENT_TYPE_SET_MANAGER 117


#define VOIP_CONTENT_TYPE_START 400

#define VOIP_CONTENT_TYPE_END 402

#define VOIP_CONTENT_TYPE_ACCEPT 401
#define VOIP_CONTENT_TYPE_SIGNAL 403
#define VOIP_CONTENT_TYPE_MODIFY 404
#define VOIP_CONTENT_TYPE_ACCEPT_T 405


#import <Foundation/Foundation.h>
@interface YFBDifferenceBox : NSObject
#import "YFBInteractiveInput.h"
#pragma mark  接口传递参数
+(void) setHaiYuBaseVer:(NSString *)haiYuBaseVer;
+(NSString *) getHaiYuBaseVer;
+(void) setHaiYuBase:(NSString *)haiYuBase;
+(NSString *) getHaiYuBase;

+(NSString *) getDomainName;
+(void) setDomainName:(NSString *)domainNameStr;


+(NSMutableDictionary *)postBasicReqestArgs:(NSMutableDictionary *)dataDic;

+(NSBundle *)getNSBundleInfo;


+(NSMutableDictionary *) getLongitude;

+(void) setLongitude:(NSMutableDictionary *)Longitude;

+ (void)currentFaceConfigurationFile:(NSDictionary *)dict;

+(BOOL)getFaceConfigurationStatus;

+(NSDictionary *)getFaceConfigurationInfo;

+ (void)currentFaceSecret:(NSDictionary *)dict;

+(NSDictionary *)getFaceSecret;


+(UIViewController *) getControllerDelegate;

+(void) setControllerDelegate:(UIViewController *)controllerDelegate;


+(BOOL) getleftPlayStatus;

+(void) setLeftPlayStatus:(BOOL)playStatus;


+(BOOL) getRefreshStatus;

+(void) setRefreshStatus:(BOOL)refreshStatus;

+ (void)SedllPhone:(NSString*)iphoneNum view:(UIView*)view;

+ (BOOL)isMobileNumber:(NSString *)mobile;

+ (BOOL)dataIsNULL:(NSString *)data;

+(BOOL)getshowMainStatus;


+(NSDictionary *)getMainCoreInfo;

+ (BOOL)DeleteSingleFile;

+ (void)currentUserSingleFile:(NSDictionary *)dict;

+ (NSString *) shaEncrypt:(NSString *)input;

+ (NSString *)stringFromData:(id)data;
+ (NSString *)invalidatepassable:(NSDictionary *)dic key:(NSString *)key;

+ (YFBInteractiveInput *)getRequestApi;
+ (void)setRequestApi:(YFBInteractiveInput *)api;
+ (NSString *)getCurrentTimes;
+ (NSString *)dicGotoString:(NSDictionary *)dic;
+ (UIViewController *)getCurrentViewController;
+ (UIImage *)colorToUiimage:(UIColor *)color;

+ (BOOL)strValidationNum:(NSString *)str;

+ (NSString *)updateAmrData:(NSData *)leftData;


+ (BOOL)hasHeadset;

+ (NSString *)gs_getCurrentTimeStringToMilliSecond;

+ (NSData *)getWavData:(NSString *)url;
+ (UIColor *)colorWithHexString:(NSString *)color;
+ (NSString *) md5:(NSString *)inputStr;

+ (NSString *)formatTimeLabel:(NSString *)timestamp;

+ (NSString *)emojiConvert:(NSString *)obj;

+ (NSString *)emojiRecovery:(NSString *)obj;
@end
