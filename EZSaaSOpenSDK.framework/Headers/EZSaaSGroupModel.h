//
//  EZSaaSGroupModel.h
//  EZSaaSHomeSDK
//
//  Created by saas on 2021/5/17.
//  Copyright © 2021 jinke5. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSGroupModel : NSObject

@property(nonatomic, copy) NSString *groupSerial;
@property(nonatomic, copy) NSString *groupName;
@property(nonatomic, assign) NSInteger deviceNum;
@property(nonatomic, assign) NSInteger onlineDeviceNum;

@end

NS_ASSUME_NONNULL_END
