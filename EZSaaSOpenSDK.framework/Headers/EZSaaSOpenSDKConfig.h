//
//  EZSaaSAppConfig.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/7/16.
//

#import <Foundation/Foundation.h>
//@class EZSaaSLoginInfo;
//#import "EZSaaSLoginInfo.h"

@class EZSaaSLoginInfo;
@interface EZSaaSOpenSDKConfig : NSObject

@property(nonatomic, assign) BOOL hasNetworkReachability;
@property(nonatomic, assign) BOOL agreedEZVIZProtocol;
@property(nonatomic, assign) BOOL isH5P;

@property(nonatomic, assign) bool isLogined;

@property(nonatomic, copy) NSString *organizationAlias;
@property(nonatomic, copy) NSString *servicePhone;

@property (nonatomic,copy) void (^ tokenExpireBlock)(void);

@property(nonatomic, copy) NSString *token;

+ (instancetype)sharedConfig;

-(void)initEZopenSDK;

- (void)setupLoginInfo:(EZSaaSLoginInfo *)info;

- (void)logoutWithMsg:(NSString *)msg;

- (void)logout;

+(void)logoutBlock:(void(^)(NSString *msg))logoutBlock;;

- (void)loginWithAccount:(NSString *)account
                     pwd:(NSString *)pwd
                mageCode:(NSString *)mageCode
              successHandle:(void (^)(void))successHandle
                 failure:(void(^)(NSError *error))failure;

@end
