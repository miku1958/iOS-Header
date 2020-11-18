//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSDictionary;
@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    MAAsset *_deviceAssetManagement;
    NSDictionary *_productTypesMappingTable;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;

- (void).cxx_destruct;
- (void)activate;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (id)additionalMappedProducts;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)invalidate;
- (id)locallyCachedMappedProductTypeForProductType:(id)arg1;
- (void)onqueue_activate;
- (void)onqueue_downloadAsset:(id)arg1 queryLogString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 queryLogString:(id)arg2 fallback:(BOOL)arg3 retryAttempt:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(BOOL)arg2 fallback:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_invalidate;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_updateMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (id)queryLogStringForQuery:(id)arg1 installedOnly:(BOOL)arg2 fallback:(BOOL)arg3;

@end

