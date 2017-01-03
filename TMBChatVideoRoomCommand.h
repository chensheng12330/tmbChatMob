//
//  TMBChatVideoRoomCommand.h
//  tmbChatMob
//
//  Created by sherwin on 15-9-1.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//
/*!
 @header   TMBChatCommand.h
 @abstract 群组视频聊天的命令对象类型
 @author   HuYingZhuo By Temobi Inc.
 @version 1.00 2015/09/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "TMBChatCommand.h"
#import "ITMBVideoRoomMessageBody.h"
#import "TMBCommandVideoRoomMsgBody.h"

@interface TMBChatVideoRoomCommand : TMBChatCommand<ITMBVideoRoomMessageBody>

/*!
 @property
 @brief 群视频通话房间ID
 */
@property (nonatomic,strong) NSString *roomVideoId;


/*!
 @property
 @brief 消息类型
 */
@property (nonatomic) TMBVideoRoomMsgType type;


/*!
 @property
 @brief 消息发送者ID值 【对应IM的 username】
 */
@property (nonatomic,strong) NSString *senderUserName;

/*!
 @property
 @brief 消息发送者的昵称
 */
@property (nonatomic,strong) NSString *senderNickName;

/*!
 @property
 @brief 消息接收的用户列表 [TMBGroupOccupant] -> userList
 */
@property (nonatomic,strong) NSArray *userList;


/*!
 @method
 @abstract 检查命令消息中的用户列表里是否包含自己
 @discussion
 @param messageBody  命令消息体
 @result YES 包含 NO 不包含
 */
+(BOOL)isInUserList:(TMBCommandVideoRoomMsgBody *)messageBody;

/*!
 @method
 @abstract   实例化对象
 @param     type 视频通话指令类型   userList
 @param     roomVideoId   群视频通话房间ID
 @param     senderUserName   主持人ID
 @param     senderNickName 主持人昵称
 @param     userList      当前消息指定接收的用户列表(没在列表内的用户，可过滤掉此消息)
 @discussion
 @result  TMBChatVideoRoomCommand对象
 */
-(instancetype)initWithType:(TMBVideoRoomMsgType)type
                roomVideoId:(NSString*)roomVideoId
            senderUserName:(NSString*)senderUserName
            senderNickName:(NSString*)senderNickName
                   userList:(NSArray *)userList;

//! 取当unix时间截做为VideoRoomID
+(NSString *) generateVideoRoomId;

//! 根据群ID做为VideoRoomID
+(NSString *) generateVideoRoomIdWithGroupID:(NSString*)groupID;
@end
