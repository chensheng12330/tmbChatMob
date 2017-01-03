/*!
 @header ITMBFilTMBessageBody.h
 @abstract 基于文件类的消息体接口
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBMessageBody.h"

/*!
 @enum
 @brief 附件下载的状态
 @constant TMBAttachmentDownloading       正在下载
 @constant TMBAttachmentDownloadSuccessed 下载成功
 @constant TMBAttachmentDownloadFailure   下载失败
 @constant TMBAttachmentNotStarted        未下载
 */
typedef enum : NSUInteger {
    TMBAttachmentDownloading,
    TMBAttachmentDownloadSuccessed,
    TMBAttachmentDownloadFailure,
    TMBAttachmentNotStarted,
} TMBAttachmentDownloadStatus;


/*!
 @protocol
 @brief 基于文件类型的消息体接口协议
 */
@protocol ITMBFileMessageBody <ITMBMessageBody>

@required

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
 @brief 附件是否下载完成
 */
@property (nonatomic)TMBAttachmentDownloadStatus attachmentDownloadStatus;

/*!
 @property
 @brief 文件消息体的文件长度, 以字节为单位
 */
@property (nonatomic) long long fileLength;

/*!
 @property
 @brief 文件对象的文件格式,如:XML, PNG, JPG, XLS
 */
@property (nonatomic, strong) NSString *type;

@end
