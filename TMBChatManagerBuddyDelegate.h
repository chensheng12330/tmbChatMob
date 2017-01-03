/*!
 @header TMBChatManagerBuddyDelegate.h
 @abstract 添加好友,删除好友,接收到好友请求时的回调协议
 @author Sherwin.Chen By Temobi Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "TMBChatManagerDelegateBase.h"
#import "IChatManager.h"

@class TMBBuddy;
@class TMBvCardTemp;
/*!
 @protocol
 @brief 添加好友,删除好友,接收到好友请求时的回调协议
 @discussion
 */
@protocol TMBChatManagerBuddyDelegate <TMBChatManagerDelegateBase>

@optional
/*!
 @method
 @brief 接收到好友请求时的通知
 @discussion
 @param username 发起好友请求的用户username
 @param message  收到好友请求时的say hello消息
 */
- (void)didReceiveBuddyRequest:(NSString *)username
                       message:(NSString *)message;

/*!
 @method
 @brief 好友请求被接受时的回调
 @discussion
 @param username 之前发出的好友请求被用户username接受了
 */
- (void)didAcceptedByBuddy:(NSString *)username;

/*!
 @method
 @brief 好友请求被拒绝时的回调
 @discussion
 @param username 之前发出的好友请求被用户username拒绝了
 */
- (void)didRejectedByBuddy:(NSString *)username;

/*!
 @method
 @brief 接受好友请求成功的回调
 @discussion
 @param username 登录用户接受了"username发过来的好友请求"成功的回调
 */
- (void)didAcceptBuddySucceed:(NSString *)username;

/*!
 @method
 @brief 登录的用户被好友从列表中删除了
 @discussion
 @param username 删除的好友username
 */
- (void)didRTMBovedByBuddy:(NSString *)username;

/*!
 @method
 @brief 通讯录信息发生变化时的通知
 @discussion
 @param buddyList 好友信息列表
 @param changedBuddies 修改了的用户列表
 @param isAdd (YES为新添加好友, NO为删除好友)
 */
- (void)didUpdateBuddyList:(NSArray *)buddyList
            changedBuddies:(NSArray *)changedBuddies
                     isAdd:(BOOL)isAdd;

/*!
 @method
 @brief 好友分组信息发生变化时的通知
 @discussion
 @param buddyGroupList 好友分组信息
 @since
 */
- (void)didUpdateBuddyGroupList:(NSArray *)buddyGroupList TMB_DEPRECATED_IOS(2_0_3, 2_0_9, "Delete");

/*!
 @method
 @brief 获取好友名片信息，以及名片更新时的，成功时的回调
 @discussion
 @param buddyCardTemp 当前好友名片
 @param error     错误信息
 */
- (void)didFetchedBuddyCardTempInfo:(TMBvCardTemp*)buddyCardTemp
                              error:(EMError *)error;

/*!
 @method
 @brief 获取自已名片信息，以及名片更新时的,成功时的回调
 @discussion
 @param buddyCardTemp 当前登陆用户的名片
 @param error     错误信息
 */
- (void)didUpdataMyBuddyCardTempInfo:(TMBvCardTemp*)buddyCardTemp
                               error:(EMError *)error;

/*!
 @method
 @brief 获取好友列表成功时的回调
 @discussion
 @param buddyList 好友列表
 @param error     错误信息
 */
- (void)didFetchedBuddyList:(NSArray *)buddyList
                      error:(EMError   *)error;

/*!
 @method
 @brief 删除好友的回调
 @discussion
 @param username 好友用户名
 @param error     错误信息
 */
- (void)didRemoveBuddy:(NSString *)username
                 error:(EMError   *)error;

/*!
 @method
 @brief 好友上线和下线时的通知
 @discussion
 @param isOnline 好友信息是否改变
 @param buddy 修改了状态的用户
 */
- (void)didChangedOnlineStatus:(BOOL)isOnline
                      forBuddy:(TMBBuddy *)buddy;



#pragma mark - block

- (void)didUpdateBlockedList:(NSArray *)blockedList;

/*!
 @method
 @brief 将好友加到黑名单完成后的回调
 @discussion
 @param buddy    加入黑名单的好友
 @param pError   错误信息
 */
- (void)didBlockBuddy:(TMBBuddy *)buddy error:(EMError   **)pError;

/*!
 @method
 @brief 将好友移出黑名单完成后的回调
 @discussion
 @param buddy    移出黑名单的好友
 @param pError   错误信息
 */
- (void)didUnblockBuddy:(TMBBuddy *)buddy error:(EMError   **)pError;

/*!
 @method
 @brief 搜索用户的回调
 @discussion
 @param searchList    根据关键字已查到的用户例表
 @param pError   错误信息
 */
- (void)didSearchBuddyList:(NSArray *) searchList error:(EMError   *)pError;

/*!
 @method
 @brief 检测用户是否已注册的回调方法
 @discussion
 @param searchList    查到的已经注册的用户例表
 @param pError   错误信息
 */
- (void)didCheckUserList:(NSArray *) searchList error:(EMError   *)pError;

@end
