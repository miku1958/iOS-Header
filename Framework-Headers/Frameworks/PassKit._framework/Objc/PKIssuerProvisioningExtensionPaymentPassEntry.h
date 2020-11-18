//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKIssuerProvisioningExtensionPassEntry.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKAddPaymentPassRequestConfiguration;

@interface PKIssuerProvisioningExtensionPaymentPassEntry : PKIssuerProvisioningExtensionPassEntry <NSSecureCoding>
{
    PKAddPaymentPassRequestConfiguration *_addRequestConfiguration;
}

@property (readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addRequestConfiguration; // @synthesize addRequestConfiguration=_addRequestConfiguration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 art:(struct CGImage *)arg3 addRequestConfiguration:(id)arg4;

@end
