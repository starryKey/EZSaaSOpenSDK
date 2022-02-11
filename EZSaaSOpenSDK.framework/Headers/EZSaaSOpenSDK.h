//
//  EZSaaSOpenSDK.h
//  EZSaaSOpenSDK
//
//  Created by saas on 2022/1/10.
//

#import <UIKit/UIKit.h>
#import "EZSaaSNaviController.h"
#import "EZSaaSOpenSDKConfig.h"
#import "EZSaaSProgressHUD-Header.h"

//! Project version number for EZSaaSOpenSDK.
FOUNDATION_EXPORT double EZSaaSOpenSDKVersionNumber;

//! Project version string for EZSaaSOpenSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSOpenSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSOpenSDK/PublicHeader.h>


@interface EZSaaSOpenSDK : NSObject

+ (void)initSDKWithToken:(NSString *)token;

+ (UIViewController *)deviceManageController;

@end
