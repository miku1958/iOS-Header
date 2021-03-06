//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation
{
    HMMutableArray *_accessoryInvitations;
    HMUser *_invitee;
}

@property (readonly, nonatomic) NSArray *accessoryInvitations;
@property (readonly, nonatomic) HMUser *invitee; // @synthesize invitee=_invitee;

+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_unconfigure;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;

@end

