/*!
 @header TMBVideoMessageBody.h
 @abstract 聊天的视频消息体对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBFileMessageBody.h"
#import "TMBChatServiceDefs.h"

@class TMBChatVideo;
@protocol ITMBChatObject;
@class TMBMessage;

/*!
 @class
 @brief 聊天的视频消息体对象
 */
@interface TMBVideoMessageBody : NSObject<ITMBFileMessageBody>
{
@private
    //TMBVideoMessageBodyInternal* _internal;
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
 @brief 远端视频文件的密钥, 下载时需要视频文件密钥和用户安全信息配合以下载远程视频文件
 */
@property (nonatomic, strong) NSString *secretKey;

/*!
 @property
 @brief 文件消息体的本地第一帧图片路径
 */
@property (nonatomic, strong) NSString *thumbnailLocalPath;

/*!
 @property
 @brief 文件消息体的服务器视频第一帧图片路径
 */
@property (nonatomic, strong) NSString *thumbnailRemotePath;

/*!
 @property
 @brief 远端视频文件第一帧图片的密钥, 下载时需要视频文件密钥和用户安全信息配合以下载远程图片文件
 */
@property (nonatomic, strong) NSString *thumbnailSecretKey;

/*!
 @property
 @brief 文件消息体的文件长度, 以字节为单位
 */
@property (nonatomic) long long fileLength;

/*!
 @property
 @brief 视频时长, 秒为单位
 */
@property (nonatomic) NSInteger duration;

/*!
 @property
 @brief 视频大小
 */
@property (nonatomic) CGSize size;

@property (nonatomic, strong) NSString *type;

/*!
 @property
 @brief 视频附件是否下载完成
 */
@property (nonatomic)TMBAttachmentDownloadStatus attachmentDownloadStatus;

/*!
 @property
 @brief 缩略图是否下载完成
 */
@property (nonatomic)TMBAttachmentDownloadStatus thumbnailDownloadStatus;

/*!
 @method
 @brief 以视频对象创建视频消息体实例
 @discussion 视频部分目前不支持
 @param aChatVideo 视频对象
 @result 视频消息体
 */
- (id)initWithChatObject:(TMBChatVideo *)aChatVideo;

-(NSString*) messageBodyPackage;
@end
