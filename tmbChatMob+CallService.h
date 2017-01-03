/*!
 @header tmbChatMob+CallService.h
 @abstract tmbChatMob的实时通话功能扩展
 @author tmbChatMob Inc.
 @version 1.00 2015/07/01 Creation (1.00)
 //  Created by sherwin on 15-6-30.
 */

#if 0
@interface TMBChatMob (CallService)
@end
#else

#import "tmbChatMob.h"

// defs headers
#import "TMBCallServiceDefs.h"

//manager
#import "ICallManager.h"

//delegate
#import "ICallManagerDelegate.h"

//type
#import "TMBCallSession.h"

@class TMBChatMob;

@protocol ICallManager;

/*!
 @category TMBChatMob(CallService)
 @discussion 该Category为TMBChatMob类提供了实时通话的能力.
 */
@interface TMBChatMob (CallService)

/*!
 @property
 @brief 由TemobiMob类提供的ICallManager属性
 */
@property (strong, readonly, nonatomic) id<ICallManager> callManager;

@end

#endif