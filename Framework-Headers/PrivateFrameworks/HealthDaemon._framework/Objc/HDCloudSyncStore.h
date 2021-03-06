//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDProfile, HDSharingPredicate, NSString, NSUUID;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore>
{
    long long _syncProvenance;
    long long _syncEpoch;
    int _syncProtocolVersion;
    BOOL _canPush;
    BOOL _syncTombstonesOnly;
    NSUUID *_storeIdentifier;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    HDProfile *_profile;
    NSString *_sharingIdentifier;
    HDSharingPredicate *_sharingPredicate;
}

@property (readonly, nonatomic) BOOL canPush; // @synthesize canPush=_canPush;
@property (readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly) int protocolVersion;
@property (readonly, copy, nonatomic) NSString *sharingIdentifier; // @synthesize sharingIdentifier=_sharingIdentifier;
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate; // @synthesize sharingPredicate=_sharingPredicate;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long syncStoreType;
@property (readonly, nonatomic) BOOL syncTombstonesOnly; // @synthesize syncTombstonesOnly=_syncTombstonesOnly;

+ (void)samplesDeletedInProfile:(id)arg1 byUser:(BOOL)arg2;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id *)arg6;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;
- (void).cxx_destruct;
- (id)_syncAnchorMapByStrippingBlacklistedEntities:(id)arg1;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (BOOL)clearAllSyncAnchorsWithError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)databaseIdentifier;
- (BOOL)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (id)getPersistedAnchorMapWithError:(id *)arg1;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;
- (id)orderedSyncEntities;
- (BOOL)persistState:(id)arg1 error:(id *)arg2;
- (id)persistedStateWithError:(id *)arg1;
- (id)receivedSyncAnchorMapWithError:(id *)arg1;
- (BOOL)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id *)arg3;
- (BOOL)replacePersistedAnchorMap:(id)arg1 error:(id *)arg2;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)arg1;
- (BOOL)shouldEnforceSequenceOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreForEpoch:(long long)arg1;
- (id)syncStoreForProtocolVersion:(int)arg1;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)arg1;
- (id)syncStoreIdentifier;

@end

