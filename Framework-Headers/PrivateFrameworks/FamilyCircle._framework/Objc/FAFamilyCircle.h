//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class FAEligibilityRequirements, FAFamilyCloudKitProperties, FAFamilyMember, NSArray, NSDictionary, NSString;

@interface FAFamilyCircle : NSObject <NSSecureCoding>
{
    BOOL _canAddMembers;
    BOOL _showAddMemberButton;
    NSArray *_pendingMembers;
    NSArray *_invites;
    FAFamilyMember *_me;
    NSArray *_members;
    FAEligibilityRequirements *_eligibilityRequirements;
    FAFamilyCloudKitProperties *_cloudKitProperties;
    NSDictionary *__serverResponse;
    NSString *_addMemberButtonLabel;
    NSString *_familyMembersFooterLabel;
}

@property (readonly) NSDictionary *_serverResponse; // @synthesize _serverResponse=__serverResponse;
@property (readonly, copy, nonatomic) NSString *addMemberButtonLabel; // @synthesize addMemberButtonLabel=_addMemberButtonLabel;
@property (readonly, nonatomic) BOOL canAddMembers; // @synthesize canAddMembers=_canAddMembers;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties; // @synthesize cloudKitProperties=_cloudKitProperties;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements; // @synthesize eligibilityRequirements=_eligibilityRequirements;
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel; // @synthesize familyMembersFooterLabel=_familyMembersFooterLabel;
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites; // @synthesize invites=_invites;
@property (readonly, nonatomic) FAFamilyMember *me; // @synthesize me=_me;
@property (readonly) NSArray *members; // @synthesize members=_members;
@property (readonly, copy, nonatomic) NSArray *pendingMembers; // @synthesize pendingMembers=_pendingMembers;
@property (readonly, nonatomic) BOOL showAddMemberButton; // @synthesize showAddMemberButton=_showAddMemberButton;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)memberForAltDSID:(id)arg1;

@end

