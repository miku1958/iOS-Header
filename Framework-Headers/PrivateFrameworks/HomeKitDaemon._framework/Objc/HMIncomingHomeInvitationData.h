//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData
{
    NSString *_inviterUserID;
    NSString *_homeName;
    NSUUID *_homeUUID;
    NSString *_inviterName;
    NSUUID *_inviterUUID;
}

@property (readonly, copy, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property (readonly, copy, nonatomic) NSString *inviterName; // @synthesize inviterName=_inviterName;
@property (readonly, copy, nonatomic) NSUUID *inviterUUID; // @synthesize inviterUUID=_inviterUUID;
@property (readonly, nonatomic) NSString *inviterUserID; // @synthesize inviterUserID=_inviterUserID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7;

@end

