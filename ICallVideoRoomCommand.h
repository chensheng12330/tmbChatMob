//
//  ICallVideoRoomCommand.h
//  tmbChatMob
//
//  Created by sherwin on 15-8-18.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//
#import <Foundation/Foundation.h>

#import "TMBCallServiceDefs.h"
//#import "TMBCallManagerCallDelegate.h"

@class TMBCallSession;
@class EMError;

/*!
 @protocol
 @brief 本协议主要处理实时通话操作相关的【指令交互协议】
 @discussion 所有不带Block回调的异步方法, 需要监听回调时, 需要先将要接受回调的对象注册到delegate中
 
 */
@protocol ICallVideoRoomCommand <NSObject>

@optional

/*!
 @method
 @brief  主持人指定视频广播某成员，MemID为被广播成员的callPhone Number
 @param  sessionId   音/视频聊天室会话ID
 @param  callPhoneNum   成员usename.<对应IM的 username值,手机号码>
 @result
 @discussion   需监听@(callSession:didReceivedBroadcastMediaACK:forMem:broadcastType:)得到成员是否接受或拒绝的回调通知
 */
- (EMError*)asyncBroadcastVideo:(NSString *)sessionId
                 roomMember:(NSString*) callPhoneNum;

/*!
 @method
 @brief  主持人回收某成员视频广播终端的权限，MemID为被广播成员的callPhone Number
 @param  sessionId   音/视频聊天室会话ID
 @param  callPhoneNum   成员usename.<对应IM的 username值,手机号码>
 @result
 @discussion 回收视频广播终端后，主持人将会自动成为 视频广播终端.广播给参与会议人员. [同步操作,即时信.]
 */
- (EMError*)syncCancelBroadcastVideo:(NSString *)sessionId
                     roomMember:(NSString*) callPhoneNum;


/*!
 @discussion  主持人接受某成员申请成为视频广播端
 */
-(EMError*) syncAcceptMemberForBroadcastVideoApply:(NSString *)sessionId
                                roomMember:(NSString*)callPhoneNum;

/*!
 @discussion  主持人拒绝 某成员申请成为视频广播端
 */
-(EMError*) syncRejectMemberForBroadcastVideoApply:(NSString *)sessionId
                                         roomMember:(NSString*)callPhoneNum;

/*! 未实现
 @method
 @brief  主持人指定某成员发言
 @param sessionId      音/视频聊天室会话ID
 @param  callPhoneNum   成员usename.<对应IM的 username值,手机号码>
 @result
 @discussion   需监听@()得到成员是否接受或拒绝的回调通知
 */
- (EMError*)asyncMakeMemSpeaker:(NSString *)sessionId
                 roomMember:(NSString*)callPhoneNum;

/*! 未实现
 @method
 @brief  主持人取消某成员发言
 @param  sessionId      音/视频聊天室会话ID
 @param  callPhoneNum   成员usename.<对应IM的 username值,手机号码>
 @result
 @discussion   需监听@()得到成员是否接受或拒绝的回调通知
 */
-(EMError*) asyncCancelMemSpeaker:(NSString *)sessionId
                   roomMember:(NSString*)callPhoneNum;

/*!
 @method
 @brief  主持人踢出某人
 @param  sessionId      音/视频聊天室会话ID
 @param  callPhoneNum   成员usename.<对应IM的 username值,手机号码>
 @result
 @discussion   需监听@()得到成员是否接受或拒绝的回调通知
 */
-(EMError*) asyncMakeMemKickOut:(NSString *)sessionId
                 roomMember:(NSString*)callPhoneNum;

/*!
 @method
 @brief       会议成员被询问是否愿意成为视频广播端，同意广播该成员的本地音/视频。
 @param       sessionId      音/视频聊天室会话ID
 @result
 @discussion  应邀请求发出去后，会议视频将显示自己的视频直播.
 */
-(EMError*) syncAcceptBroadcastVideo:(NSString *)sessionId;

/*!
 @method
 @brief       会议成员询问被指定为视频广播端，拒绝广播本地视频.
 @param       sessionId      音/视频聊天室会话ID
 @result
 @discussion  应邀请求发出去后，主持人将会收到相应的消息.
 */
-(EMError*) syncRejectBroadcastVideo:(NSString *)sessionId;

/*!
 @method
 @brief     成员申请成为视频广播端
 @param       sessionId      音/视频聊天室会话ID
 @result
 @discussion   需监听@()得到成员是否接受或拒绝的回调通知
 */
-(EMError*) asyncApplyForMakeMeBroadcastVideo:(NSString *)sessionId
                               myCallPhoneNum:(NSString*)callPhoneNum;


@end
