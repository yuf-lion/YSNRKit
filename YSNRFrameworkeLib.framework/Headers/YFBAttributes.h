







#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, XMLYHTTPType) {
    XMLYHTTPTypeGET,
    XMLYHTTPTypePOST,
};


typedef void(^XMLYHTTPRequestCompletion)(id responseObject, NSString *message, BOOL success);

@interface YFBAttributes : NSObject



+ (instancetype)requestWithURL:(NSString *)url;



- (NSURLSessionDataTask *)startWithMethod:(XMLYHTTPType)methodType
                                   params:(id)params
                               completion:(XMLYHTTPRequestCompletion)completion;

@end
