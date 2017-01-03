/*!
 @header ITMBChatFile.h
 @abstract 基于文件类的聊天对象接口
 @author Temobi Inc.
 @version 1.00 2015/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "ITMBChatObject.h"

/*!
 @class
 @brief 基于文件类的聊天对象协议
 */
@protocol ITMBChatFile <ITMBChatObject>

@required

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
 @method
 @brief 以NSData构造文件对象
 @discussion 
 @param aData 文件内容
 @param aDisplayName 文件对象的显示名
 @param type 文件对象的文件格式
 @result 文件对象
 */
- (id)initWithData:(NSData *)aData displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

/*!
 @method
 @brief 以文件路径构造文件对象
 @discussion 
 @param filePath 磁盘文件全路径
 @param aDisplayName 文件对象的显示名
 @param type 文件对象的文件格式
 @result 文件对象
 */
- (id)initWithFile:(NSString *)filePath displayName:(NSString *)aDisplayName type:(NSString*) aFileType;

@end
