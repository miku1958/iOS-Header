//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, PHConcurrentMapTable;
@protocol OS_dispatch_queue;

@interface PHCoreImageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_requestLookupTableIsolationQueue;
    NSMapTable *_requestLookupTable;
    PHConcurrentMapTable *_perDomainPreheatItemMapTables;
    PHConcurrentMapTable *_perDomainCloudPreheatItemMapTables;
    PHConcurrentMapTable *_perDomainMissedPreheatItemMapTables;
    PHConcurrentMapTable *_perDomainHighPriorityRequestWaitGroups;
    NSObject<OS_dispatch_queue> *_CPLDownloadUpdateIsolationQueue;
    NSObject<OS_dispatch_queue> *_CPLDownloadFireAndForgetRequestQueue;
    NSMutableSet *_domainsWithPurgeScheduled;
    NSMutableSet *_cloudDomainsWithPurgeScheduled;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadFireAndForgetRequestQueue; // @synthesize CPLDownloadFireAndForgetRequestQueue=_CPLDownloadFireAndForgetRequestQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadUpdateIsolationQueue; // @synthesize CPLDownloadUpdateIsolationQueue=_CPLDownloadUpdateIsolationQueue;
@property (strong, nonatomic) NSMutableSet *cloudDomainsWithPurgeScheduled; // @synthesize cloudDomainsWithPurgeScheduled=_cloudDomainsWithPurgeScheduled;
@property (strong, nonatomic) NSMutableSet *domainsWithPurgeScheduled; // @synthesize domainsWithPurgeScheduled=_domainsWithPurgeScheduled;
@property (strong, nonatomic) PHConcurrentMapTable *perDomainCloudPreheatItemMapTables; // @synthesize perDomainCloudPreheatItemMapTables=_perDomainCloudPreheatItemMapTables;
@property (strong, nonatomic) PHConcurrentMapTable *perDomainHighPriorityRequestWaitGroups; // @synthesize perDomainHighPriorityRequestWaitGroups=_perDomainHighPriorityRequestWaitGroups;
@property (strong, nonatomic) PHConcurrentMapTable *perDomainMissedPreheatItemMapTables; // @synthesize perDomainMissedPreheatItemMapTables=_perDomainMissedPreheatItemMapTables;
@property (strong, nonatomic) PHConcurrentMapTable *perDomainPreheatItemMapTables; // @synthesize perDomainPreheatItemMapTables=_perDomainPreheatItemMapTables;
@property (strong, nonatomic) NSMapTable *requestLookupTable; // @synthesize requestLookupTable=_requestLookupTable;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *requestLookupTableIsolationQueue; // @synthesize requestLookupTableIsolationQueue=_requestLookupTableIsolationQueue;

+ (struct CGSize)_aspectedSizeWithSize:(struct CGSize)arg1 maxDimension:(double)arg2;
+ (void)_chooseFormatsForSize:(struct CGSize)arg1 contentMode:(long long)arg2 srcAspectRatio:(double)arg3 options:(id)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 desiredImagePixelSize:(struct CGSize *)arg6 bestFormat:(id *)arg7 degradedFormat:(id *)arg8;
+ (id)_debugFilenameForAsset:(id)arg1;
+ (id)_degradedFormatWithPolicy:(long long)arg1 request:(id)arg2 hasAdjustmentsHandler:(CDUnknownBlockType)arg3;
+ (id)_descriptionForDomain:(id)arg1;
+ (id)_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (id)_fastestDegradedFormatForRequest:(id)arg1 hasAdjustmentsHandler:(CDUnknownBlockType)arg2;
+ (struct CGImage *)_newResizedImageForImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 normalizedCropRect:(struct CGRect)arg3 contentMode:(long long)arg4;
+ (long long)_plImageVersionFromPHImageRequestOptionsVersion:(long long)arg1;
+ (long long)_wantedCloudPlaceholderKindForImageFormat:(id)arg1;
+ (void)runBlockAsPrivilegedAsPhotosApp:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_asyncFetchCloudSharedAnySizeImageAsNon5551BytesIfNecessaryWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_cancelAndFlushPreheatItemsForAssets:(id)arg1 CPLPrefetching:(BOOL)arg2 domain:(id)arg3 operation:(long long)arg4 passingTestHandler:(CDUnknownBlockType)arg5 didCancelHandler:(CDUnknownBlockType)arg6;
- (void)_cancelAndFlushPreheatWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(BOOL)arg3 domain:(id)arg4 operation:(long long)arg5 outPreheatItem:(id *)arg6 didCancelHandler:(CDUnknownBlockType)arg7;
- (void)_cancelAndFlushPreheatWithAsset:(id)arg1 preheatItem:(id)arg2 domain:(id)arg3 operation:(long long)arg4 didCancelHandler:(CDUnknownBlockType)arg5;
- (void)_cancelAsynchronousRequestWithID:(int)arg1;
- (void)_clearCPLDownloadWaitGroupForRequest:(id)arg1;
- (BOOL)_deleteMissedPreheatItemForAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (id)_fastFetchAdjustmentDataWithRequest:(id)arg1;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(BOOL)arg2 trackCPLDownload:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 wantsProperties:(BOOL)arg5 networkAccessAllowed:(BOOL)arg6 networkAccessForced:(BOOL)arg7 trackCPLDownload:(BOOL)arg8 sync:(BOOL)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(BOOL)arg6 fireAndForgetCPLDownload:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(struct CGSize)arg6 sync:(BOOL)arg7 fireAndForgetCPLDownload:(BOOL)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2;
- (void)_handleSyncImageRequestForBRGA5551:(id)arg1;
- (id)_highPriorityRequestWaitGroupWithDomain:(id)arg1;
- (id)_originalPreheatlItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3 domain:(id)arg4;
- (id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4 CPLPrefetching:(BOOL)arg5 outDidExist:(BOOL *)arg6 domain:(id)arg7;
- (id)_preheatItemMapTableWithFormat:(int)arg1 CPLPrefetching:(BOOL)arg2 domain:(id)arg3 createIfNeeded:(BOOL)arg4;
- (id)_preheatItemSourceWithFormat:(int)arg1;
- (id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(BOOL)arg3 domain:(id)arg4;
- (void)_processImageRequest:(id)arg1 sync:(BOOL)arg2;
- (BOOL)_recordMissedPreheatItemForAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (void)_registerRequest:(id)arg1;
- (id)_resizeUIImage:(id)arg1 withRequest:(id)arg2;
- (void)_schedulePurgeForCPLPrefetching:(BOOL)arg1 domain:(id)arg2 onMainQueue:(BOOL)arg3 didCancelHandler:(CDUnknownBlockType)arg4;
- (id)_setupCPLDownloadWaitGroupForRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (void)_unregisterRequest:(id)arg1;
- (void)_updateCPLDownloadStatesOnConnectionLostNotification:(id)arg1;
- (void)_updateCPLDownloadStatesOnStatusDidChangeNotification:(id)arg1;
- (void)asyncEnumeratePendingCPLDownloadRequestsWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncEnumeratePendingRequestsWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)updateRequest:(id)arg1 withDownloadContext:(id)arg2;

@end

