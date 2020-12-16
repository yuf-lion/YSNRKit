







#import <Foundation/Foundation.h>

enum {
    TipsStatusTextOnly,       
    TipsStatusLoading         
};

typedef int TipsStatusType;

@interface YFBEntranceRepresentation : NSObject

+ (instancetype)sharedInstance;

+ (void)showTips:(NSString *)tips;

+ (void)showLoadingTips:(NSString *)tips;

+ (void)hideTips;

- (void)showTips:(NSString *)tips;

- (void)showLoadingTips:(NSString *)tips;

- (void)showTips:(NSString *)tips withStatus:(int)status dismissAfter:(NSTimeInterval)delay;

- (void)hideTips;

- (void)hideTipsAnimated:(BOOL)animated;





@end
