# EZSaaSOpenSDK

[![CI Status](https://img.shields.io/travis/typedefine/EZSaaSOpenSDK.svg?style=flat)](https://travis-ci.org/typedefine/EZSaaSOpenSDK)
[![Version](https://img.shields.io/cocoapods/v/EZSaaSOpenSDK.svg?style=flat)](https://cocoapods.org/pods/EZSaaSOpenSDK)
[![License](https://img.shields.io/cocoapods/l/EZSaaSOpenSDK.svg?style=flat)](https://cocoapods.org/pods/EZSaaSOpenSDK)
[![Platform](https://img.shields.io/cocoapods/p/EZSaaSOpenSDK.svg?style=flat)](https://cocoapods.org/pods/EZSaaSOpenSDK)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements
- iOS 9.0 or later
- Xcode 11.0 or later

工程配置:

1.苹果开发者中心App ID的Capabilities开启
Access WiFi Information
Hotspot

并在工程配置的Sign&Capability中添加两种能力配置:
Access WiFi information
Hotspot Configuration
￼￼￼

2.在info.plist中配置 定位和相册相机使用权限

 <key>NSCameraUsageDescription</key>
 <string>应用需要访问您的相机以扫描二维码信息，来添加监控等设备</string>
 <key>NSPhotoLibraryUsageDescription</key>
 <string>应用需要访问您的相册，将使用相册中的图片扫码</string>
 <key>NSLocationUsageDescription</key>
 <string>应用需要使用您的位置，用以获取您的wifi信息</string>
 <key>NSLocationWhenInUseUsageDescription</key>
 <string>应用需要使用您的位置，用以获取您的wifi信息</string>
添加设备时, 扫码会用到相机相册权限, 配网时可能需要用到定位权限.

3.在工程Build Settings设置Bitcode为NO
￼


## Installation

EZSaaSOpenSDK is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'EZSaaSOpenSDK'
```

## Import headers in your source files

In the source files where you need to use the library, import the umbrella header file:

```objective-c
#import <EZSaaSOpenSDK/EZSaaSOpenSDK.h>
```


## How To Use

* Objective-C

1.初始化

    EZSaaSConfigParam *configParam = [[EZSaaSConfigParam alloc] init];
    configParam.ezsaasToken = @"";//萤石商业智居的token
    configParam.ezopenAppKey = @"";//萤石开发平台的token
    configParam.ezopenAccessToken = @"";//萤石开发平台的appKey
    configParam.debugLogEnable = YES;
//    configParam.ezsaasHttpDomain = @"https://saastestenterprise.ys7.com";
    [EZSaaSOpenSDK initSDKWithConfig:configParam];
    

2.打开设备管理页

    [EZSaaSOpenSDK showFrom:self completion:^{
        
    } dismiss:^{
        
    }];



## Author

typedefine, zhang_xiu_feng@yeah.net

## License

EZSaaSOpenSDK is available under the MIT license. See the LICENSE file for more info.


