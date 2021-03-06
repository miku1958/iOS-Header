//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUser.h>

@class HMDDevice;

@interface HMDResidentUser : HMDUser
{
    HMDDevice *_device;
    unsigned long long _configurationState;
}

@property (readonly, getter=isBlocked) BOOL blocked;
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
@property (readonly) HMDDevice *device; // @synthesize device=_device;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1;
- (id)deviceIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;
- (id)legacyUser;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (BOOL)refreshDisplayName;
- (void)registerIdentity;
- (BOOL)requiresMakoSupport;
- (void)setDevice:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (BOOL)updateWithDevice:(id)arg1;
- (id)userID;

@end

