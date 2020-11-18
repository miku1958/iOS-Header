//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDUser, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMDUserPresenceFeed : HMFObject
{
    HMDUser *_user;
    HMDDevice *_residentDevice;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMDUserPresenceRegion *_presenceRegion;
    HMDUserPresenceUpdateReason *_reason;
}

@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegion; // @synthesize presenceRegion=_presenceRegion;
@property (readonly, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property (readonly, weak, nonatomic) HMDDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property (readonly, weak, nonatomic) HMDUser *user; // @synthesize user=_user;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)arg1 residentDevice:(id)arg2 presenceAuthStatus:(id)arg3 presenceComputeStatus:(id)arg4 presenceRegion:(id)arg5 reason:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end

