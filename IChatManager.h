/*!
 @header IChatManager.h
 @abstract 此接口提供了聊天的基本操作
 @author Temobi Inc.
 @version 1.00 2015/03/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "IChatManagerChat.h"
//#import "IChatManagerEncryption.h"
#import "IChatManagerConversation.h"
//#import "IChatManagerMedia.h"
#import "IChatManagerUtil.h"
#import "IChatManagerLogin.h"
#import "IChatManagerBuddy.h"
#import "IChatManagerGroup.h"
//#import "IChatManagerSettingOptions.h"
//#import "IChatManagerPushNotification.h"

/*!
 @protocol
 @brief 登录、聊天、保存会话、加解密、多媒体支持等协议的集合
 @discussion 可以通过tmbChatMob类获得此接口的实例, 示例代码如下:
 */
@protocol IChatManager
<IChatManagerChat,
IChatManagerLogin,
IChatManagerConversation,
//IChatManagerEncryption,
//IChatManagerMedia,
IChatManagerUtil,
IChatManagerGroup,
IChatManagerBuddy
//IChatManagerSettingOptions,
//IChatManagerPushNotification
>

@required

@end
