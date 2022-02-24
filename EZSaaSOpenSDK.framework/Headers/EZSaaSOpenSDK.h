//
//  EZSaaSOpenSDK.h
//  EZSaaSOpenSDK
//
//  Created by saas on 2022/1/10.
//

#import <UIKit/UIKit.h>
#import "EZSaaSConfigParam.h"
#import "EZSaaSOpenSDKUserLogin.h"

//! Project version number for EZSaaSOpenSDK.
FOUNDATION_EXPORT double EZSaaSOpenSDKVersionNumber;

//! Project version string for EZSaaSOpenSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSOpenSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSOpenSDK/PublicHeader.h>


@interface EZSaaSOpenSDK : NSObject

/// SDK初始化
/// @param configParam 基础参数
+ (void)initSDKWithConfig:(EZSaaSConfigParam *)configParam;


/// 添加SDK设备管理页面
/// @param controller 添加所在的controller
/// @param completion 添加完成回调
/// @param dismiss 关闭回调
+ (void)showFrom:(UIViewController *)controller
      completion:(void (^)(void))completion
         dismiss:(void (^)(void))dismiss;


/// 关闭
+ (void)dismiss;

/// SDK版本号
+ (NSString *)sdkVersion;

@end
