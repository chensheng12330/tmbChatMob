/*!
 @header ICallManagerBase.h
 @abstract 为CallManager提供基础消息操作
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>
#import "IInterfaceBase.h"

@protocol ICallManagerDelegate;

/*!
 @protocol
 @brief 实时通话的基础协议, 用于注册对象到监听列表和从监听列表中移除对象
 @discussion
 */

@protocol ICallManagerBase <IInterfaceBase>

//Have Super Interface In IInterfaceBase

//- (void)addDelegate:(id)delegate delegateQueue:(dispatch_queue_t)queue;
//- (void)removeDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;

//----------------------------

//- (void)addDelegate:(id)delegate;
//- (void)removeDelegate:(id)delegate;
@end
