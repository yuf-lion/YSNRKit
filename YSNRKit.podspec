
Pod::Spec.new do |spec|


  spec.name         = "YSNRKit"
  spec.version      = "1.0.6"
  spec.summary      = "开发中常用的自定义控件、开发经验、开发bug记录，常用宏、categories等封装，不再每个项目都手动配置，用Pod统一管理。"


  spec.description  = <<-DESC
                      开发中经常从A项目copy一些代码（比如常用的宏、category等）到B项目，A更改了一个category，B又要改动；B更改了一个category，A也要改动，不方便同步，就容易出差错，所以，考虑用Pod来管理。
                   DESC

  spec.homepage     = "https://github.com/yuf-lion/YSNRKit"


  spec.license      = "MIT"


  spec.author             = { "clkj_ql" => "yu_yuf@sina.com" }


  spec.platform     = :ios

  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/yuf-lion/YSNRKit.git", :tag => "#{spec.version}" }

 
  spec.dependency "AFNetworking", "~> 4.0.1"
  spec.dependency "AgoraRtcEngine_iOS", "~> 2.9.3.31"
  spec.dependency "AgoraRtm_iOS", "~> 1.2.2.1"
  spec.dependency "AliyunOSSiOS", "~> 2.10.8"
  spec.dependency "GPUImage", "~> 0.1.7"
  spec.dependency "GPUImageBeautifyFilter", "~> 1.0.0"
  spec.dependency "IQKeyboardManager", "~> 6.5.4"
  spec.dependency "Masonry", "~> 1.1.0"
  spec.dependency "MBProgressHUD", "~> 1.1.0"
  spec.dependency "MJExtension", "~> 3.0.17"
  spec.dependency "MJRefresh", "~> 3.3.1"
  spec.dependency "SDAutoLayout", "~> 2.1.9"
  spec.dependency "SDCycleScrollView", "~> 1.80"
  spec.dependency "SDWebImage", "~> 5.4.1"
  spec.dependency "StreamingKit", "~> 0.1.30"
  spec.dependency "VTMagic", "~> 1.2.4"
  spec.dependency "YBImageBrowser", "~> 3.0.9"
  spec.dependency "YYImage", "~> 1.0.4"
  spec.dependency "YYModel", "~> 1.0.4"
  spec.dependency "ZZCircleProgress", "~> 0.2.1"

  spec.source_files = 'YSNRKit.h'
  spec.resource = "YSNRvideo_bundle.bundle"
  spec.vendored_frameworks = 'YSNRFrameworkeLib.framework'
  spec.frameworks = 'Foundation','UIKit'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }





end
