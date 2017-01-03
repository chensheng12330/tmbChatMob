//
//  TMBCommandVideoRoomMsgBody.h
//  tmbChatMob
//
//  Created by HuYingZhuo on 15-9-1.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

/*!
 @header TMBCommandMessageBody.h
 @abstract 群聊视频消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2015/09/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>

#import "TMBCommandMessageBody.h"
#import "ITMBVideoRoomMessageBody.h"

@class TMBChatVideoRoomCommand;

@interface TMBCommandVideoRoomMsgBody : TMBCommandMessageBody<ITMBVideoRoomMessageBody>

/////////////////[原始消息提取]///////////////////////////////////
/*!
 @property
 @brief 具体命令
 */
@property (nonatomic, strong) NSString *action;

/*!
 @property
 @brief 命令参数
 */
@property (nonatomic, strong) NSDictionary *params;


/*!
 @property
 @brief 主持人信息
 */
@property (nonatomic,strong) NSDictionary *senderInfo;

//////////////////////////////////////////////////////////////////


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
 @brief 消息类型
 */
@property (nonatomic,assign) TMBVideoRoomMsgType type;

/*!
 @property
 @brief 房间ID
 */
@property (nonatomic,strong) NSString *roomVideoId;
/*!
 @property
 @brief 用户列表
 */
@property (nonatomic,strong) NSArray *userList;


/*!
 @method
 @abstract 以命令对象创建文件消息体实例
 @discussion
 @param aChatCommand 命令对象
 @result 命令消息体
 */
- (instancetype)initWithChatObject:(TMBChatVideoRoomCommand *)aChatCommand;

- (instancetype)initWithMsgInfo:(NSDictionary*)msg;

- (NSString*) messageBodyPackage;

/*!
 @method
 @abstract 检查命令消息中的用户列表里是否包含自己
 @discussion
 @result YES 包含 NO 不包含
 */
- (BOOL) isInUserList;

////////////////////////////////////////////////////////////////
/*!
 @method
 @abstract 生成roomVideoId
 @discussion
 @result 返回生成的roomVideoId
 */
+(NSString *)generateVideoRoomId;


/*!
 @method
 @abstract 实例化对象
 @discussion
 @param messageBody  命令消息体
 @result  TMBCommandVideoRoomMsgBody 对象
 */
+ (NSString *) stringForVideoRoomMsgType:(TMBVideoRoomMsgType) type;

/*!
 @method
 @abstract 实例化对象
 @discussion
 @param messageBody  命令消息体
 @result  TMBCommandVideoRoomMsgBody 对象
 */
+ (TMBVideoRoomMsgType) videoRoomMsgTypeForString:(NSString*) type;

@end
