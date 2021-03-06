//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKRepairAssetsOperationCallbacks-Protocol.h>

@class CKRepairAssetsOperationInfo, CKUploadRequestConfiguration, NSArray, NSMutableDictionary;
@protocol CKRepairAssetsOperationCallbacks;

@interface CKRepairAssetsOperation : CKDatabaseOperation <CKRepairAssetsOperationCallbacks>
{
    CDUnknownBlockType _repairAssetsCompletionBlock;
    NSArray *_assets;
    NSArray *_packages;
    NSArray *_assetMetadata;
    NSArray *_packageMetadata;
    NSArray *_unavailableAssets;
    NSArray *_unavailablePackages;
    NSMutableDictionary *_perItemErrorsByRecordID;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
}

@property (strong, nonatomic) NSArray *assetMetadata; // @synthesize assetMetadata=_assetMetadata;
@property (strong, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, nonatomic) id<CKRepairAssetsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairAssetsOperationInfo *operationInfo; // @dynamic operationInfo;
@property (strong, nonatomic) NSArray *packageMetadata; // @synthesize packageMetadata=_packageMetadata;
@property (strong, nonatomic) NSArray *packages; // @synthesize packages=_packages;
@property (strong, nonatomic) NSMutableDictionary *perItemErrorsByRecordID; // @synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID;
@property (copy, nonatomic) CDUnknownBlockType repairAssetsCompletionBlock; // @synthesize repairAssetsCompletionBlock=_repairAssetsCompletionBlock;
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (strong, nonatomic) NSArray *unavailableAssets; // @synthesize unavailableAssets=_unavailableAssets;
@property (strong, nonatomic) NSArray *unavailablePackages; // @synthesize unavailablePackages=_unavailablePackages;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleAssetRepairCompletionForRecordID:(id)arg1 error:(id)arg2;
- (BOOL)hasCKOperationCallbacksSet;
- (id)includedMetadata;
- (id)initWithAssets:(id)arg1 packages:(id)arg2 assetMetadata:(id)arg3 packageMetadata:(id)arg4 unavailableAssets:(id)arg5 unavailablePackages:(id)arg6;
- (void)performCKOperation;

@end

