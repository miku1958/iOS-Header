//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>
{
    BOOL _registerBroker;
    BOOL _registerPeerPayment;
}

@property (nonatomic) BOOL registerBroker; // @synthesize registerBroker=_registerBroker;
@property (nonatomic) BOOL registerPeerPayment; // @synthesize registerPeerPayment=_registerPeerPayment;

+ (id)remoteRegistrationRequestWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRemoteRegistrationRequest:(id)arg1;
- (id)protobuf;

@end
