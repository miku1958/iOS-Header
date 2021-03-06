//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordID, CKShareID, CKShareParticipant, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface CKShare : CKRecord <NSSecureCoding, NSCopying>
{
    BOOL _encodeAllowsReadOnlyParticipantsToSeeEachOther;
    BOOL _allowsAnonymousPublicAccess;
    BOOL _serializePersonalInfo;
    long long _publicPermission;
    NSMutableSet *_addedParticipantIDs;
    NSMutableSet *_removedParticipantIDs;
    NSMutableArray *_lastFetchedParticipants;
    NSMutableArray *_allParticipants;
    long long _participantVisibility;
    CKContainerID *_containerID;
    CKRecordID *_rootRecordID;
    NSData *_invitedProtectionData;
    NSString *_invitedProtectionEtag;
    NSString *_previousInvitedProtectionEtag;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
    NSString *_previousPublicProtectionEtag;
    NSArray *_invitedKeysToRemove;
    CKShareID *_shareID;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @dynamic URL;
@property (strong, nonatomic) NSMutableSet *addedParticipantIDs; // @synthesize addedParticipantIDs=_addedParticipantIDs;
@property (strong, nonatomic) NSMutableArray *allParticipants; // @synthesize allParticipants=_allParticipants;
@property (nonatomic) BOOL allowsAnonymousPublicAccess; // @synthesize allowsAnonymousPublicAccess=_allowsAnonymousPublicAccess;
@property (strong, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (readonly, copy, nonatomic) CKShareParticipant *currentUserParticipant;
@property (nonatomic) BOOL encodeAllowsReadOnlyParticipantsToSeeEachOther; // @synthesize encodeAllowsReadOnlyParticipantsToSeeEachOther=_encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property (strong, nonatomic) NSArray *invitedKeysToRemove; // @synthesize invitedKeysToRemove=_invitedKeysToRemove;
@property (strong, nonatomic) NSData *invitedProtectionData; // @synthesize invitedProtectionData=_invitedProtectionData;
@property (strong, nonatomic) NSString *invitedProtectionEtag; // @synthesize invitedProtectionEtag=_invitedProtectionEtag;
@property (readonly, nonatomic) BOOL isZoneWideShare;
@property (strong, nonatomic) NSMutableArray *lastFetchedParticipants; // @synthesize lastFetchedParticipants=_lastFetchedParticipants;
@property (readonly, copy, nonatomic) CKShareParticipant *owner;
@property (nonatomic) long long participantVisibility; // @synthesize participantVisibility=_participantVisibility;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (strong, nonatomic) NSString *previousInvitedProtectionEtag; // @synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag;
@property (strong, nonatomic) NSString *previousPublicProtectionEtag; // @synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag;
@property (nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
@property (strong, nonatomic) NSData *publicProtectionData; // @synthesize publicProtectionData=_publicProtectionData;
@property (strong, nonatomic) NSString *publicProtectionEtag; // @synthesize publicProtectionEtag=_publicProtectionEtag;
@property (strong, nonatomic) NSData *publicSharingIdentity;
@property (strong, nonatomic) NSMutableSet *removedParticipantIDs; // @synthesize removedParticipantIDs=_removedParticipantIDs;
@property (copy, nonatomic) CKRecordID *rootRecordID; // @synthesize rootRecordID=_rootRecordID;
@property (nonatomic) BOOL serializePersonalInfo; // @synthesize serializePersonalInfo=_serializePersonalInfo;
@property (copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(BOOL)arg3 inContainer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_commonCKShareInit;
- (id)_copyWithoutPersonalInfo;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithShareRecordID:(id)arg1;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (BOOL)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
- (BOOL)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (void)_removeAllParticipants;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (void)_removePendingPrivateAndAdminParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (void)_stripPersonalInfo;
- (void)addParticipant:(id)arg1;
- (id)addedParticipants;
- (BOOL)allowsReadOnlyParticipantsToSeeEachOther;
- (BOOL)canHostServerURLInfo;
- (void)clearModifiedParticipants;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (BOOL)hasEncryptedData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithRootRecord:(id)arg1;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (void)registerFetchedParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)arg1;
- (void)setWantsPublicSharingKey:(BOOL)arg1;
- (id)shareURL;
- (id)updateFromServerShare:(id)arg1;

@end

