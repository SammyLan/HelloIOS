# Uncomment the next line to define a global platform for your project
platform :ios, '9.0'


workspace 'HelloiOS'

# Uncomment the next line if you're using Swift or would like to use dynamic frameworks
use_frameworks!


def default_pods
    # Pods for HelloiOS
    
    #UI
    pod 'Masonry'
    # pod 'SnapKit'
    pod 'MJRefresh'
    pod 'WMPageController'
    
    pod 'SDWebImage', '~> 4.0'
    pod 'SDWebImage/WebP'
    pod 'YYKit'
    pod 'GPUImage'
    #pod 'AsyncDisplayKit'
    
    pod 'JKCategories'
    pod 'DeepLinkKit'
    pod 'NetworkEye'
    
    # 网络
    pod 'Reachability'
    pod 'AFNetworking'
    
    # 第三方登录
    # Facebook
    pod 'FBSDKLoginKit', '4.38.1'
    pod 'FBSDKShareKit', '4.38.1'
    # Google
    pod 'GoogleSignIn'
    # Twitter
    # pod 'Fabric'
    pod 'TwitterKit'
    
    pod 'WechatOpenSDK'
    
    
    pod 'Aspects'
    # Debug
    pod 'FBRetainCycleDetector', :configurations => ['Debug'] #循环引用检测
    pod 'FLEX', '~> 2.0', :configurations => ['Debug']
    pod 'MLeaksFinder' #内存泄漏
end


target 'HelloiOS' do
    default_pods
end


target 'WSLoginSDK' do
    inherit! :search_paths
    project "WSLoginSDK/WSLoginSDK.xcodeproj"
    default_pods
end


post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['ENABLE_BITCODE'] = 'NO'
        end
    end
end
