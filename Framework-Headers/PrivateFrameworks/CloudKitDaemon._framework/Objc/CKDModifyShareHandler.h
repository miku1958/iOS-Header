//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDModifyRecordHandler.h>

@class CKRecordID, CKShare;

__attribute__((visibility("hidden")))
@interface CKDModifyShareHandler : CKDModifyRecordHandler
{
    BOOL _haveAddedOwnerToShare;
    BOOL _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
}

@property (nonatomic) BOOL haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // @synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;
- (void)_addPublicKeyToSelfParticipant;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;
- (void)_alignParticipantPermissions;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)arg1;
- (id)_createNewSharePCSDataWithError:(id *)arg1;
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchSharePCSData;
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;
- (BOOL)_serializePCSDataForShareWithError:(id *)arg1;
- (void)_setupParticipantsProtectionInfos;
- (BOOL)_updateSharePublicPCSWithError:(id *)arg1;
- (void)clearProtectionDataForRecord;
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;
- (void)fetchSharePCSData;
- (BOOL)isCloudDocsContainer;
- (BOOL)isShare;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (void)prepareForSave;
- (void)savePCSDataToCache;
- (unsigned long long)serviceType;
- (void)setServerRecord:(id)arg1;
- (id)sideEffectRecordIDs;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;

@end
