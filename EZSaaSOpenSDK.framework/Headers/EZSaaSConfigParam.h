//
//  EZSaaSConfigParam.h
//  EZSaaSOpenSDK
//
//  Created by saas on 2022/2/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface EZSaaSConfigParam : NSObject

///萤石商业智居的appkey
@property(nonatomic, copy, nonnull) NSString *ezsaasAppkey;

///萤石商业智居的token
@property(nonatomic, copy, nonnull) NSString *ezsaasToken;


///萤石开放平台的appKey
@property(nonatomic, copy, nonnull) NSString *ezopenAppKey;

///萤石开放平台的token
@property(nonatomic, copy, nonnull) NSString *ezopenAccessToken;

///萤石开放平台的trustAccessToken
@property(nonatomic, copy, nonnull) NSString *ezopenTrustAccessToken;

///萤石开放平台的secretKey
@property(nonatomic, copy, nonnull) NSString *ezopenSecretKey;

/// 默认NO关闭,  设置YES表示开启打印日志, 调试开关
@property(nonatomic, assign) BOOL debugLogEnable;

/// 可选，为空将使用默认地址(https://es.ys7.com)，用于设置HTTP请求域名(格式：https://xxx.com)
@property(nonatomic, copy, nullable) NSString *ezsaasHttpDomain;

///https://saastestenterprise.ys7.com/device/h5/sanxiang
///SDK首页Urlpath
@property(nonatomic, copy, nullable) NSString *urlPath;//device/h5/sanxiang

@end

NS_ASSUME_NONNULL_END
