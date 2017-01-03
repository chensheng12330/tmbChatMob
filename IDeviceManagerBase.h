/*!
 @header IDeviceManagerBase.h
 @abstract 为DeviceManager提供基础操作
 @author TemobiMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBDeviceManagerDefs.h"
#import "IDeviceManagerDelegate.h"
#import "IInterfaceBase.h"

/*!
 @protocol
 @brief 设备管理器基础协议, 用于注册对象到监听列表和从监听列表中移除对象
 @discussion
 */
@protocol IDeviceManagerBase <IInterfaceBase>

@required


//- (void)addDelegate:(id<IDeviceManagerDelegate>)delegate delegateQueue:(dispatch_queue_t)aQueue;
//- (void)removeDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;

//- (void)addDelegate:(id<IDeviceManagerDelegate>)delegate
//- (void)removeDelegate:(id<IChatManagerDelegate>)delegate;

@end
