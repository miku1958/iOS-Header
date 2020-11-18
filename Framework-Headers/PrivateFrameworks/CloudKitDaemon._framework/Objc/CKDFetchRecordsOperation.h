//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, CKDRecordCache, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordsOperation : CKDDatabaseOperation
{
    CKDDecryptRecordsOperation *_decryptOperation;
    BOOL _useCachedEtags;
    BOOL _useRecordCache;
    BOOL _forcePCSDecrypt;
    BOOL _shouldFetchAssetContent;
    BOOL _shouldFetchAssetContentInMemory;
    NSArray *_fullRecordsToFetch;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    CDUnknownBlockType _recordFetchCompletionBlock;
    NSArray *_recordIDsToFetch;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSMutableDictionary *_errorsByRecordID;
    NSMapTable *_downloadTasksByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    CKDRecordCache *_cache;
    NSMutableArray *_recordIDsToRefetch;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property (strong, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (strong, nonatomic) CKDRecordCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSMutableDictionary *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property (strong, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property (strong, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property (strong, nonatomic) NSMapTable *downloadTasksByRecordID; // @synthesize downloadTasksByRecordID=_downloadTasksByRecordID;
@property (strong, nonatomic) NSMutableDictionary *errorsByRecordID; // @synthesize errorsByRecordID=_errorsByRecordID;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property (nonatomic) BOOL forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
@property (strong, nonatomic) NSArray *fullRecordsToFetch; // @synthesize fullRecordsToFetch=_fullRecordsToFetch;
@property (readonly, nonatomic) BOOL hasRecordDecryptOperation;
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property (strong, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property (strong, nonatomic) NSArray *recordIDsToFetch; // @synthesize recordIDsToFetch=_recordIDsToFetch;
@property (strong, nonatomic) NSMutableArray *recordIDsToRefetch; // @synthesize recordIDsToRefetch=_recordIDsToRefetch;
@property (strong, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL useCachedEtags; // @synthesize useCachedEtags=_useCachedEtags;
@property (nonatomic) BOOL useRecordCache; // @synthesize useRecordCache=_useRecordCache;
@property (strong, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_continueHandleFetchedRecord:(id)arg1 recordID:(id)arg2;
- (void)_decryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2;
- (void)_didDownloadAssetsWithError:(id)arg1;
- (void)_downloadAssets;
- (void)_findSpecialParticipantsOnShare:(id)arg1 identityDelegate:(id)arg2;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(BOOL)arg3 responseCode:(id)arg4;
- (BOOL)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 assetTransferOptions:(id)arg4;
- (id)activityCreate;
- (id)errorForRecordID:(id)arg1;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setError:(id)arg1 forRecordID:(id)arg2;

@end
