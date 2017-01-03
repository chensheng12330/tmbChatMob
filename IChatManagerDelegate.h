/*!
 @header IChatManagerDelegate.h
 @abstract 关于ChatManager的异步回调协议
 @author Temobi for Sherwin.Chen Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatManagerDelegate.h"

/**
 *  本协议主要处理聊天时的一些回调操作（如发送消息成功、收到消息、收到添加好友邀请等消息时的回调操作）
 */
@protocol IChatManagerDelegate <TMBChatManagerDelegate>

@optional

@end
