//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHAPAccessory, HMDUser, NSData, NSDate, NSUUID;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding>
{
    NSUUID *_accessoryIdentifier;
    NSUUID *_userIdentifier;
    NSUUID *_identifier;
    HMDHAPAccessory *_accessory;
    HMDUser *_user;
    NSData *_consentToken;
    NSDate *_expirationDate;
}

@property (weak, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSUUID *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property (readonly, copy, nonatomic) NSData *consentToken; // @synthesize consentToken=_consentToken;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) HMDUser *user; // @synthesize user=_user;
@property (strong, nonatomic) NSUUID *userIdentifier; // @synthesize userIdentifier=_userIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

