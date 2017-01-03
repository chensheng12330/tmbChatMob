//
//  TMBShareDocFileMessageBody.h
//  tmbChatMob
//
//  Created by sherwin on 15-9-29.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

/*!
 @header TMBFileMessageBody.h
 @abstract 聊天的共享文档文件消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2015/09/29 Creation (1.00)
 */


#import "TMBFileMessageBody.h"

@interface TMBShareDocFileMessageBody : TMBFileMessageBody

//////////
/*!
 @property
 @brief 在线文档查看地址.
 */
@property (nonatomic, strong) NSString *onlineHtmlUrl;

/*!
 @property
 @brief 在线文档查看地址.
 */
@property (nonatomic, strong) NSString *docDescription;


/*!
 @property
 @brief 文档上传作者
 */
@property (nonatomic, strong) NSString *author;


/////////

/*!
 @method
 @brief 以文件对象创建文件消息体实例
 @discussion
 @param aChatFile 文件对象
 @result 文件消息体
 */
- (id)initWithChatObject:(TMBChatFile *)aChatFile;

- (id)initWithMsgInfo:(NSDictionary*)msg;

@end
