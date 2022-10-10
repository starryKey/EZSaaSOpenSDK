//
//	EZSaaSCameraInfo.h
//
//	Create by zxf on 31/7/2018
//	Copyright © 2018. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

@interface EZSaaSCameraInfo : NSObject

@property (nonatomic, copy) NSString * channelName;
@property (nonatomic, assign) NSInteger channelNo;
@property (nonatomic, assign) NSInteger createBy;
@property (nonatomic, copy) NSString * createDate;
@property (nonatomic, assign) NSInteger defence;
@property (nonatomic, copy) NSString * deviceSerial;
@property (nonatomic, assign) NSInteger dvcDeviceId;
@property (nonatomic, copy) NSString *idField;
@property (nonatomic, assign) NSInteger isEncrypt;
@property (nonatomic, copy) NSString * model;
@property (nonatomic, assign) NSInteger orgId;
@property (nonatomic, copy) NSString * picUrl;
@property (nonatomic, assign) NSInteger saasUserId;
@property (nonatomic, assign) NSInteger status; //0-不在线，1-在线,-1设备未上报
@property (nonatomic, assign) NSInteger videoLevel;
@property (nonatomic, copy) NSString * onOfflineDateTime;
@property (nonatomic, copy) NSString *ipcValidateCode;
@property (nonatomic,copy) NSString *ipcSerial;
@property (nonatomic, assign) NSInteger serviceStatus; //服务状态（0：服务停用，1：服务启用中）（V2.0里表示激活）
@property (nonatomic, assign) NSInteger isNvr;
@property (nonatomic, copy) NSString *cameraName;
@property (nonatomic, assign) NSInteger cloudStatus; //云存储状态: -2:设备不支持;-1: 未开通;0: 暂停使用中;1: 正常使用中;2: 过期
@property (nonatomic, assign) NSInteger expireTime; //int    云存储过期时间,时间戳
@property (nonatomic, assign) NSInteger isTrust; //是否托管 1-托管 0-非托管

-(instancetype)initWithSerialNo:(NSString*)serialNo channelNo:(NSInteger)channelNo andPassword:(NSString*)password;

@end
