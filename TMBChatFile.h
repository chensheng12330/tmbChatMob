/*!
 @header TMBChatFile.h
 @abstract 聊天的文件对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBChatFile.h"

@protocol ITMBMessageBody;

/*!
 @class
 @brief 聊天的文件对象类型
 */
@interface TMBChatFile : NSObject<ITMBChatFile>
{
@private
    //TMBChatFileInternal* _internal;
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
 @brief 文件对象的文件格式,如:XML, PNG, JPG, XLS
 */
@property (nonatomic, strong) NSString *type;

/*!
 @property
 @brief
 聊天对象所在的消息体对象
 @discussion
 当消息体通过聊天对象创建完成后, messageBody为非nil, 当聊天对象并不属于任何消息体对象的时候, messageBody为nil
 */
@property (nonatomic, weak) id<ITMBMessageBody> messageBody;


@property (nonatomic, strong) NSData *fileData;
/*!
 @method
 @brief 以NSData构造文件对象
 @discussion
 @param aData 文件内容
 @param aDisplayName 文件对象的显示名
 @param aDisplayName 文件对象的显示名
 @result 文件对象
 */
- (instancetype)initWithData:(NSData *)aData displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

/*!
 @method
 @brief 以文件路径构造文件对象
 @discussion
 @param filePath 磁盘文件全路径
 @param aDisplayName 文件对象的显示名
 @param aDisplayName 文件对象的显示名
 @result 文件对象
 */
- (instancetype)initWithFile:(NSString *)filePath displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

@end
