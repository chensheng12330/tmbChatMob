/*!
 @header TMBTextMessageBody.h
 @abstract 聊天的文本消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBMessageBody.h"
#import "TMBChatServiceDefs.h"

@class TMBChatText;
@protocol ITMBChatObject;
@class TMBMessage;

/*!
 @class
 @brief 聊天的文本消息体对象
 */
@interface TMBTextMessageBody : NSObject<ITMBMessageBody>
{
@private
    //TMBTextMessageBodyInternal* _internal;
}
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
 @property
 @brief 文本消息体的内部文本对象的文本
 */
@property (nonatomic, strong) NSString *text;


/*!
 @method
 @brief 以文本对象创建文本消息体实例
 @discussion
 @param aChatText 文本对象
 @result 文本消息体
 */
- (id)initWithChatObject:(TMBChatText *)aChatText;

@end
