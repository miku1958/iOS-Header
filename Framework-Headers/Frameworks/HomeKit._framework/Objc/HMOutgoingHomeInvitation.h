//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHomeInvitation.h>

@class HMUser;

@interface HMOutgoingHomeInvitation : HMHomeInvitation
{
    HMUser *_invitee;
}

@property (readonly, nonatomic) HMUser *invitee; // @synthesize invitee=_invitee;

+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;

@end

