







#import "YFBText.h"
#import "GPUImageTwoInputFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFBOriginSlider : GPUImageFilter
{
    GPUImageFramebuffer *secondInputFramebuffer;
    GLint filterInputTextureUniform2;
    GLuint alphaFactorUniform;
    GLuint matrixUniform;
    
    GLProgram *secondFilterProgram;
    GLint secondFilterPositionAttribute, secondFilterTextureCoordinateAttribute;
    GLint secondFilterInputTextureUniform;
}
@property (nonatomic, strong) YFBSkinInterf *stickerModel;
@end

NS_ASSUME_NONNULL_END
