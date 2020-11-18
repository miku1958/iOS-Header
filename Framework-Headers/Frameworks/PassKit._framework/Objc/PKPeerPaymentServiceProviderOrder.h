//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder
{
    NSString *_sourceAccount;
    NSString *_targetAccount;
    NSString *_dpanIdentifier;
}

@property (copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property (copy, nonatomic) NSString *sourceAccount; // @synthesize sourceAccount=_sourceAccount;
@property (copy, nonatomic) NSString *targetAccount; // @synthesize targetAccount=_targetAccount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderData;

@end
