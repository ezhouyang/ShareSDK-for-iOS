//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 *	@brief	Video Reader.
 */
@interface SSTencentWeiboVideoReader : NSObject
{
@private
    NSDictionary *_sourceData;
}

/**
 *	@brief	Raw data.
 */
@property (nonatomic,readonly) NSDictionary *sourceData;

/**
 *	@brief	Thumbnail.
 */
@property (nonatomic,readonly) NSString *picurl;

/**
 *	@brief	Player address.
 */
@property (nonatomic,readonly) NSString *player;

/**
 *	@brief	Real URL string.
 */
@property (nonatomic,readonly) NSString *realurl;

/**
 *	@brief	Short URL string.
 */
@property (nonatomic,readonly) NSString *shorturl;

/**
 *	@brief	Title string.
 */
@property (nonatomic,readonly) NSString *title;

/**
 *	@brief	Initialize reader.
 *
 *	@param 	sourceData 	Faw data
 *
 *	@return	Reader object.
 */
- (id)initWithSourceData:(NSDictionary *)sourceData;

/**
 *	@brief	Create a video reader.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Reader object.
 */
+ (SSTencentWeiboVideoReader *)readerWithSourceData:(NSDictionary *)sourceData;

@end
