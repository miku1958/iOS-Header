//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPaymentRequest, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>
{
    PKRemoteDevice *_device;
    PKPaymentRequest *_paymentRequest;
    NSString *_selectedApplicationIdentifier;
    NSString *_identifier;
}

@property (readonly, nonatomic) PKRemoteDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (copy, nonatomic) NSString *selectedApplicationIdentifier; // @synthesize selectedApplicationIdentifier=_selectedApplicationIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRemoteRequest:(id)arg1;

@end
