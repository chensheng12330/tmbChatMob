/*!
 @header TMBBuddy.h
 @abstract 好友的名片信息描述类
 @author Sherwin.Chen By Temobi Inc.
 */
//  TMBvCardTemp.h
//  tmbChatMob
//
//  Created by sherwin on 15-3-16.
//  Copyright (c) 2015年 sherwin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TMBvCardTemp : NSObject

@property (nonatomic, strong) NSDate *bday;
@property (nonatomic, strong) NSData *photo;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *formattedName;
@property (nonatomic, strong) NSString *familyName;
@property (nonatomic, strong) NSString *givenName;
@property (nonatomic, strong) NSString *middleName;
@property (nonatomic, strong) NSString *prefix;
@property (nonatomic, strong) NSString *suffix;

//! 用户地址信息
@property (nonatomic, strong) NSArray *addresses;

//! 用户标签信息
@property (nonatomic, strong) NSArray *labels;

//! 用户联系信息
@property (nonatomic, strong) NSArray *telecomsAddresses;

//! 用户Email相关信息
@property (nonatomic, strong) NSArray *emailAddresses;

//! 公司
@property (nonatomic, strong) NSString *orgName;


//! 部门
@property (nonatomic, strong) NSString *orgUnits;

//! 职位
@property (nonatomic, strong) NSString *orgTitle;

//! 移动电话
@property (nonatomic, strong) NSString *mobilePhone;

//! 个人网页
@property (nonatomic, strong) NSString *webSite;

//!
@property (nonatomic, strong) CLLocation *location;

/*!
 @property
 @brief 用户注册名，不唯一，可能有多个登陆终端，如需要唯一识别用户ID,请使用-> jidString
 */
@property (nonatomic, strong) NSString *userName;

/*!
 @property
 @brief 用户JID值，在服务器唯一识别字符串，是用户名,服务器,登陆平台标识 合体
 */
@property (nonatomic, strong) NSString *jidString;

/*!
 @property
 @brief  登陆终端名称
 */
@property (nonatomic, strong) NSString *logPlatform;

//! 未初化方法
//! private Method
- (instancetype)initWithXPOB:(id) xpOb;
@end
