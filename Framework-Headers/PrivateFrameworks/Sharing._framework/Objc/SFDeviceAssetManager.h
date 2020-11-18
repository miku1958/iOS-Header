//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUReachabilityMonitor, MAAsset, NSDictionary, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    MAAsset *_deviceAssetManagement;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSDictionary *_productTypesMappingTable;
    NSURL *_cacheDirectory;
    NSDictionary *_cachedProductMappings;
    NSMutableDictionary *_cachedQueryPaths;
    BOOL _useProcessLocalCache;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_networkStatus;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, nonatomic) NSString *networkStatus; // @synthesize networkStatus=_networkStatus;
@property (nonatomic) BOOL useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;

- (void).cxx_destruct;
- (void)activate;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (void)addQueryResultToLocalCache:(id)arg1 url:(id)arg2 isFallback:(BOOL)arg3;
- (id)cacheDirectory;
- (BOOL)canUseMobileAssetSPI;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)hardcodedMappedProducts;
- (id)init;
- (void)invalidate;
- (id)locallyCachedProductMappings;
- (id)locallyCachedQueryResults;
- (void)logNetworkStatus;
- (void)mappedProductTypeForProductType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_activate;
- (void)onqueue_downloadAsset:(id)arg1 ucat:(struct LogCategory *)arg2 queryLogString:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 ucat:(struct LogCategory *)arg2 queryType:(id)arg3 fallback:(BOOL)arg4 retryAttempt:(BOOL)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(BOOL)arg2 fallback:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_getCachedAssetBundleForTask:(id)arg1;
- (void)onqueue_invalidate;
- (void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (id)onqueue_updateMappedProductTypeForProductType:(id)arg1;
- (void)onqueue_updateMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (id)queryTypeForInstalledOnly:(BOOL)arg1 fallback:(BOOL)arg2;
- (void)storeProductMappingsInLocalCache:(id)arg1;
- (void)storeQueryResultsInLocalCache:(id)arg1;

@end

