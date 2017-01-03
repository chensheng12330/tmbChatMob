/*!
 @header TMBFilTMBessageBody.h
 @abstract 聊天的文件消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBFileMessageBody.h"
#import "TMBChatServiceDefs.h"

@protocol ITMBChatObject;
@class TMBMessage;
@class TMBChatFile;

/*!
 @class
 @brief 聊天的文件消息体对象
 */
@interface TMBFileMessageBody : NSObject<ITMBFileMessageBody>

/*!
 @property
 @brief 消息体的类型
 */
@property (nonatomic, assign) MessageBodyType messageBodyType;

/*!
 @property
 @brief 消息体的底层聊天对象
 */
@property (nonatomic, strong) id<ITMBChatObject> chatObject;

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
 @brief 远端文件的密钥, 下载时需要文件密钥和用户安全信息配合以下载远程文件
 */
@property (nonatomic, strong) NSString *secretKey;

/*!
 @property
 @brief 文件消息体的文件长度, 以字节为单位
 */
@property (nonatomic) long long fileLength;

/*!
 @property
 @brief 附件是否下载完成
 */
@property (nonatomic)TMBAttachmentDownloadStatus attachmentDownloadStatus;


/*!
 @property
 @brief 文件对象的数据格式,如:XML, PNG, JPG, XLS
 */
@property (nonatomic, strong) NSString *type;


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
