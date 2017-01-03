/*!
 @header IDeviceManagerDelegate.h
 @abstract DeviceManager异步方法操作完成后的回调协议
 @author TemobiMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "TMBDeviceManagerProximitySensorDelegate.h"
#import "TMBDeviceManagerLocationDelegate.h"
#import "TMBDeviceManagerMediaDelegate.h"
#import "TMBDeviceManagerNetworkDelegate.h"

/*!
 @protocol
 @brief DeviceManager异步方法操作完成后的回调协议
 @discussion
 */
@protocol TMBDeviceManagerDelegate <TMBDeviceManagerProximitySensorDelegate,
                                TMBDeviceManagerMediaDelegate,
                                TMBDeviceManagerLocationDelegate,
                                TMBDeviceManagerNetworkDelegate>

@optional

@end
