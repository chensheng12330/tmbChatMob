/*!
 @header TMBCallServiceDefs.h
 @abstract CallManager相关宏定义
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation for Sherwin.chen (1.00)
 */

#ifndef TMBChatMob_EMCallServiceDefs_h
#define TMBChatMob_EMCallServiceDefs_h

/*!
 @enum
 @brief 实时通话状态
 @constant eCallSessionStatusDisconnected 通话没开始
 @constant eCallSessionStatusRinging 通话响铃
 @constant eCallSessionStatusAnswering 通话双方正在协商
 @constant eCallSessionStatusPausing 通话暂停
 @constant eCallSessionStatusConnecting 通话已经准备好，等待接听
 @constant eCallSessionStatusConnected 通话已连接
 @constant eCallSessionStatusAccepted 通话双方同意协商
 */
typedef NS_ENUM(NSInteger, TMBCallSessionStatus){
    eCallSessionStatusDisconnected      = 0,
    eCallSessionStatusRinging,
    eCallSessionStatusAnswering,
    eCallSessionStatusPausing,
    eCallSessionStatusConnecting,
    eCallSessionStatusConnected,
    eCallSessionStatusAccepted,
};

/*!
 @enum
 @brief 实时通话类型
 @constant eCallSessionTypeAudio 实时语音
 @constant eCallSessionTypeVideo 实时视频
 @constant eCallSessionTypeRoomVideo 聊天室视频
 @constant eCallSessionTypeContent 暂时不支持的类型
 */
typedef NS_ENUM(NSInteger, TMBCallSessionType){
    eCallSessionTypeAudio       = 0,
    eCallSessionTypeVideo,
    eCallSessionTypeVideoRoom,
    eCallSessionTypeContent,
};

/*!
 @enum
 @brief 实时通话状态信息
 @constant eCallReason_Null 正常挂断
 @constant eCallReason_Offline 对方不在线
 @constant eCallReason_NoResponse 对方没有响应
 @constant eCallReason_Hangup 对方挂断
 @constant eCallReason_Reject 对方拒接
 @constant eCallReason_Busy 对方占线
 @constant eCallReason_Failure 失败
 */
typedef NS_ENUM(NSInteger, TMBCallStatusChangedReason){
    eCallReasonNull = 0,
    eCallReasonOffline,
    eCallReasonNoResponse,
    eCallReasonHangup,
    eCallReasonReject,
    eCallReasonBusy,
    eCallReasonFailure,
    eCallOutgoingInit,   //正在拨出通话...
    eCallOutgoingRinging,//对方收到拨号请求，响铃中,等待对方接听..
    eCallConnected,      //通话已连接,可进行音视频通话.
    eCallEnd            //通话中断，或已结束.断开通话连接. 可做相关的处理工作。
};

typedef NS_ENUM(NSInteger, TMBCallConnectType) {
    eCallConnectTypeNone = 0,
    eCallConnectTypeDirect,
    eCallConnectTypeRelay,
};


typedef enum : NSUInteger {
    TMBCallLoginNone,     //无状态
    TMBCallLoginProgress, //正在登陆实时通话服务器,流程处理中
    TMBCallLoginOk,       //成功登陆实时通话服务器,可进行音视频通话
    TMBCallLoginCleared,  //登出实时通话服务器 .
    TMBCallLoginFailed,   //登陆实时通话服务器失败，或与实时通话服务器失去连接(登陆成功后，网络断开)
    TMBCallLoginVerify,        //账号验证通过
}TMBCallLoginState;

#endif
