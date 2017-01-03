/*!
 @header ITMBMessageBody.h
 @abstract 聊天消息体对象基类协议
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatServiceDefs.h"

@protocol ITMBChatObject;
@class TMBMessage;

/*!
 @class
 @brief 聊天的消息体基类对象协议
 */
@protocol ITMBMessageBody <NSObject>

@required

/*!
 @property
 @brief 消息体的类型
 */
@property (nonatomic, readonly) MessageBodyType messageBodyType;

/*!
 @property
 @brief 消息体的底层聊天对象
 */
@property (nonatomic, strong, readonly) id<ITMBChatObject> chatObject;

/*!
 @property
 @brief 消息体所在的消息对象
 */
@property (nonatomic, weak) TMBMessage *message;

/*!
 @method
 @brief 由聊天对象构造消息体对象
 @discussion 派生类需要改写此方法
 @param aChatObject 聊天对象
 @result 消息体对象
 */
- (instancetype)initWithChatObject:(id<ITMBChatObject>)aChatObject;
- (instancetype)initWithMsgInfo:(NSDictionary*)msg;

-(NSString*) messageBodyPackage;
@end
