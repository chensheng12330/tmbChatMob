/*!
 @header TMBGroup.h
 @abstract 群组对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "TMBGroupStyleSetting.h"
#import "TMBChatServiceDefs.h"

@class EMError  ;
@class TMBGroupOccupant;


/*!
 @class
 @brief 聊天群组
 */
@interface TMBGroup : NSObject{
 
}


/*!
 @property
 @brief 群组ID
 */
@property (nonatomic, strong) NSString *groupId;

/*!
 @property
 @brief 群组名
 */
@property (nonatomic, strong) NSString *groupName;

/*!
 @property
 @brief 群组的主题
 */
@property (nonatomic, strong) NSString *groupSubject;

/*!
 @property
 @brief 群组的描述
 */
@property (nonatomic, strong) NSString *groupDescription;

/*!
 @property
 @brief 群组的实际总人数
 */
@property (nonatomic, assign) NSInteger groupOccupantsCount;

/*!
 @property
 @brief 群组的在线人数
 */
@property (nonatomic, assign) NSInteger groupOnlineOccupantsCount;

/*!
 @property
 @brief 群组的创建者
 @discussion
        群组的所有者只有一人
 */
@property (nonatomic, strong, readonly) NSString *owner;

/*!
 @property
 @brief 群组的管理员列表
 @discussion
 群组的管理员不止一人,可以通过动态更改群组成员的角色而成为群组的管理员
 */
@property (nonatomic, strong, readonly) NSArray  *admins ;

/*!
 @property
 @brief 群组的普通成员列表
 */
@property (nonatomic, strong, readonly) NSArray  *members;

/*!
 @property
 @brief 此群组中的所有成员列表(owner, mTMBbers)
 */
@property (nonatomic, strong, readonly) NSArray  *occupants;

/*!
 @property
 @brief 此群组黑名单中的成员列表
 @discussion 需要owner权限才能查看，非owner返回nil
 */
@property (nonatomic, strong, readonly) NSArray  *bans;

/*!
 @property
 @brief 此群组的密码
 */
@property (nonatomic, strong, readonly) NSString *password;

/*!
 @property
 @brief 此群是否为公开群组
 */
@property (nonatomic, readonly) BOOL isPublic;

/*!
 @property
 @brief  群组属性配置
 */
@property (nonatomic, strong, readonly) TMBGroupStyleSetting *groupSetting;

/*!
 @property
 @brief  此群组是否接收推送通知
 */
@property (nonatomic, readonly) BOOL isPushNotificationEnabled;

/*!
 @property
 @brief  此群组是否被屏蔽
 */
@property (nonatomic, readonly) BOOL isBlocked;

/*!
 @property
 @brief  此群组是否是公司组织架构
 */
@property (nonatomic, getter=isCompany) BOOL isCompany;


/*!
 @method
 @brief 创建一个群组实例
 @param groupId          群组ID
 @result 返回新创建的群组
 */
- (id)initWithGroupId:(NSString *)groupId;

//! private Method
- (instancetype)initWithRoomObj:(id) roomObj;

@end
