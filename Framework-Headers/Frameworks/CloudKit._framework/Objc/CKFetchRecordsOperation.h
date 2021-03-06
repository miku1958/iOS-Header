//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKFetchRecordsOperationCallbacks-Protocol.h>
#import <CloudKit/CKOperationInMemoryAssets-Protocol.h>

@class CKFetchRecordsOperationInfo, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol CKFetchRecordsOperationCallbacks;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets>
{
    BOOL _isFetchCurrentUserOperation;
    BOOL _shouldFetchAssetContent;
    BOOL _shouldFetchAssetContentInMemory;
    BOOL _dropInMemoryAssetContentASAP;
    NSMutableDictionary *_assetInfoByArrayIndexByRecordKeyByRecordID;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSMutableSet *_packagesToDestroy;
    NSMutableDictionary *_recordErrors;
    NSDictionary *_webSharingIdentityDataByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSMutableDictionary *_recordIDsToRecords;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
}

@property (strong, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // @synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (readonly, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property (nonatomic) BOOL dropInMemoryAssetContentASAP; // @synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property (nonatomic) BOOL isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
@property (readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo; // @dynamic operationInfo;
@property (strong, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property (strong, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property (copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (copy, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property (strong, nonatomic) NSMutableDictionary *recordIDsToRecords; // @synthesize recordIDsToRecords=_recordIDsToRecords;
@property (copy, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (strong, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (id)fetchCurrentUserRecordOperation;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (BOOL)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5;
- (void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2;
- (void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordIDs:(id)arg1;
- (void)performCKOperation;

@end

