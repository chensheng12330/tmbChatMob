//
//  ITMBVideoRoomMessageBody.h
//  tmbChatMob
//
//  Created by sherwin on 15-9-2.
//  Copyright (c) 2015年 temobi. All rights reserved.
//

/*!
 @header ITMBVideoRoomMessageBody.h
 @abstract 群视频聊天消息体对象基类协议
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 15-9-2 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatServiceDefs.h"

@protocol ITMBVideoRoomMessageBody <NSObject>

/*!
 @property
 @brief 房间ID
 */
@property (nonatomic,strong) NSString *roomVideoId;


/*!
 @property
 @brief 消息类型
 */
@property (nonatomic,assign) TMBVideoRoomMsgType type;


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
 @brief 消息接收的用户列表
 */
@property (nonatomic,strong) NSArray *userList;

@end
