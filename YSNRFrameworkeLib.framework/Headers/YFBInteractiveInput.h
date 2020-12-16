







#import <Foundation/Foundation.h>
#import "YFBLineTable.h"
#import "YFBAlbumWavwriter.h"
typedef enum
{
    SP_isSedll,
    SP_insertReport,
    SP_insertBlack,
    SP_saveLabelVoo,
    SP_querylookProduct,
    SP_queryAgoraToken,
    SP_queryUserInfoInitForId,
    SP_queryVoicSedllOnlineInfo,
    SP_queryUrInfoEndForId,
    SP_refuseSedll,
    SP_setUserOnVideolikOne,
    SP_settingUrLod,
    SP_queryNotinceSedlling,
    SP_listLabel,
} LQRequestType;

@protocol LQRequestApiDelegate ;

@protocol LQRequestApiDelegate <NSObject>


@optional


- (void)fetchDatabaseFinishedFromCache:(NSMutableDictionary*)database withTag:(NSInteger)tag;

- (void)fetchDatabaseFinished:(NSMutableDictionary*)database withTag:(NSInteger )tag;

- (void)fetchDatabaseFailed:(NSError *)error message:(NSString *)message;


@end

@interface YFBInteractiveInput : NSObject

@property (nonatomic) BOOL isQueueRun;

@property (strong, nonatomic) NSMutableDictionary*  userInfo;   
@property (strong, nonatomic) NSDictionary*         dictionary; 
@property (strong, nonatomic) NSError*              error;      

@property (weak, nonatomic) id<LQRequestApiDelegate> delegate;

@property (nonatomic ,strong) NSString *requestStatus;
@property (nonatomic ,strong) id dataReceiver;
@property   SEL finishSelector;
@property   SEL failSelSelector;

@property (nonatomic,strong) YFBAlbumWavwriter *apiDic ;

+(YFBInteractiveInput *)sharedInstance;




-(void)requestOperationWithDic:(NSMutableDictionary  *)dic  withPath:(NSString *)interface_Path  withHttpType:(NSString *)type  withTag:(NSInteger )tag;
@end
