







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^blockDiss)(BOOL isDiss);

@interface YFBPickerView : UIView

@property(nonatomic,strong) UIView * pickView;
@property(nonatomic,strong) UILabel * nameLab;
@property(nonatomic,strong) UILabel * typeLab;
@property(nonatomic,strong) UIImageView * hedImage;
@property(nonatomic,strong) UIImageView * typeImage;
@property(nonatomic,strong) UILabel * roselookDescriptionLabel;
@property(nonatomic,strong) UILabel * roselookNumberLabel;

@property (nonatomic, strong) NSString *headString;
@property (nonatomic, copy) blockDiss blockDiss;

- (void)loadlookInfoShowView:(NSString *) tempStr;
- (void)gradientDisappearedView;
- (void)loadContentView:(NSString *) tempStr;
- (void)disslookInfoShowView;

@end

NS_ASSUME_NONNULL_END
