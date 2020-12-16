







#import "YFBInteractionController.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFBMouthController : YFBInteractionController
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UICollectionView *collectionView;
@property(nonatomic,strong) NSMutableArray                      *videoTabelListArray;
@property(nonatomic,strong) NSMutableArray                      *videoCollectionListArray;
@property(nonatomic,strong) YFBDecHotoController                 *navController;
@property (nonatomic,strong) NSMutableArray *adArrary;
@property (nonatomic,strong) NSMutableArray *adInfoArrary;

@property (nonatomic,strong) NSString *selectSex;

@end

NS_ASSUME_NONNULL_END
