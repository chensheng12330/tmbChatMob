/*!
 @header TMBLocationMessageBody.h
 @abstract 聊天的位置消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "TMBChatServiceDefs.h"
#import "ITMBMessageBody.h"
#import "TMBChatLocation.h"

@class TMBMessage;
@protocol ITMBChatObject;

/*!
 @class
 @brief 聊天的位置消息体对象
 */
@interface TMBLocationMessageBody : NSObject<ITMBMessageBody>
{
@private
    //TMBLocationMessageBodyInternal* _internal;
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
 @brief 纬度
 */
@property (nonatomic) double latitude;

/*!
 @property
 @brief 经度
 */
@property (nonatomic) double longitude;

/*!
 @property
 @brief 地理位置信息
 */
@property (nonatomic, strong) NSString *address;

//! 使用第三方服务坐标系统名称
@property (nonatomic) TMBLocationType useLocationType;

/*!
 @method
 @brief 以位置对象创建位置消息体实例
 @discussion
 @param aChatLocation 位置对象
 @result 位置消息体
 */
- (id)initWithChatObject:(TMBChatLocation *)aChatLocation;

- (instancetype)initWithMsgInfo:(NSDictionary*)msg;

-(NSString*) messageBodyPackage;

@end
