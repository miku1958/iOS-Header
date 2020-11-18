//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, TIMobileAssetSyncState;
@protocol OS_dispatch_queue;

@interface TIMobileAssetMediator : NSObject
{
    BOOL _isWaitingForReachability;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_queuedAssetMatchSet;
    TIMobileAssetSyncState *_syncState;
    struct __SCNetworkReachability *_reachabilityRef;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) BOOL isWaitingForReachability; // @synthesize isWaitingForReachability=_isWaitingForReachability;
@property (readonly, nonatomic) NSMutableSet *queuedAssetMatchSet; // @synthesize queuedAssetMatchSet=_queuedAssetMatchSet;
@property (readonly, nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property (readonly, nonatomic) TIMobileAssetSyncState *syncState; // @synthesize syncState=_syncState;

+ (id)assetDownloadsInProgress;
+ (id)assetsByRemovingOldVersionsFromAssets:(id)arg1;
+ (id)compatibilityPredicate;
+ (oneway void)downloadAsset:(id)arg1 continuation:(CDUnknownBlockType)arg2;
+ (id)downloadOptionsForAsset:(id)arg1;
+ (CDUnknownBlockType)downloadProgressHandlerForAsset:(id)arg1;
+ (id)fetchAssetInformationForDownloadsInProgress;
+ (id)fetchAssetInformationMatchingAny:(id)arg1 localOnly:(BOOL)arg2 compatibleOnly:(BOOL)arg3;
+ (BOOL)isDownloadOverdueForAsset:(id)arg1;
+ (id)knownAssetIdentifiers;
+ (id)predicateForAssetMatch:(id)arg1 compatibleVersionOnly:(BOOL)arg2;
+ (id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 acceptUnspecifiedAttribute:(BOOL)arg4 lenientMatch:(BOOL)arg5;
+ (id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (id)predicateForKey:(id)arg1 matchingString:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (id)predicateForTIAsset:(id)arg1;
+ (id)queryAssetsWithPredicate:(id)arg1 localOnly:(BOOL)arg2 error:(id *)arg3;
+ (void)recordDownloadEndedForAsset:(id)arg1;
+ (void)recordDownloadStartedForAssets:(id)arg1;
+ (void)saveAssetDownloadsInProgress;
+ (id)uniqueIdentifierForAsset:(id)arg1;
+ (id)uniqueIdentifierWithVersionForAsset:(id)arg1;
- (void)dealloc;
- (oneway void)downloadAssets:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)downloadUninstalledAssetsMatching:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)downloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (id)fetchInstalledAssetInformation;
- (oneway void)fetchUninstalledAssetInformationMatchingAny:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (void)reachabilityChanged;
- (void)registerReachabilityCallback;
- (void)retryDownloadsWhenReachable;
- (BOOL)shouldDownloadUninstalledAssets;
- (void)syncToRemoteMetadataIfNecessary;
- (void)tryDownloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (BOOL)tryToPurgeAsset:(id)arg1;

@end
