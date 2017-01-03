/*!
 @header TMBCallManagerCallDelegate.h
 @abstract 关于CallManager的异步回调协议
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>

#import "TMBCallServiceDefs.h"

@class TMBCallSession;
@class EMError;

/**
 *  本类主要处理实时通话时的一些回调操作
 */
@protocol TMBCallManagerCallDelegate <NSObject>

@optional

/*!
 @method
 @brief 登陆状态更新,包括登陆后，各种状态的回调信息
 @discussion
 @param callState   变化原因
 @param stateStr    状态信息(仅供用作调试信息)
 */
- (void) didCallLoginStateUpdate:(TMBCallLoginState)callState
                    stateStr:(NSString*) stateStr;


/*!
 @method
 @brief 有实时通话呼入
 @param callSession 实时通话的实例
 @discussion 收到此回调后，需要给出是否接听或拒绝.
 */
- (void) didCallIncomingReceived:(TMBCallSession *) callSession;


/*!
 @method
 @brief 实时通话状态发生变化时的回调
 @param callSession 实时通话的实例
 @param reason   变化原因
 */
- (void)callSessionStatusChanged:(TMBCallSession *)callSession
                    changeReason:(TMBCallStatusChangedReason)reason;

/*!
 @method
 @brief 视频通话时，与对方视频接通的回调消息
 @param callSession 实时通话的实例
 @discussion 收到此回调后，需要给出是否接听或拒绝.
 */
- (void) didCallForRemoteVideoConnected:(TMBCallSession *) callSession;
@end
