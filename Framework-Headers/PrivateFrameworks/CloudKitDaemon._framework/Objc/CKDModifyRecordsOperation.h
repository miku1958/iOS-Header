//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, CKDProtocolTranslator, CKDRecordCache, NSArray, NSData, NSDictionary, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordsOperation : CKDDatabaseOperation
{
    CKDProtocolTranslator *_translator;
    CKDDecryptRecordsOperation *_decryptOperation;
    BOOL _retryPCSFailures;
    BOOL _canSetPreviousProtectionEtag;
    BOOL _trustProtectionData;
    BOOL _retriedRecords;
    BOOL _shouldOnlySaveAssetContent;
    BOOL _haveOutstandingHandlers;
    BOOL _atomic;
    BOOL _shouldReportRecordsInFlight;
    int _saveAttempts;
    NSData *_cachedUserBoundaryKeyData;
    CDUnknownBlockType _saveProgressBlock;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    CDUnknownBlockType _recordsInFlightBlock;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSDictionary *_handlersByRecordID;
    NSDictionary *_parentsByRecordID;
    NSMapTable *_handlersByAsset;
    NSMutableDictionary *_modifyHandlersByZoneID;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    CKDRecordCache *_cache;
    NSObject<OS_dispatch_queue> *_modifyRecordsQueue;
}

@property (nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property (strong, nonatomic) CKDRecordCache *cache; // @synthesize cache=_cache;
@property (copy, nonatomic) NSData *cachedUserBoundaryKeyData; // @synthesize cachedUserBoundaryKeyData=_cachedUserBoundaryKeyData;
@property (nonatomic) BOOL canSetPreviousProtectionEtag; // @synthesize canSetPreviousProtectionEtag=_canSetPreviousProtectionEtag;
@property (copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property (strong, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property (strong, nonatomic) NSMapTable *handlersByAsset; // @synthesize handlersByAsset=_handlersByAsset;
@property (strong, nonatomic) NSDictionary *handlersByRecordID; // @synthesize handlersByRecordID=_handlersByRecordID;
@property (readonly, nonatomic) BOOL hasDecryptOperation;
@property (nonatomic) BOOL haveOutstandingHandlers; // @synthesize haveOutstandingHandlers=_haveOutstandingHandlers;
@property (strong, nonatomic) NSMutableDictionary *modifyHandlersByZoneID; // @synthesize modifyHandlersByZoneID=_modifyHandlersByZoneID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *modifyRecordsQueue; // @synthesize modifyRecordsQueue=_modifyRecordsQueue;
@property (strong, nonatomic) NSDictionary *parentsByRecordID; // @synthesize parentsByRecordID=_parentsByRecordID;
@property (strong, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (strong, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property (strong, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property (copy, nonatomic) CDUnknownBlockType recordsInFlightBlock; // @synthesize recordsInFlightBlock=_recordsInFlightBlock;
@property (strong, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property (nonatomic) BOOL retriedRecords; // @synthesize retriedRecords=_retriedRecords;
@property (nonatomic) BOOL retryPCSFailures; // @synthesize retryPCSFailures=_retryPCSFailures;
@property (nonatomic) int saveAttempts; // @synthesize saveAttempts=_saveAttempts;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
@property (nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property (copy, nonatomic) CDUnknownBlockType saveProgressBlock; // @synthesize saveProgressBlock=_saveProgressBlock;
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property (nonatomic) BOOL shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property (readonly, nonatomic) CKDProtocolTranslator *translator;
@property (nonatomic) BOOL trustProtectionData; // @synthesize trustProtectionData=_trustProtectionData;
@property (copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;

+ (BOOL)_claimPackagesInRecord:(id)arg1 error:(id *)arg2;
+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
- (void)_applySideEffects;
- (void)_clearProtectionDataIfNotEntitled;
- (id)_containerIDsNotToTopoSort;
- (void)_continueRecordsModify;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 handlersByRecordID:(id)arg4;
- (void)_determineEnvironment;
- (void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_fetchContainerScopedUserID;
- (void)_fetchRecordPCSData;
- (void)_fetchSharePCSData;
- (void)_fetchShareParticipants;
- (void)_fetchUserBoundaryKey;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (BOOL)_hasHandlerInState:(unsigned long long)arg1;
- (void)_markRecordHandlersAsUploaded;
- (void)_performCallbacksForAtomicZoneHandlers:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1;
- (void)_performHandlerCallbacks;
- (id)_prepareAssetsForUpload;
- (void)_prepareForUpload;
- (void)_prepareParentPCS;
- (BOOL)_prepareRecordsForSave;
- (void)_reallyHandleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 decryptedServerRecord:(id)arg8;
- (void)_reportRecordsInFlight;
- (void)_setBoundaryKeyOnAssetsToUpload:(id)arg1;
- (BOOL)_shouldToposortInContainerID:(id)arg1;
- (BOOL)_topoSortRecords;
- (id)_topoSortRecordsForHandlers:(id)arg1;
- (void)_uploadAssets;
- (void)_verifyRecordEncryption;
- (id)activityCreate;
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;
- (void)deleteCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2;

@end
