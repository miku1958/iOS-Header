//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTDataConnectionAvailabilityStatus, CTDataConnectionStatus, CTXPCServiceSubscriptionContext, NSNumber;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_carrierEnabled;
    NSNumber *_userAuthenticated;
    NSNumber *_asserted;
    NSNumber *_activationFailure;
    NSNumber *_misPdpMaxHosts;
    CTDataConnectionAvailabilityStatus *_connectionAvailabilityStatus;
    CTDataConnectionStatus *_connectionStatus;
    CTXPCServiceSubscriptionContext *_context;
}

@property (strong, nonatomic) NSNumber *activationFailure; // @synthesize activationFailure=_activationFailure;
@property (strong, nonatomic) NSNumber *asserted; // @synthesize asserted=_asserted;
@property (strong, nonatomic) NSNumber *carrierEnabled; // @synthesize carrierEnabled=_carrierEnabled;
@property (strong, nonatomic) CTDataConnectionAvailabilityStatus *connectionAvailabilityStatus; // @synthesize connectionAvailabilityStatus=_connectionAvailabilityStatus;
@property (strong, nonatomic) CTDataConnectionStatus *connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property (strong, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property (strong, nonatomic) NSNumber *misPdpMaxHosts; // @synthesize misPdpMaxHosts=_misPdpMaxHosts;
@property (strong, nonatomic) NSNumber *userAuthenticated; // @synthesize userAuthenticated=_userAuthenticated;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

