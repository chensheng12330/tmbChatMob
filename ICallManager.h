/*!
 @header ICallManager.h
 @abstract 此接口提供了实时通话的基本操作
 @author Temobi Inc.
 @version 1.00 2015/07/01 Creation (1.00) //Created by sherwin on 15-6-30.
 */

#import <Foundation/Foundation.h>

#import "ICallManagerBase.h"
#import "ICallManagerCall.h"
#import "ICallVideoRoomCommand.h"

@protocol ICallManager <ICallManagerBase, ICallManagerCall,ICallVideoRoomCommand>

@required

@end
