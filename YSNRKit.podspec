
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


  spec.source_files = 'YSNRKit.h'
  spec.resource = "YSNRvideo_bundle.bundle"
  spec.vendored_frameworks = 'FrameworkeLibss.framework'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }





end
