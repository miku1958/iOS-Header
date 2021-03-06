//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, PKServiceProviderPurchaseData;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_visibleTransactionIdentifier;
    unsigned long long _state;
    NSString *_deviceIdentifier;
    NSString *_regionIdentifier;
    NSString *_serviceProviderIdentifier;
    PKServiceProviderPurchaseData *_serviceProviderData;
    NSDate *_purchaseDate;
    NSString *_signature;
    NSString *_partnerMetadata;
    NSArray *_actions;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *partnerMetadata; // @synthesize partnerMetadata=_partnerMetadata;
@property (copy, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (copy, nonatomic) NSString *regionIdentifier; // @synthesize regionIdentifier=_regionIdentifier;
@property (copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property (copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property (copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (copy, nonatomic) NSString *visibleTransactionIdentifier; // @synthesize visibleTransactionIdentifier=_visibleTransactionIdentifier;

+ (id)purchaseWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToServiceProviderPurchase:(id)arg1;

@end

