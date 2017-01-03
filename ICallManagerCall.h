/*!
 @header ICallManagerCall.h
 @abstract 为CallManager提供实时通话操作
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>

#import "TMBCallServiceDefs.h"

@class TMBCallSession;
@class EMError;

/*!
 @protocol
 @brief 本协议主要处理实时通话操作
 @discussion 所有不带Block回调的异步方法, 需要监听回调时, 需要先将要接受回调的对象注册到delegate中

 */
@protocol ICallManagerCall <NSObject>

@optional

#pragma mark - call
/*!
 @method
 @brief  登陆验证实时通话用户账号
 @param username  登陆验证所对应的用户名
 @param password  登陆验证所对应的密码 (账号可使用 IM 账号进行登陆,但限制为 手机号码形式的账号.)
 @result          检查语音通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @discussion      需监听@(callSession:loginStateUpdate:stateStr:)
 */
- (EMError *)asyncLoginCallWithUserName:(NSString*)username
                               password:(NSString*)password;


/*!
 @method
 @brief  接收方同意语音通话的请求
 @param sessionId 要进行的语音通话的ID
 @result          检查语音通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @discussion      需监听[callSessionStatusChanged:changeReason:error:]
 */
- (EMError *)asyncAnswerCall:(NSString *)sessionId;

/*!
 @method
 @brief  发起方或接收方结束通话
 @param sessionId 要进行的语音通话的ID
 @param reason    结束原因
 @result          检查挂断语音通话条件是否具备，不具备则返回错误信息
 @discussion      需监听[callSessionStatusChanged:changeReason:error:]
 */
- (EMError *)asyncEndCall:(NSString *)sessionId
                   reason:(TMBCallStatusChangedReason)reason;

#pragma mark - call audio

/*!
 @method
 @brief  将实时语音静音
 @param sessionId  要进行的实时通话的ID
 @param isSilence  是否静音
 @result           错误信息
 @discussion
 */
- (EMError *)markCallSession:(NSString *)sessionId
                   asSilence:(BOOL)isSilence;

/*!
 @method
 @brief  进行实时语音
 @param chatter  要进行语音通话的username（不能与自己通话）
 @param nickName 昵称（可为空.）
 @param timeout  超时时间（传0，使用SDK默认超时时间）
 @param pError   检查语音通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @result         语音通话的实例
 @discussion     需监听[callSessionStatusChanged:changeReason:error:]
 */
- (TMBCallSession *)asyncMakeVoiceCall:(NSString *)chatter
                              nickName:(NSString*) nickName
                               timeout:(NSUInteger)timeout
                                 error:(EMError **)pError;

#pragma makr - call video

/*!
 @method
 @brief  进行实时视频
 @param chatter  要进行视频通话的username（不能与自己通话）
 @param nickName 昵称（可为空.）
 @param timeout  超时时间（传0，使用SDK默认超时时间）
 @param pError   检查视频通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @result         视频通话的实例
 @discussion     需监听[callSessionStatusChanged:changeReason:error:]
 */
- (TMBCallSession *)asyncMakeVideoCall:(NSString *)chatter
                              nickName:(NSString*) nickName
                              timeout:(NSUInteger)timeout
                                error:(EMError **)pError;



/*!
 @method
 @brief  进行实时聊天室视频
 @param chatter  要进行视频通话的群组 chatterID（不能与自己通话）
 @param timeout  超时时间（传0，使用SDK默认超时时间）
 @param pError   检查视频通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @result         视频通话的实例
 @discussion     需监听[callSessionStatusChanged:changeReason:error:]
 */
- (TMBCallSession *)asyncMakeVideoRoomCall:(NSString *)callVideoRoomId
                                   timeout:(NSUInteger)timeout
                                     error:(EMError **)pError;

/*!
 @method
 @brief  接收方同意实时聊天室视频的请求
 @param callVideoRoomId 要进行的聊天室视频通话的ID
 @result          检查聊天室视频通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @discussion      需监听[callSessionStatusChanged:changeReason:error:]
 */
- (TMBCallSession *)asyncAnswerVideoRoomCall:(NSString *)callVideoRoomId;


#pragma makr - 实时聊天室命令控制


@end
