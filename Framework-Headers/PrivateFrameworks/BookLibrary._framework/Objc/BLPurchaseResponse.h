//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSCopying-Protocol.h>
#import <BookLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_currency;
    NSNumber *_errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSDictionary *_errorInfo;
    NSString *_logUUID;
    NSString *_permLink;
    NSString *_price;
    NSDictionary *_responseMetrics;
    NSNumber *_storeID;
    NSArray *_purchaseResponseItems;
    NSString *_purchaseParameters;
    NSDictionary *_item;
    NSString *_downloadID;
    NSDictionary *_metadata;
}

@property (copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property (copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property (copy, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property (copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property (copy, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property (copy, nonatomic) NSDictionary *item; // @synthesize item=_item;
@property (copy, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (copy, nonatomic) NSString *permLink; // @synthesize permLink=_permLink;
@property (copy, nonatomic) NSString *price; // @synthesize price=_price;
@property (copy, nonatomic) NSString *purchaseParameters; // @synthesize purchaseParameters=_purchaseParameters;
@property (strong, nonatomic) NSArray *purchaseResponseItems; // @synthesize purchaseResponseItems=_purchaseResponseItems;
@property (copy, nonatomic) NSDictionary *responseMetrics; // @synthesize responseMetrics=_responseMetrics;
@property (strong, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAMSPurchaseResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchase:(id)arg1 error:(id)arg2;
- (id)initWithSSPurchaseResponse:(id)arg1 downloadID:(id)arg2;

@end

