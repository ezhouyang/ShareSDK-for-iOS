//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SSFacebookCredential.h"
#import <ShareSDKCoreService/ISSCUserDescriptor.h>
#import <ShareSDKCoreService/ShareSDKCoreService.h>
#import <ShareSDK/ShareSDK.h>
#import "SSFacebookUserReader.h"

/**
 *	@brief	User
 */
@interface SSFacebookUser : NSObject <ISSPlatformUser,
                                      NSCoding,
                                      ISSCDataObject>
									  
/**
 *	@brief	App object.
 */
@property (nonatomic,assign) id<ISSPlatformApp> app;

/**
 *	@brief	Credential object，If nil indicates is not current application authorized user
 */
@property (nonatomic,retain) id<ISSPlatformCredential> credential;

/**
 *	@brief	Raw data. the same user-defined information structure and the various platforms
 */
@property (nonatomic,retain) NSDictionary *sourceData;

/**
 *	@brief	Platform type.
 */
@property (nonatomic,readonly) ShareType type;

/**
 *	@brief	User id.
 */
@property (nonatomic,readonly) NSString *uid;

/**
 *	@brief	Nickname
 */
@property (nonatomic,readonly) NSString *nickname;

/**
 *	@brief	Avatar URL.
 */
@property (nonatomic,readonly) NSString *profileImage;

/**
 *	@brief	Gender：0 Male; 1 Female; 2 Unknown
 */
@property (nonatomic,readonly) NSInteger gender;

/**
 *	@brief	Personal homepage
 */
@property (nonatomic,readonly) NSString *url;

/**
 *	@brief	Profile
 */
@property (nonatomic,readonly) NSString *aboutMe;

/**
 *	@brief	Verify type：－1 Unknown; 0 Not certified; 1 Certification
 */
@property (nonatomic,readonly) NSInteger verifyType;

/**
 *	@brief	Verify reason.
 */
@property (nonatomic,readonly) NSString *verifyReason;

/**
 *	@brief	Birthday(unit：seconds)
 */
@property (nonatomic,readonly) NSString *birthday;

/**
 *	@brief	Fans count.
 */
@property (nonatomic,readonly) NSInteger followerCount;

/**
 *	@brief	Friend count.
 */
@property (nonatomic,readonly) NSInteger friendCount;

/**
 *	@brief	Share count.
 */
@property (nonatomic,readonly) NSInteger shareCount;

/**
 *	@brief	User registration time (unit: seconds)
 */
@property (nonatomic,readonly) NSTimeInterval regAt;

/**
 *	@brief	User level
 */
@property (nonatomic,readonly) NSInteger level;

/**
 *	@brief	Education information list of users
 */
@property (nonatomic,readonly) NSArray *educations;

/**
 *	@brief	Career information list of users
 */
@property (nonatomic,readonly) NSArray *works;

/**
 *	@brief	Initialize user.
 *
 *	@param 	app 	App object.
 *
 *	@return	User object.
 */
- (id)initWithApp:(id<ISSPlatformApp>)app;

@end
