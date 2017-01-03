/*!
 @header TMBChatManagerPushNotificationDelegate.h
 @abstract 为推送通知提供基础操作
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatManagerDelegateBase.h"

@class TMBPushNotificationOptions;
@class EMError  ;

/*!
 @protocol
 @brief 本协议包括：更新推送设置后的回调
 @discussion
 */
@protocol TMBChatManagerPushNotificationDelegate <TMBChatManagerDelegateBase>

@optional

/*!
 @method
 @brief 更新全局推送设置后的回调
 @param options 更新后的全局推送设置
 @param error   错误信息
 */
- (void)didUpdatePushOptions:(TMBPushNotificationOptions *)options
                       error:(EMError   *)error;

/*!
 @method
 @brief 屏蔽/取消屏蔽 群推送消息后的回调
 @param ignoredGroupList 被屏蔽的群ID列表
 @param error            错误信息
 */
- (void)didIgnoreGroupPushNotification:(NSArray *)ignoredGroupList
                                 error:(EMError   *)error;

@end
