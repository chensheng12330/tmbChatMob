/*!
 @header TMBChatImage.h
 @abstract 聊天的图片对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGGeometry.h>
#import "ITMBChatFile.h"
#import "IChatImageOptions.h"

@class UIImage;
@protocol ITMBMessageBody;

/*!
 @class
 @brief 聊天的图片对象类型
 */
@interface TMBChatImage : NSObject<ITMBChatFile>
{
@private
    //TMBChatImageInternal* _internal;
}
/*!
 @property
 @brief 文件对象的显示名
 */
@property (nonatomic, strong) NSString *displayName;

/*!
 @property
 @brief 文件对象本地磁盘位置的全路径
 */
@property (nonatomic, strong) NSString *localPath;

/*!
 @property
 @brief 文件对象所对应的文件的大小, 以字节为单位
 */
@property (nonatomic) long long fileLength;

/*!
 @property
 @brief 图片对象尺寸
 */
@property (nonatomic) CGSize size;

/*!图片数据编码格式*/
@property (nonatomic, strong) NSString *type;


/*!
 @property
 @brief
 聊天对象所在的消息体对象
 @discussion
 当消息体通过聊天对象创建完成后, messageBody为非nil, 当聊天对象并不属于任何消息体对象的时候, messageBody为nil
 */
@property (nonatomic, weak) id<ITMBMessageBody> messageBody;

/*!
 @property
 @brief 对上传的图片压缩设置
 @discussion 目前只支持对图片的压缩比率的设置
 */
@property (strong, nonatomic) id <IChatImageOptions> imageOptions;

/*!
 @method
 @brief 以UIImage构造图片对象
 @discussion
 @param aImage UIImage实例
 @param aDisplayName 图片对象的显示名
 @result 图片对象
 */
- (instancetype)initWithUIImage:(UIImage *)aImage displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

/*!
 @method
 @brief 以NSData构造图片对象
 @discussion
 @param aData 图片内容
 @param aDisplayName 图片对象的显示名
 @result 图片对象
 */
- (instancetype)initWithData:(NSData *)aData displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

/*!
 @method
 @brief 以文件路径构造图片对象
 @discussion
 @param filePath 磁盘文件全路径
 @param aDisplayName 图片对象的显示名
 @result 图片对象
 */
- (instancetype)initWithFile:(NSString *)filePath displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

@end
