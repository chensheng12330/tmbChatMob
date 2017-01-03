/*!
 @header TMBCommandMessageBody.h
 @abstract 聊天的命令消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBMessageBody.h"
#import "TMBChatServiceDefs.h"

@class TMBChatCommand;

/*!
 @class
 @abstract 聊天的命令消息体对象
 */
@interface TMBCommandMessageBody : NSObject<ITMBMessageBody>

/*!
 @property
 @brief 消息体的类型
 @discussion 实现ITMBMessageBody接口
 */
@property (nonatomic, readonly) MessageBodyType messageBodyType;

/*!
 @property
 @brief 消息体的底层聊天对象
 @discussion 实现ITMBMessageBody接口
 */
@property (nonatomic, strong, readonly) id<ITMBChatObject> chatObject;

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
 @brief 文本消息,用于在会话窗口显示给用户看，当前命令操作指令的意思.
 */
@property (nonatomic, strong) NSString *text;


/*!
 @property
 @brief 消息体所在的消息对象
 @discussion 实现ITMBMessageBody接口
 */
@property (nonatomic, weak) TMBMessage *message;

/*!
 @method
 @abstract 以命令对象创建文件消息体实例
 @discussion
 @param aChatCommand 命令对象
 @result 命令消息体
 */
- (id)initWithChatObject:(TMBChatCommand *)aChatCommand;


@end
