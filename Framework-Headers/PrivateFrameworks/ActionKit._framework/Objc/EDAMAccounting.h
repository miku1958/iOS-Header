//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMBackupPaymentInfo, NSNumber, NSString;

@interface EDAMAccounting : FATObject
{
    NSNumber *_uploadLimit;
    NSNumber *_uploadLimitEnd;
    NSNumber *_uploadLimitNextMonth;
    NSNumber *_premiumServiceStatus;
    NSString *_premiumOrderNumber;
    NSString *_premiumCommerceService;
    NSNumber *_premiumServiceStart;
    NSString *_premiumServiceSKU;
    NSNumber *_lastSuccessfulCharge;
    NSNumber *_lastFailedCharge;
    NSString *_lastFailedChargeReason;
    NSNumber *_nextPaymentDue;
    NSNumber *_premiumLockUntil;
    NSNumber *_updated;
    NSString *_premiumSubscriptionNumber;
    NSNumber *_lastRequestedCharge;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSNumber *_businessId;
    NSString *_businessName;
    NSNumber *_businessRole;
    NSNumber *_unitDiscount;
    NSNumber *_nextChargeDate;
    NSNumber *_availablePoints;
    EDAMBackupPaymentInfo *_backupPaymentInfo;
}

@property (strong, nonatomic) NSNumber *availablePoints; // @synthesize availablePoints=_availablePoints;
@property (strong, nonatomic) EDAMBackupPaymentInfo *backupPaymentInfo; // @synthesize backupPaymentInfo=_backupPaymentInfo;
@property (strong, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;
@property (strong, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property (strong, nonatomic) NSNumber *businessRole; // @synthesize businessRole=_businessRole;
@property (strong, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property (strong, nonatomic) NSNumber *lastFailedCharge; // @synthesize lastFailedCharge=_lastFailedCharge;
@property (strong, nonatomic) NSString *lastFailedChargeReason; // @synthesize lastFailedChargeReason=_lastFailedChargeReason;
@property (strong, nonatomic) NSNumber *lastRequestedCharge; // @synthesize lastRequestedCharge=_lastRequestedCharge;
@property (strong, nonatomic) NSNumber *lastSuccessfulCharge; // @synthesize lastSuccessfulCharge=_lastSuccessfulCharge;
@property (strong, nonatomic) NSNumber *nextChargeDate; // @synthesize nextChargeDate=_nextChargeDate;
@property (strong, nonatomic) NSNumber *nextPaymentDue; // @synthesize nextPaymentDue=_nextPaymentDue;
@property (strong, nonatomic) NSString *premiumCommerceService; // @synthesize premiumCommerceService=_premiumCommerceService;
@property (strong, nonatomic) NSNumber *premiumLockUntil; // @synthesize premiumLockUntil=_premiumLockUntil;
@property (strong, nonatomic) NSString *premiumOrderNumber; // @synthesize premiumOrderNumber=_premiumOrderNumber;
@property (strong, nonatomic) NSString *premiumServiceSKU; // @synthesize premiumServiceSKU=_premiumServiceSKU;
@property (strong, nonatomic) NSNumber *premiumServiceStart; // @synthesize premiumServiceStart=_premiumServiceStart;
@property (strong, nonatomic) NSNumber *premiumServiceStatus; // @synthesize premiumServiceStatus=_premiumServiceStatus;
@property (strong, nonatomic) NSString *premiumSubscriptionNumber; // @synthesize premiumSubscriptionNumber=_premiumSubscriptionNumber;
@property (strong, nonatomic) NSNumber *unitDiscount; // @synthesize unitDiscount=_unitDiscount;
@property (strong, nonatomic) NSNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property (strong, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property (strong, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
@property (strong, nonatomic) NSNumber *uploadLimitEnd; // @synthesize uploadLimitEnd=_uploadLimitEnd;
@property (strong, nonatomic) NSNumber *uploadLimitNextMonth; // @synthesize uploadLimitNextMonth=_uploadLimitNextMonth;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

