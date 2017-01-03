/*!
 @header TMBVoicTMBessageBody.h
 @abstract 聊天的语音消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBFileMessageBody.h"
#import "TMBChatServiceDefs.h"

@class TMBMessage;
@class TMBChatVoice;
@protocol ITMBChatObject;

/*!
 @class
 @brief 聊天的语音消息体对象
 */
@interface TMBVoiceMessageBody : NSObject<ITMBFileMessageBody>
{
@private
    
    //TMBVoicTMBessageBodyInternal* _internal;
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
 @brief 文件消息体的显示名
 */
@property (nonatomic, strong) NSString *displayName;

/*!
 @property
 @brief 文件消息体的本地文件路径
 */
@property (nonatomic, strong) NSString *localPath;

/*!
 @property
 @brief 文件消息体的服务器远程文件路径
 */
@property (nonatomic, strong) NSString *remotePath;

/*!
 @property
 @brief 远端语音文件的密钥, 下载时需要语音文件密钥和用户安全信息配合以下载远程语音文件
 */
@property (nonatomic, strong) NSString *secretKey;

/*!
 @property
 @brief 文件消息体的文件长度, 以字节为单位
 */
@property (nonatomic) long long fileLength;

/*!
 @property
 @brief 语音时长, 秒为单位
 */
@property (nonatomic) NSInteger duration;


@property (nonatomic, strong) NSString *type;

/*!
 @property
 @brief 语音附件是否下载完成
 */
@property (nonatomic)TMBAttachmentDownloadStatus attachmentDownloadStatus;

/*!
 @method
 @brief 以语音对象创建语音消息体实例
 @discussion
 @param aChatVoice 语音对象
 @result 语音消息体
 */
- (id)initWithChatObject:(TMBChatVoice *)aChatVoice;

-(NSString*) messageBodyPackage;
@end
