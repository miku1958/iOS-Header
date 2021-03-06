//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor
{
    unsigned long long _paymentFundingSourceTypes;
    unsigned long long _paymentPresets;
    unsigned long long _paymentFrequencies;
    NSArray *_supportedFileFormatsForTransactionData;
    NSString *_paymentTermsIdentifier;
    NSString *_fundingSourceTermsIdentifier;
}

@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property (nonatomic) unsigned long long paymentFrequencies; // @synthesize paymentFrequencies=_paymentFrequencies;
@property (nonatomic) unsigned long long paymentFundingSourceTypes; // @synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets; // @synthesize paymentPresets=_paymentPresets;
@property (copy, nonatomic) NSString *paymentTermsIdentifier; // @synthesize paymentTermsIdentifier=_paymentTermsIdentifier;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData; // @synthesize supportedFileFormatsForTransactionData=_supportedFileFormatsForTransactionData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg1;

@end

