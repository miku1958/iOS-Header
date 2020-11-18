//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDProtocolTranslatorIdentityDelegate-Protocol.h>

@class CKDClientContext, CKDPCSCache, CKDPCSFetchAggregator, NSData, NSMutableDictionary, NSOperationQueue, NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate>
{
    NSData *_userIdentityFingerprint;
    CKDClientContext *_context;
    NSString *_currentAccountIdentifier;
    NSOperationQueue *_operationQueue;
    CKDPCSFetchAggregator *_pcsFetchAggregator;
    CKDPCSCache *_zoneCache;
    CKDPCSCache *_backgroundZoneCache;
    NSMutableDictionary *_recordCacheByPrivateZoneID;
    NSMutableDictionary *_backgroundRecordCacheByPrivateZoneID;
    CKDPCSCache *_shareCache;
    CKDPCSCache *_backgroundShareCache;
    struct _PCSIdentityData *_sharingIdentity;
    NSString *_serviceName;
    id<NSObject> _contextObserver;
}

@property (strong, nonatomic) NSMutableDictionary *backgroundRecordCacheByPrivateZoneID; // @synthesize backgroundRecordCacheByPrivateZoneID=_backgroundRecordCacheByPrivateZoneID;
@property (strong, nonatomic) CKDPCSCache *backgroundShareCache; // @synthesize backgroundShareCache=_backgroundShareCache;
@property (strong, nonatomic) CKDPCSCache *backgroundZoneCache; // @synthesize backgroundZoneCache=_backgroundZoneCache;
@property (readonly, weak, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (strong, nonatomic) id<NSObject> contextObserver; // @synthesize contextObserver=_contextObserver;
@property (strong) NSString *currentAccountIdentifier; // @synthesize currentAccountIdentifier=_currentAccountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong, nonatomic) CKDPCSFetchAggregator *pcsFetchAggregator; // @synthesize pcsFetchAggregator=_pcsFetchAggregator;
@property (strong, nonatomic) NSMutableDictionary *recordCacheByPrivateZoneID; // @synthesize recordCacheByPrivateZoneID=_recordCacheByPrivateZoneID;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (strong, nonatomic) CKDPCSCache *shareCache; // @synthesize shareCache=_shareCache;
@property (nonatomic) struct _PCSIdentityData *sharingIdentity; // @synthesize sharingIdentity=_sharingIdentity;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *userIdentityFingerprint; // @synthesize userIdentityFingerprint=_userIdentityFingerprint;
@property (strong, nonatomic) CKDPCSCache *zoneCache; // @synthesize zoneCache=_zoneCache;

- (void).cxx_destruct;
- (struct _OpaquePCSShareProtection *)_addPublicSharingIdentityToSharePCS:(struct _OpaquePCSShareProtection *)arg1 withError:(id *)arg2;
- (id)_addServiceIdentitiesOfType:(id)arg1 toSet:(struct _PCSIdentitySetData *)arg2 fromSet:(struct _PCSIdentitySetData *)arg3 markCurrent:(BOOL)arg4;
- (struct _PCSIdentitySetData *)_createIdentitySetByAddingLiverpoolIdentity:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)_createInMemoryIdentitySetForService:(id)arg1 error:(id *)arg2;
- (void)_fetchPCSForRecordWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_fetchPCSForShareWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_fetchPCSForZoneWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_fetchSharePCSForRecordPCS:(id)arg1 cache:(id)arg2 operation:(id)arg3;
- (void)_fetchZonePCSForRecordPCS:(id)arg1 cache:(id)arg2 operation:(id)arg3;
- (void)_handleRecordFetchedFromServer:(id)arg1 withID:(id)arg2 forCache:(id)arg3 operation:(id)arg4 error:(id)arg5;
- (void)_handleShareFetchedFromServer:(id)arg1 withID:(id)arg2 forCache:(id)arg3 operation:(id)arg4 error:(id)arg5;
- (id)_newPCSRecordCache;
- (void)_saveNewPCSOnDefaultZone:(id)arg1 operation:(id)arg2 cache:(id)arg3;
- (BOOL)_saveZoneToServer:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 operation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_serviceNameForContainerID:(id)arg1;
- (BOOL)_zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection *)arg1;
- (id)addSelfIdentityToPCS:(struct _OpaquePCSShareProtection *)arg1;
- (BOOL)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (BOOL)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3 error:(id *)arg4;
- (id)addSharingIdentity:(struct _PCSIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)clearPCSCaches;
- (id)copyCurrentPublicIdentityWithError:(id *)arg1;
- (struct _PCSIdentitySetData *)copyServiceIdentityWithError:(id *)arg1;
- (struct _PCSPublicIdentityData *)createPublicIdentityFromData:(id)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(BOOL)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(BOOL)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithEncryptedZonePCS:(struct __CFData *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 logFailure:(BOOL)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 logFailure:(BOOL)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createSharePCSWithError:(id *)arg1;
- (struct _OpaquePCSShareProtection *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentityData *)createSharingIdentityWithError:(id *)arg1;
- (struct _OpaquePCSShareProtection *)createZonePCSFromData:(id)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createZonePCSWithError:(id *)arg1;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)etagFromPCSData:(id)arg1;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (void)fetchPCSForRecordWithID:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 operation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSForZoneWithID:(id)arg1 operation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithClientContext:(id)arg1;
- (id)newAssetKey;
- (id)pcsDataFromFetchedShare:(id)arg1 error:(id *)arg2;
- (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (void)removePCSDataForSharesInZoneWithID:(id)arg1;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removeSelfIdentityFromPCS:(struct _OpaquePCSShareProtection *)arg1;
- (BOOL)removeSharePCS:(struct _OpaquePCSShareProtection *)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (id)removeSharingIdentity:(struct _PCSIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)repairZonePCSData:(id)arg1 error:(id *)arg2;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (id)updatePCSIdentityAndRollKey:(struct _OpaquePCSShareProtection *)arg1;
- (void)updateZonePCSIfNeeded:(id)arg1 operation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;

@end
