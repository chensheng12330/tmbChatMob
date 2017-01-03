/*!
 @header TMBDeviceManagerNetworkDelegate.h
 @abstract DeviceManager网络相关的事件通知
 @author TemobiMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "TMBDeviceManagerNetworkDelegate.h"

#import "TMBNetworkMonitorDefs.h"

/*!
 @protocol
 @brief DeviceManagerDeviceManager网络相关的事件通知
 @discussion
 */
@protocol TMBDeviceManagerNetworkDelegate <NSObject>

@optional

/*!
 @method
 @brief 网络状况发生变化的通知
 @param connectionType     新的网络状态
 @param fromConnectionType 上一次的网络状态
 @discussion
 @result
 */
- (void)didConnectionChanged:(TMBConnectionType)connectionType
          fromConnectionType:(TMBConnectionType)fromConnectionType;

@end
