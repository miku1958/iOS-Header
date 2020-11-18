//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentRequest.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>
{
    PKServiceProviderOrder *_serviceProviderOrder;
}

@property (readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)merchantIdentifier;

@end

