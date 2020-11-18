//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    NSSet *_fees;
}

@property (strong, nonatomic) NSSet *fees; // @synthesize fees=_fees;

+ (id)_feesSetFromJsonString:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeeItems:(id)arg1;
- (id)initWithJsonString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFees:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonArrayRepresentation;
- (id)jsonString;
- (id)recordTypesAndNames;

@end

