//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDUser, NSArray, NSString, NSUUID;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation
{
    BOOL _responseReceived;
    HMDUser *_user;
    NSString *_inviteeDestinationAddress;
    NSArray *_operations;
    NSUUID *_messageIdentifier;
}

@property (readonly, nonatomic) NSArray *accessoryInvitationsInformation;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (strong, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property (readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property (strong, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property (nonatomic) BOOL responseReceived; // @synthesize responseReceived=_responseReceived;
@property (readonly, nonatomic) HMDUser *user; // @synthesize user=_user;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)cancel;
- (id)debugDescription;
- (id)describeWithFormat;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;
- (void)invitationRemovedDuringMerge;
- (BOOL)mergeWithInvitation:(id)arg1;
- (id)shortDescription;

@end

