//
//  EZSaaSOpenSDKUserLogin.h
//  EZSaaSOpenSDK
//
//  Created by saas on 2022/2/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK demo使用, 方便调试
@interface EZSaaSOpenSDKUserLogin : NSObject


/// 用户登录状态
+ (BOOL)logined;


/// 用户模拟登录方法, 可以在萤石商业智居app上注册账号
/// @param account 手机号
/// @param pwd 密码
/// @param successHandle 成功回调
/// @param failureHandle 失败回调
+ (void)loginWithAccount:(NSString *)account
                     pwd:(NSString *)pwd
           successHandle:(void (^)(void))successHandle
           failureHandle:(void(^)(NSError *error))failureHandle;


+ (void)changeEnv:(UIViewController *)controller;

@end

NS_ASSUME_NONNULL_END
