//
//  tmbChatMob.h
//  tmbChatMob
//
//  Created by sherwin on 15-3-3.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//
//*************************************************************
//* 创建者：陈胜  chensheng12330@gmail.com
//* 创建时间： 2015.03.03
//* 修改时间： 2015.11.10
//* 当前版本： v2.1
//* 文档名称： VoIP视频通话Demo相关说明
//* 文档说明：
//*************************************************************

//115.28.41.212/ycmp/tmbMob_SDK/index.html

/*  ** Code Mark
 
 //ARC
 @autoreleasepool
 ￼￼{
 ￼NSString *s = [NSString stringWithFormat:. . .];
 ￼}
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

#import "IChatManager.h"
#import "IDeviceManager.h"
#import "EMError.h"


#import "TMBBuddy.h"
#import "TMBGroup.h"
#import "TMBMessage.h"
#import "TMBvCardTemp.h"
#import "TMBConversation.h"


#import "ITMBChatFile.h"
#import "ITMBMessageBody.h"
#import "ITMBFileMessageBody.h"
#import "ITMBChatProgressDelegate.h"
#import "ITMBVideoRoomMessageBody.h"

#import "IChatManager.h"
#import "IChatManagerDelegate.h"

#import "TMBChatManagerUtilDelegate.h"
//#import "TMBPushNotificationOptions.h"


#import "TMBChatFile.h"
#import "TMBChatText.h"
#import "TMBChatVideo.h"
#import "TMBChatVoice.h"
#import "TMBChatImage.h"
#import "TMBChatLocation.h"
#import "TMBChatCommand.h"
#import "TMBChatVideoRoomCommand.h"
#import "TMBChatShareDocFile.h"

#import "IChatImageOptions.h"
#import "TMBTextMessageBody.h"
#import "TMBImageMessageBody.h"
#import "TMBVoiceMessageBody.h"
#import "TMBVideoMessageBody.h"
#import "TMBLocationMessageBody.h"
#import "TMBFileMessageBody.h"
#import "TMBCommandMessageBody.h"
#import "TMBCommandVideoRoomMsgBody.h"
#import "TMBShareDocFileMessageBody.h"

/*!
 @class
 @brief 本类主要处理：聊天管理、设备管理、消息管理的控制工作，以及App主事件路由
 @discussion SDK集成进工程后, 最先使用的类, 所有的类对象, 均是通过这个单实例来获取, 示例代码如下:
 [tmbChatMob sharedInstance]
 */

#define TMBMob     [TMBChatMob sharedInstance]
#define TMBChatMan ([TMBChatMob sharedInstance].chatManager)
#define TMBDeviMan ([TMBChatMob sharedInstance].deviceManager)
#define TMBCallMan ([TMBChatMob sharedInstance].callManager)

@interface TMBChatMob : NSObject<UIApplicationDelegate>
{
    
@private
    id<IChatManager>   _chatManager;
    id<IDeviceManager> _deviceManager;
    //id<IPushManager> _pushManager;
    //unsigned _backgroundTaskId;
}
/*!
 @property
 @brief 聊天管理器, 获取该对象后, 可以做登录、聊天、加好友等操作
 */
@property (nonatomic, readonly, strong) id<IChatManager> chatManager;

/*!
 @property
 @brief 设备管理器, 获取该对象后, 可以操作硬件相关的接口(照片、音频、地理位置信息等)
 */
@property (nonatomic, readonly, strong) id<IDeviceManager> deviceManager;

/*!
 @property
 @brief TemobiMob SDK版本号
 */
@property (nonatomic, readonly, strong) NSString *sdkVersion;



/*!
 @method
 @brief 获取单实例
 @discussion
 @result tmbChatMob实例对象
 */
+ (TMBChatMob *)sharedInstance;

/*!
 @method
 @brief 初始化SDK
 @discussion 失败返回EMError,成功返回nil
 @result 初始化是否成功
 */
- (EMError *)registerSDKWithAppKey:(NSString *)anAppKey;
@end

//Test Head
#import "tmbChatMob+CallService.h"
