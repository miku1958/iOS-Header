//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSArray, NSMutableSet, NSSet;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone
{
    BOOL _useAnonymousRequests;
    NSSet *_modifiedRecordIDsFromLastPull;
    NSMutableSet *_uncommittedModifiedRecordIDsFromLastPull;
    NSSet *_watchedRecordIDs;
    NSArray *_signatureVerificationPublicKeys;
}

@property (strong, nonatomic) NSSet *modifiedRecordIDsFromLastPull; // @synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull;
@property (readonly, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property (strong, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull; // @synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull;
@property (readonly, nonatomic) BOOL useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property (readonly, nonatomic) NSSet *watchedRecordIDs; // @synthesize watchedRecordIDs=_watchedRecordIDs;

+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
+ (unsigned long long)__maxSizeForCKRecordString;
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)__calculateNetworkDeclarationsDigestFromRecord:(id)arg1 error:(id *)arg2;
- (BOOL)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2;
- (BOOL)__commitLocalChanges:(id)arg1 error:(id *)arg2;
- (id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id *)arg2;
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;
- (void)__finalizeUpdatedRecordIDs;
- (id)__getNetworkDeclarationsDataFromRecord:(id)arg1 error:(id *)arg2;
- (id)__getNetworkDeclarationsSignatureDataFromRecord:(id)arg1 error:(id *)arg2;
- (void)__noteUpdatedRecordID:(id)arg1;
- (void)__recordChanged:(id)arg1 fetchInfo:(id)arg2;
- (void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3;
- (void)__retryFetchWithFetchInfo:(id)arg1;
- (BOOL)__verifyNetworkDeclarationsDigestAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 error:(id *)arg4;
- (BOOL)__verifyNetworkDeclarationsFromRecord:(id)arg1 baseAccessoryIdentifier:(id *)arg2 networkDeclarationsData:(id *)arg3 error:(id *)arg4;
- (void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2;
- (void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2;
- (void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(BOOL)arg3 fetchInfo:(id)arg4;
- (id)attributeDescriptions;
- (id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(BOOL)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5;
- (id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2;
- (void)startUpWithLocalZone:(id)arg1;

@end
