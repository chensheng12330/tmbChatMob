/*!
 @header TMBCallSession.h
 @abstract 实时通话实例
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>

#import "TMBCallServiceDefs.h"

@interface TMBCallSession : NSObject

/*!
 @class
 @brief 通话实例的id，唯一
 */
@property (strong, nonatomic, readonly) NSString *sessionId;

/*!
 @class
 @brief 通话对方的nick name
 */
//@property (nonatomic,strong) NSString *sessionChatter;
@property (nonatomic,strong) NSString *nickName;

/*!
 @class
 @brief 通话的类型
 */
@property (nonatomic) TMBCallSessionType type;

/*!
 @class
 @brief 通话的状态
 */
@property (nonatomic) TMBCallSessionStatus status;

/*!
 @class
 @brief 连接类型
 */
@property (nonatomic) TMBCallConnectType connectType;

/*!
 @method
 @brief      实例化实时通话
 @param sessionId 会话ID值
 @discussion
 @result     @class(TMBCallSession) 实例对象
 */
- (instancetype)initWithSessionId:(NSString *)sessionId;


- (void) setSpeakerEnabled:(BOOL)enable;
- (void) setMicroEnable:(BOOL)enable;

/*!
 @method
 @brief          通话时发送指令信息.
 @param callCMD  字符信息，字符包括[0-9] , *, #在内的字符
 @discussion
 @result
 */
- (void) sentCallCommand:(NSString*) callCMD;

@end
