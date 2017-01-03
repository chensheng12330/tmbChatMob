//
//  TMBVideoRoomCallSession.h
//  tmbChatMob
//
//  Created by sherwin on 15-7-3.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//
/*!
 @header TMBVoiceCallSession.h
 @abstract 实时通话视频聊天室会话管理类
 @author Temobi Inc.
 @version 1.00  Creation (1.00) //Created by sherwin on 2015/07/03.
 */
#import "TMBVideoCallSession.h"

@interface TMBVideoRoomCallSession : TMBVideoCallSession

#pragma mark - 视频通话时可使用!
///*
// @method
// @brief      设置视频通话的视频展示视图
// @discussion 视频通话时的远程和本地视频显示视图,函数采取指针弱引用,注意释放问题.
// @param      remoteView  远程视频显示视图(即对方的设备摄像头视频)
// @param      loctionView 设备本地摄像头采集的视频,可调用 @select(switchVideoCamera) 方法进行前后摄向头的切换
// @result     无返回值，注意  remoteView，loctionView 内存释放问题,tmbVoIPMob只对其进行弱引用。
// */
//- (void) setRemoteVideoView:(UIView*) remoteView loctionVideoView:(UIView*) loctionView;
//
///*
// @method
// @brief      获取当前使用摄像头设备是前置还是后置
// @discussion 前置为 Front, 后置为 Back
// @result     如果为后置(Back),则返回YES 如果为前置(Front),则返回NO.
// */
//- (BOOL) isVideoCameraBackOrFront;
//
///*
// @method
// @brief      切换当前所使用的摄像头设备.
// @discussion 如需判断当前所使用的摄像头设备，可使用 @select(isVideoCameraBackOrFront) 进行获取
// @result     无返回值,切换过程中，需要等待.
// */
//- (void) switchVideoCamera;
//
//- (void) setVideoEnabled:(BOOL)enable;

@end
