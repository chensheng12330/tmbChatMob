//
//  IInterfaceBase.h
//  tmbChatMob
//
//  Created by sherwin on 15-11-10.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

#ifndef tmbChatMob_IInterfaceBase_h
#define tmbChatMob_IInterfaceBase_h

/*!
 @protocol
 @brief 通用基础协议, 用于注册对象到监听列表和从监听列表中移除对象
 @discussion
 */
@protocol IInterfaceBase <NSObject>

@optional

/*!
 @method
 @brief 注册一个监听对象到监听列表中
 @discussion 把监听对象添加到监听列表中准备接收相应的事件,移除时必须使用 @selector(removeDelegate:delegateQueue:),且 @par queue参数必须保持一致
 @param delegate 需要注册的监听对象
 @param queue 通知监听对象时的线程队列,如果为nil，表示使用默认的队列线程中调用代理方法. [注意:]
 @result
 */
- (void)addDelegate:(id)delegate delegateQueue:(dispatch_queue_t)queue;

/*!
 @method
 @brief 从监听列表中移除一个监听对象
 @discussion 把监听对象从监听列表中移除,取消接收相应的事件
 @param queue 通知监听对象时的线程队列,如果为nil，表示使用默认的队列线程通知 [注意:] 必须传与 @selector(addDelegate:delegateQueue:) 中相同的queue参数，不然无法正确的移除掉监控对象
 @result
 */
- (void)removeDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;

/***********代码示例*****************
 **
 方案一： 通过主线程回调代理方法
 1、增加到监听
 [[Class class] addDelegate:self delegateQueue:dispatch_get_main_queue()];
 
 2、移除监听
 [[Class class] removeDelegate:self delegateQueue:dispatch_get_main_queue()]; //必须要保持传入相同的queue 值! 不然无法移除当前的监控.
 
 
 方案二：通过SDK 内部默认线程回调代理方法(简单方便)
 1、增加到监听
 [[Class class] addDelegate:self delegateQueue:nil];
 
 2、移除监听
 [[Class class] removeDelegate:self delegateQueue:nil]; //必须要保持传入相同的queue 值! 不然无法移除当前的监控.
 */


//*******************************************************
//*为代码的使用方便性，在方案二上面，增加快捷版本的API操作，省略掉delegateQueue:参数值，使用SDK内部线程回调代理方法.

/*!
 @method
 @brief 注册一个监听对象到监听列表中
 @discussion 把监听对象添加到监听列表中准备接收相应的事件,移除时必须使用 @selector(removeDelegate:)
 */
- (void)addDelegate:(id)delegate;

/*!
 @method
 @brief 从监听列表中移除一个监听对象
 @discussion 把监听对象从监听列表中移除,取消接收相应的事件
 */
- (void)removeDelegate:(id)delegate;

@end

#endif
