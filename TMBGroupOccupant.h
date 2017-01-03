//
//  TMBGroupOccuppant.h
//  EasTMBobClientSDK
//
//  Created by EasTMBob on 10/27/14.
//  Copyright (c) 2014 EasTMBob. All rights reserved.
//  群组成员名片信息

#import <Foundation/Foundation.h>
#import "TMBBuddy.h"

@interface TMBGroupOccupant : NSObject

@property (nonatomic,readonly)NSString *username;
@property (nonatomic,readonly)NSString *nickname;

/////////// 新增 //////////
//! 群ID
@property (nonatomic,readonly) NSString *groupID;

@property (nonatomic,readonly) NSString *memberId;

//! 好友关系
@property (nonatomic,readonly) NSString* affiliation;

//! 群组角色
@property (nonatomic,readonly) NSString* role;

//! 当前状态
@property (nonatomic,readonly) NSString* show;

//! 状态描述
@property (nonatomic,readonly) TMBBuddyStatus status;

//! private Method Don't User.
- (instancetype)initWithPrivaObj:(id) priObj;

- (instancetype)initWithUserName:(NSString*)userName
                        nickName:(NSString*) nickName;
@end
