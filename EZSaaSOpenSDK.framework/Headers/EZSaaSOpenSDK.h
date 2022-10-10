//
//  EZSaaSOpenSDK.h
//  EZSaaSOpenSDK
//
//  Created by saas on 2022/1/10.
//

#import <UIKit/UIKit.h>
#import "EZSaaSConfigParam.h"
#import "EZSaaSCameraInfo.h"
#import "EZSaaSTreeModel.h"
#import "EZSaaSGroupModel.h"
#import "EZSaaSOpenSDKUserLogin.h"

//! Project version number for EZSaaSOpenSDK.
FOUNDATION_EXPORT double EZSaaSOpenSDKVersionNumber;

//! Project version string for EZSaaSOpenSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSOpenSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSOpenSDK/PublicHeader.h>


@interface EZSaaSOpenSDK : NSObject

/// SDK初始化( 用户登录授权, 环境设置等配置)
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


/// 退出登录
/// @param comletion 退出完成的回调
+ (void)logout:(void (^)(NSError *error))comletion;


///销毁SDK
+ (void)destroy;


/// SDK版本号
+ (NSString *)sdkVersion;


/// 搜索组织节点
/// @param keyWord 关键词
/// @param orgId 组织ID
/// @param pageNo 当前页数
/// @param pageSize 一页的数量
/// @param completion 完成回调
+(void)searchOrgWithKeyWord:(NSString*)keyWord orgId:(NSString*)orgId pageNo:(NSInteger)pageNo pageSize:(NSInteger)pageSize completion:(void(^)(NSArray <EZSaaSTreeModel*>*resultList, NSInteger totalCount, NSError *error))completion;


/// 搜索监控视频设备
/// @param keyWord 关键词
/// @param orgId 组织ID
/// @param pageNo 当前页数
/// @param pageSize 一页的数量
/// @param completion 完成回调
+(void)searchCameraWithKeyWord:(NSString*)keyWord orgId:(NSString*)orgId pageNo:(NSInteger)pageNo pageSize:(NSInteger)pageSize completion:(void(^)(NSArray <EZSaaSCameraInfo*>*resultList, NSInteger totalCount, NSError *error))completion;


/// 获取组织根节点信息
///isDev    int    区分设备还是通道的tree列表（1设备， 0或不传是通道列表)
///completion 完成回调
+(void)getInitialOrdTreeIdWithIsDev:(NSInteger)isDev completion:(void (^)(EZSaaSTreeModel *, NSError *))completion;



/// 获取直播到期和安防接入到期提醒列表
/// completion 成功回调
+(void)getExpiredListWithCompletion:(void(^)(NSArray *expiredList))completion;


/// 点击某条提醒不再提醒
/// completion 成功回调
 
+(void)removeExpiredMindWithId:(NSInteger)remindId completion:(void(^)(void))completion;


///根据父节点,获取子节点数据
/// parentId 父节点id
/// isDev 区分设备还是通道的tree列表（1设备， 0或不传是通道列表）
/// successFn 成功回调
/// failFn 失败回调
+(void)getOrgTreeWithParentId:(NSString *)parentId isDev:(NSInteger)isDev successCallback:(void (^)(id))successFn failCallBack:(void (^)(id))failFn;

 
/// 根据所传递的组织id，查询该组织的所有父级信息（链表）
///  idField long    组织id    Y
///  companyId long    企业ID（没有传， 默认为登录企业ID）    N
///  appId int    （默认 0：主框架， 其他：应用内）
///  successFn 成功回调
/// failFn 失败回调
+(void)getParentOrgNodesByIdField:(NSString *)idField
                        companyId:(NSInteger)companyId
                            appId:(NSInteger)appId
                  successCallback:(void (^)(NSArray<EZSaaSTreeModel *> *models))successFn
                     failCallBack:(void (^)(NSError *error))failFn;



/// 分组分页查询 该接口专服务于视频监控应用
/// pageNo 分页页数，默认1
/// pageSize 分页大小，默认10
/// groupSerialOrName 分组名称模糊查询
/// completion 结果回调
+(void)getGroupInfoWithPageNo:(NSInteger)pageNo
                     pageSize:(NSInteger)pageSize
            groupSerialOrName:(NSString *)groupSerialOrName
                   completion:(void (^)(NSArray<EZSaaSGroupModel *> *, NSUInteger, NSError *))completion;


/// 分组分页查询 该接口专服务于视频监控应用
/// groupSerial 分组序列号 必填
/// onlineStatus 在离线状态，1-在线，0-离线
/// deviceSerialOrName 序列号或名称模糊查询
/// pageNo 分页页数，默认1
/// pageSize 分页大小，
/// completion 结果回调
+(void)getCameraListWithGroupSerial:(NSString *)groupSerial
                       onlineStatus:(NSNumber *)onlineStatus
                 deviceSerialOrName:(NSString *)deviceSerialOrName
                             pageNo:(NSInteger)pageNo
                           pageSize:(NSInteger)pageSize
                         completion:(void (^)(NSArray<EZSaaSCameraInfo *> *, NSInteger, NSError *))completion;



/// 视频监控 摄像机分页查找
///orgId  组织id
///onlineStatus 0-不在线，1-在线 null所有
///pageNo 当前页数
///pageSize 一页的数量
///completion 完成回调
+(void)getCameraListWithOrgId:(NSString*)orgId onlineStatus:(NSNumber *)onlineStatus pageNo:(NSInteger)pageNo pageSize:(NSInteger)pageSize completion:(void(^)(NSArray <EZSaaSCameraInfo*>*cameraList, NSInteger totalCount, NSError *error))completion;



/// 搜索监控视频设备
/// @param groupSerial 分组序列号 必填
/// @param deviceSerialOrName 序列号或名称模糊查询
/// @param pageNo 分页页数，默认1
/// @param pageSize 分页大小
/// @param completion 结果回调
+(void)searchCameraListWithGroupSerial:(NSString *)groupSerial
                    deviceSerialOrName:(NSString *)deviceSerialOrName
                                pageNo:(NSInteger)pageNo
                              pageSize:(NSInteger)pageSize
                            completion:(void (^)(NSArray<EZSaaSCameraInfo *> *, NSInteger, NSError *))completion;





/// 打开视频监控播放
/// @param data 视频设备参数
+ (void)openPlayerWithData:(EZSaaSCameraInfo *)data;


/// 打开视频监控播放
/// @param list 一组视频设备
/// @param index 展示当前序号下的视频播放
+ (void)openPlayerWithCameraList:(NSArray<EZSaaSCameraInfo *> *)list
                           index:(NSInteger)index;


/// 打开视频监控播放
/// @param list 一组视频设备
/// @param index 展示当前序号下的视频播放
/// @param grouped 是否分组
+ (void)openPlayerWithCameraList:(NSArray<EZSaaSCameraInfo *> *)list
                           index:(NSInteger)index
                         grouped:(BOOL)grouped;


/// 打开app,  默认打开萤石云app
/// @param universalLink  iOS universalLink
/// @param downloadUrl app downloadUrl
+(void)openApp:(NSString *)universalLink downloadUrl:(NSString *)downloadUrl;

@end
