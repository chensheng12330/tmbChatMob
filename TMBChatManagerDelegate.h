/*!
 @header TMBChatManagerDelegate.h
 @abstract 关于ChatManager的异步回调内部协议
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatManagerChatDelegate.h"
//#import "TMBChatManagerEncryptionDelegate.h"
//#import "TMBChatManagerMediaDelegate.h"
#import "TMBChatManagerLoginDelegate.h"
#import "TMBChatManagerBuddyDelegate.h"
#import "TMBChatManagerUtilDelegate.h"
#import "TMBChatManagerGroupDelegate.h"
#import "TMBChatManagerPushNotificationDelegate.h"

/*!
 @protocol
 @brief 本协议包括：收发消息, 登陆注销, 加密解密, 媒体操作的回调等其它操作
 @discussion
 */
@protocol TMBChatManagerDelegate <TMBChatManagerChatDelegate,
                                TMBChatManagerLoginDelegate, 
                                //TMBChatManagerEncryptionDelegate,
                                //TMBChatManagerMediaDelegate,
                                TMBChatManagerBuddyDelegate,
                                TMBChatManagerUtilDelegate,
                                //TMBChatManagerPushNotificationDelegate,
                                TMBChatManagerGroupDelegate>

@optional

@end
