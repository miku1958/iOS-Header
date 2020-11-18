//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDOperation, CKUploadRequestConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDRepairAssetsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _assetOrPackageRepairedBlock;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    NSDictionary *_UUIDToAssetOrPackage;
    NSDictionary *_assetOrPackageUUIDToMetadata;
    NSArray *_unavailableAssetsAndPackages;
    CKDOperation *_fetchOperation;
    CKDOperation *_uploadOperation;
    CKDOperation *_updateOperation;
    NSMutableDictionary *_assetOrPackageUUIDToOriginalRecord;
    NSDictionary *_assetOrPackageUUIDToUploadError;
    NSSet *_uploadedAssetOrPackageUUIDs;
}

@property (strong, nonatomic) NSDictionary *UUIDToAssetOrPackage; // @synthesize UUIDToAssetOrPackage=_UUIDToAssetOrPackage;
@property (copy, nonatomic) CDUnknownBlockType assetOrPackageRepairedBlock; // @synthesize assetOrPackageRepairedBlock=_assetOrPackageRepairedBlock;
@property (strong, nonatomic) NSDictionary *assetOrPackageUUIDToMetadata; // @synthesize assetOrPackageUUIDToMetadata=_assetOrPackageUUIDToMetadata;
@property (strong, nonatomic) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord; // @synthesize assetOrPackageUUIDToOriginalRecord=_assetOrPackageUUIDToOriginalRecord;
@property (strong, nonatomic) NSDictionary *assetOrPackageUUIDToUploadError; // @synthesize assetOrPackageUUIDToUploadError=_assetOrPackageUUIDToUploadError;
@property (strong, nonatomic) CKDOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property (strong, nonatomic) NSArray *unavailableAssetsAndPackages; // @synthesize unavailableAssetsAndPackages=_unavailableAssetsAndPackages;
@property (strong, nonatomic) CKDOperation *updateOperation; // @synthesize updateOperation=_updateOperation;
@property (strong, nonatomic) CKDOperation *uploadOperation; // @synthesize uploadOperation=_uploadOperation;
@property (strong, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;
@property (strong, nonatomic) NSSet *uploadedAssetOrPackageUUIDs; // @synthesize uploadedAssetOrPackageUUIDs=_uploadedAssetOrPackageUUIDs;

- (void).cxx_destruct;
- (void)_fetchAssetMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_updateMissingAssetServerStatus;
- (void)_uploadAssetsModify;
- (id)activityCreate;
- (id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)repairContext;

@end
