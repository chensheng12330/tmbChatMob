/*!
 @header IChatManagerBase.h
 @abstract 为ChatManager提供基础操作
 @author Temobi for Sherwin.Chen Inc.
 @version 1.00 2015/04/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "commonDefs.h"
#import "TMBChatServiceDefs.h"
#import "IInterfaceBase.h"

@protocol IChatManagerDelegate;

/*!
 @protocol
 @brief 聊天的基础协议, 用于注册对象到监听列表和从监听列表中移除对象
 @discussion
 */
@protocol IChatManagerBase <IInterfaceBase>

@required


//- (void)addDelegate:(id<IChatManagerDelegate>)delegate delegateQueue:(dispatch_queue_t)queue;
//- (void)removeDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;


//- (void)addDelegate:(id<IChatManagerDelegate>)delegate;
//- (void)removeDelegate:(id<IChatManagerDelegate>)delegate;

@end
