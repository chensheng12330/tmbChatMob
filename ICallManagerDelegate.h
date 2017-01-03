/*!
 @header EMCallManagerCallDelegate.h
 @abstract 关于CallManager的异步回调协议
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>

#import "TMBCallManagerCallDelegate.h"
#import "ICallVideoRoomCommandDelegate.h"
/**
 *  本类主要处理实时通话时的一些回调操作
 */
@protocol ICallManagerDelegate <TMBCallManagerCallDelegate,ICallVideoRoomCommandDelegate>

@optional

@end
