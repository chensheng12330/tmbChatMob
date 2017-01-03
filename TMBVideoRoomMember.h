//
//  TMBVideoRoomMember.h
//  tmbChatMob
//
//  Created by sherwin on 15-8-19.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 聊天会议室成员角色定义.
 */
typedef NS_ENUM(NSInteger, TMBCallVideoRoomRole){
    TMBVideoRoomRoleNone    = 0,    //未知身份
    TMBVideoRoomRolePresenter,      //会议主持人
    TMBVideoRoomRoleMember,         //普通成员
    
};

/*!
 当前聊天会议室成员的实时状态.
 */
typedef NS_ENUM(NSInteger, TMBCallVideoRoomState){
    TMBVideoRoomStateRoleNone =0,     //未知状态
    TMBVideoRoomStateCommon,          //普通状态
    TMBVideoRoomStateVideoBroadcast,  //当前成员拥有视频广播权
    TMBVideoRoomStateAudioBroadcast,  //当前成员拥有音频广播权
    
};

@interface TMBVideoRoomMember : NSObject

//!成员的在会议室中ID值。(在IM体现为username值。)
@property (nonatomic, strong) NSString *memberCallID;

//!聊天会议室成员角色定义.
@property (nonatomic, assign) TMBCallVideoRoomRole  memberOfRole;

//!当前聊天会议室成员的实时状态.
@property (nonatomic, assign) TMBCallVideoRoomState memberOfState;

//! 用户额外信息，用于与IM数据信息结合.可将@class(TMBGroupOccupant) 设置至此.方便列表查询.
@property (nonatomic, strong) NSObject *userInfoObj;

@end
