//
//  TMBChatShareDocFile.h
//  tmbChatMob
//
//  Created by sherwin on 15-9-29.
//  Copyright (c) 2015年 Temobi. All rights reserved.
//

/*!
 @header TMBChatFile.h
 @abstract 聊天的共享文档文件对象类型
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2015/09/29 Creation (1.00)
 */

#import "TMBChatFile.h"

@interface TMBChatShareDocFile : TMBChatFile

/*!
 @property
 @brief 在线文档查看地址.
 */
//@property (nonatomic, strong) NSString *onlineHtmlUrl;

/*!
 @property
 @brief 在线文档查看地址.
 */
@property (nonatomic, strong) NSString *docDescription;


/*!
 @property
 @brief 文档上传作者
 */
@property (nonatomic, strong) NSString *author;


/*!
 @method
 @brief 以文件路径构造文件对象
 @discussion
 @param filePath 磁盘文件全路径
 @param aDisplayName 文件对象的显示名
 @param aFileType    文件类型格式,例如：world, pdf, execl.
 @result 文件对象
 */
- (instancetype)initWithFile:(NSString *)filePath
                 displayName:(NSString *)aDisplayName
                        type:(NSString*) aFileType
              docDescription:(NSString*) description
                      author:(NSString*)author;
@end
