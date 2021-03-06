//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SSEverNoteTypeDef.h"

/**
 *	@brief	Accounting reader.
 */
@interface SSEverNoteAccountingReader : NSObject
{
@private
    NSDictionary *_sourceData;
}

/**
 *	@brief	Raw data.
 */
@property (nonatomic,readonly) NSDictionary *sourceData;

/**
 *	@brief	The number of bytes that can be uploaded to the account in the current month.
 *          For new notes that are created, this is the length of the note content (in Unicode characters)
 *          plus the size of each resource (in bytes). For edited notes, this is the the difference between
 *          the old length and the new length (if this is greater than 0) plus the size of each new resource.
 */
@property (nonatomic,readonly) long long uploadLimit;

/**
 *	@brief	The date and time when the current upload limit expires. At this time,
 *          the monthly upload count reverts to 0 and a new limit is imposed.
 *          This date and time is exclusive, so this is effectively the start of the new month.
 */
@property (nonatomic,readonly) long long uploadLimitEnd;

/**
 *	@brief	When uploadLimitEnd is reached, the service will change uploadLimit to uploadLimitNextMonth.
 *          If a premium account is canceled, this mechanism will reset the quota appropriately.
 */
@property (nonatomic,readonly) long long uploadLimitNextMonth;

/**
 *	@brief	Indicates the phases of a premium account during the billing process.
 */
@property (nonatomic,readonly) SSEverNotePremiumOrderStatus premiumServiceStatus;

/**
 *	@brief	The order number used by the commerce system to process recurring payments
 */
@property (nonatomic,readonly) NSString *premiumOrderNumber;

/**
 *	@brief	The commerce system used (paypal, Google checkout, etc)
 */
@property (nonatomic,readonly) NSString *premiumCommerceService;

/**
 *	@brief	The start date when this premium promotion began
 *          (this number will get overwritten if a premium service is canceled and then re-activated).
 */
@property (nonatomic,readonly) long long premiumServiceStart;

/**
 *	@brief	The code associated with the purchase eg.
 *          monthly or annual purchase. Clients should interpret this value and localize it.
 */
@property (nonatomic,readonly) NSString *premiumServiceSKU;

/**
 *	@brief	Date the last time the user was charged. Null if never charged.
 */
@property (nonatomic,readonly) long long lastSuccessfulCharge;

/**
 *	@brief	Date the last time a charge was attempted and failed.
 */
@property (nonatomic,readonly) long long lastFailedCharge;

/**
 *	@brief	Reason provided for the charge failure
 */
@property (nonatomic,readonly) NSString *lastFailedChargeReason;

/**
 *	@brief	The end of the billing cycle. This could be in the past if there are failed charges.
 */
@property (nonatomic,readonly) long long nextPaymentDue;

/**
 *	@brief	An internal variable to manage locking operations on the commerce variables.
 */
@property (nonatomic,readonly) long long premiumLockUntil;

/**
 *	@brief	The date any modification where made to this record.
 */
@property (nonatomic,readonly) long long updated;

/**
 *	@brief	The number number identifying the recurring subscription used to make the recurring charges.
 */
@property (nonatomic,readonly) NSString *premiumSubscriptionNumber;

/**
 *	@brief	Date charge last attempted
 */
@property (nonatomic,readonly) long long lastRequestedCharge;

/**
 *	@brief	ISO 4217 currency code
 */
@property (nonatomic,readonly) NSString *currency;

/**
 *	@brief	charge in the smallest unit of the currency (e.g. cents for USD)
 */
@property (nonatomic,readonly) long unitPrice;

/**
 *	@brief	If set, the ID of the Evernote Business account that the user is a member of.
 *          If not set, the user is not a member of a business.
 */
@property (nonatomic,readonly) long businessId;

/**
 *	@brief	The human-readable name of the Evernote Business account that the user is a member of.
 */
@property (nonatomic,readonly) NSString *businessName;

/**
 *	@brief	If set, the role of the user within the Evernote Business account that they are a member of.
 */
@property (nonatomic,readonly) SSEverNoteBusinessUserRole businessRole;

/**
 *	@brief	Initialize reader.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Reader object.
 */
- (id)initWithSourceData:(NSDictionary *)sourceData;

/**
 *	@brief	Create an accounting reader.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Reader object.
 */
+ (SSEverNoteAccountingReader *)readerWithSourceData:(NSDictionary *)sourceData;

@end
