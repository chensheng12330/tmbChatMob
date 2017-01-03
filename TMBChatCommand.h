/*!
 @header TMBChatCommand.h
 @abstract 聊天的命令对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBChatObject.h"
#import "TMBChatServiceDefs.h"

@protocol ITMBMessageBody;

/*!
 @class
 @brief 聊天的命令对象类型
 */
@interface TMBChatCommand : NSObject<ITMBChatObject>{
    
}

/*!
 @property
 @brief 命令
 */
@property (nonatomic, strong) NSString *ccmd;

/*!
 @property
 @brief 命令参数
 */
@property (nonatomic, strong) NSDictionary *params;

/*!
 @property
 @brief
 聊天对象所在的消息体对象
 @discussion
 当消息体通过聊天对象创建完成后, messageBody为非nil, 当聊天对象并不属于任何消息体对象的时候, messageBody为nil
 */
@property (nonatomic, weak) id<ITMBMessageBody> messageBody;


- (instancetype)initWithCMD:(NSString*) cmdStr params:(NSDictionary*) paramsDict;

@end
