//
//  ICallVideoRoomCommandDelegate.h
//  tmbChatMob
//
//  Created by sherwin on 15-8-18.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TMBCallServiceDefs.h"

@class TMBCallSession;
@class EMError;


typedef NS_ENUM(NSInteger, TMBCallRoomBroadcastType){
    TMBCallRoomBroadcastTypeAudio       = 0,  //音频广播
    TMBCallRoomBroadcastTypeVideo,            //视频广播
    TMBCallRoomBroadcastTypeOther             //其它方式
};

/**
 *  本类主要处理实时通话时的一些回调操作
 */
@protocol ICallVideoRoomCommandDelegate <NSObject>

@optional

/*! (主持人)
 @method
 @brief      会议主持人收到某音/视频会议里的某成员返回的 指定成为音/视频广播的应答状态码
 @discussion 某成员以接受，或拒绝，表示是否愿意成为音视频广播端
 @param      callSession 实时通话的实例
 @param      bYesNo  YES，表示愿意加入， NO,表示拒绝
 @param      memPhoneNum  某成员的callNum 值(即 IM username值)
 @param      当前聊天室广播类型.
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
didReceivedBroadcastMediaACK:(BOOL)bYesNo
              forMem:(NSString*)memPhoneNum
       broadcastType:(TMBCallRoomBroadcastType) broadTyep;


/*! (主持人)
 @method
 @brief      收到会议里的某成员 音/视频 广播端的申请
 @discussion 收到申请通知后，可以接受，或拒绝，表示是否愿意让该成员成为音/视频广播端
 @param      callSession 实时通话的实例
 @param      memPhoneNum 某成员的memPhoneNum 值(即 IM username值)
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
didReceivedMemApplyForBroadcastMedia:(NSString*)memPhoneNum
       broadcastType:(TMBCallRoomBroadcastType )broadTyep;

/*! (会与人员)
 @method
 @brief      收到音/视频会议中的主持人指定成员广播本地音/视频的邀请
 @discussion 询问被指定为音/视频广播端者是否同意广播本地音/视频。某成员可以接受，或拒绝，表示是否愿意成为音/视频广播端
 @param      callSession 实时通话的实例
 @param      masterPhoneNum  会议室主持人ID.
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
didReceivedBroadcastMediaInvitation:(NSString*)masterPhoneNum
       broadcastType:(TMBCallRoomBroadcastType )broadTyep;

/*! (会与人员)
 @method
 @brief      收到会议中的主持人对某成员音/视频广播端的申请应答
 @discussion
 @param     callSession 实时通话的实例
 @param     bYesNo  YES，表示接受成员成为视频广播端的请求， NO,表示拒绝
 @param
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
didReceivedMemApplyForBroadcastMediaACK:(BOOL)bYesNo
       broadcastType:(TMBCallRoomBroadcastType )broadTyep;

/////////////////会议视频直播地址///////
/*! (参与人员)
 @method
 @brief      收到会议中的直播地址的广播信息
 @discussion
 @param      callSession 实时通话的实例
 @param      urlList      包含直播地址的数组，url为不同视频解码的链接.可通过判断后缀.m3u8  .mp4 判断.
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
didReceivedBroadcastUrlList:(NSArray*) urlList;

/////////////////会议室人员获取/变动接口
/*! (参与人员)
 @method
 @brief      获取/收到会议中的人员更新回调
 @discussion
 @param      callSession 实时通话的实例
 @param      memberList   会议成员列表.[TMBVideoRoomMember 对象列表]
 @param
 @result     无返回值
 */
- (void) callSession:(TMBCallSession *) callSession
 didRoomMemberUpdate:(NSArray*) memberList;

@end