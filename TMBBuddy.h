/*!
 @header TMBBuddy.h
 @abstract 好友的信息描述类
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "TMBvCardTemp.h"
/*!
 @enum
 @brief 好友关系
 @constant eTMBBuddyFollowState_NotFollowed  双方不是好友
 @constant eTMBBuddyFollowState_Followed     对方已接受好友请求
 @constant eTMBBuddyFollowState_BeFollowed   登录用户已接受了该用户的好友请求
 @constant eTMBBuddyFollowState_FollowedBoth 登录用户和小伙伴都互相在好友列表中
 */
typedef enum : NSInteger {
    eTMBBuddyFollowState_NotFollowed = 0,    //双方不是好友
    eTMBBuddyFollowState_Followed,           //对方已接受好友请求.
    eTMBBuddyFollowState_BeFollowed,         //登录用户已接受了该用户的好友请求
    eTMBBuddyFollowState_FollowedBoth        //"登录用户"和"小伙伴"都互相在好友列表中
} TMBBuddyFollowState;


typedef NS_ENUM(NSInteger, TMBBuddyStatus) {  //好友状态
    kBST_BuddyStatusUnknow    = 1001,//未知状态
    kBST_BuddyStatusOffline   = 3,   //离线
    kBST_BuddyStatusXa        = 1,   //长时间离开
    kBST_BuddyStatusDnd       = 0,   //忙碌
    kBST_BuddyStatusAway      = 2,   //临时离开
    kBST_BuddyStatusAvailable = 4,    //在线
    kBST_BuddyStatusChat      = 5     //在线空闲
};

typedef NS_ENUM(NSInteger, TMBChatState) {
    kBCS_ChatStateUnknown   = 0,  //未知
    kBCS_ChatStateActive    = 1,  //在线激活
    kBCS_ChatStateComposing = 2,  //处理中
    kBCS_ChatStatePaused    = 3,  //停止发送
    kBCS_ChatStateInactive  = 4,  //不活动会话
    kBCS_ChatStateGone      = 5   //消失
};

/*!
 @class
 @brief 好友的信息描述类
 */
@interface TMBBuddy : NSObject
{
    
}

/*!
 @method
 @brief 通过username初始化一个TMBBuddy对象
 @param username 好友的username
 @discussion
 @result TMBBuddy实例对象
 */
+ (instancetype)buddyWithUsername:(NSString *)username;


//! 私用方法，内部使用!
- (instancetype)initWithXPOB:(id)xpOb;

/*!
 @method
 @brief 通过tmbBuddyStatus 提取当前状态的名称
 @param tmbBuddyStatus 好友的TMBBuddyStatus
 @discussion
 @result NSString实例对象
 */
+(NSString*) getBuddyStatusNameForTMBBuddyStatus:(TMBBuddyStatus) tmbBuddyStatus;

+(TMBBuddyStatus) getBuddyStatusForStatus:(NSString*) strStatus;

/*!
 @property
 @brief 好友的username [注册时用户名称]
 */
@property (copy, nonatomic, readonly)NSString *username;

/*!
 @property
 @brief 好友关系状态
 */
@property (nonatomic) TMBBuddyFollowState followState;

/*!
 @property
 @brief 是否等待对方接受好友请求()
 @discussion A向B发送好友请求,会自动将B添加到A的好友列表中,但isPendingApproval为NO,表示等待B接受A的好友请求,如果在好友列表中,不需要显示isPendingApproval为NO的用户,屏蔽它即可
 */
@property (nonatomic) BOOL isPendingApproval;


///////////////////////
////////////////
/////////

/*!
 @property
 @brief 好友的昵称
 */
@property (nonatomic, strong) NSString *displayName;

@property (nonatomic,strong) NSString *searchName;


@property (nonatomic, strong) NSString *composingMessageString;
@property (nonatomic, strong) NSString *statusMessage;
@property (nonatomic, strong) NSNumber * unreadMessages;

@property (nonatomic) TMBChatState   chatState;
@property (nonatomic) TMBChatState   lastSentChatState;
@property (nonatomic) TMBBuddyStatus status;

/*!
 @property
 @brief 最后一次发送消息的历史记录
 */
@property (nonatomic, strong) NSDate *lastMessageDate;

/*!
 @property
 @brief 好友的头像
 */
@property (nonatomic, strong,getter=getAvatarImage) UIImage *avatarImage;

/*
 @property
 @brief 好友的JID通迅地址，可用做唯一识别串号
 */
@property (nonatomic, strong) NSString *accountUniqueId;

/*!
 @property
 @brief 好友分组可用，昵称首字母
 */
@property (nonatomic, strong) NSString * sectionName;

/*!
 @property
 @brief 当前分组的索引位置
 */
@property (nonatomic, strong) NSNumber * sectionNum;

/*!
 @property
 @brief 当前好友的名片信息 [当前登陆的用户才会有此信息，获取好友列表时，如果本地数据库存好友名片，也可有此信息，但不能保证是最新的，慎用]
 */
@property (nonatomic, strong) TMBvCardTemp *vCardTemp;
@end
