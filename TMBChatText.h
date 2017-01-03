/*!
 @header TMBChatText.h
 @abstract 聊天的文本对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBChatObject.h"

@protocol ITMBMessageBody;

/*!
 @class 
 @brief 聊天的文本对象类型
 */
@interface TMBChatText : NSObject<ITMBChatObject>
{
@private
    //TMBChatTextInternal* _internal;
}
/*!
 @property
 @brief 文本对象的文本内容
 */
@property (nonatomic, strong) NSString *text;

/*!
 @property
 @brief
 聊天对象所在的消息体对象
 @discussion
 当消息体通过聊天对象创建完成后, messageBody为非nil, 当聊天对象并不属于任何消息体对象的时候, messageBody为nil
 */
@property (nonatomic, weak) id<ITMBMessageBody> messageBody;

/*!
 @method
 @brief 以字符串构造文本对象
 @discussion 
 @param text 文本内容
 @result 文本对象
 */
- (instancetype)initWithText:(NSString *)text;

@end
