//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDModifySharesOperation : CKDDatabaseOperation
{
    BOOL _haveOutstandingMetadatas;
    int _numShareSaveAttempts;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSMutableArray *_shareMetadatas;
}

@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property (nonatomic) BOOL haveOutstandingMetadatas; // @synthesize haveOutstandingMetadatas=_haveOutstandingMetadatas;
@property (nonatomic) int numShareSaveAttempts; // @synthesize numShareSaveAttempts=_numShareSaveAttempts;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
@property (strong, nonatomic) NSMutableArray *shareMetadatas; // @synthesize shareMetadatas=_shareMetadatas;

- (void).cxx_destruct;
- (void)_addOwnerToShares;
- (void)_callbackForMetadata:(id)arg1;
- (BOOL)_cleanPublicPCSforShare:(id)arg1 withError:(id *)arg2;
- (id)_createNewPCSDataForShare:(id)arg1 error:(id *)arg2;
- (BOOL)_decryptPCSDataForMetadata:(id)arg1;
- (void)_determineEnvironment;
- (void)_fetchPCSDataForDeletingMetadata:(id)arg1;
- (void)_fetchPCSDataForMetadata:(id)arg1;
- (void)_fetchPCSDataForShares;
- (void)_fetchParticipantsForShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handlePCSData:(id)arg1 forDeletingMetadata:(id)arg2 withError:(id)arg3;
- (void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (void)_handleShareDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleShareFetched:(id)arg1 forMetadata:(id)arg2 error:(id)arg3;
- (void)_handleShareSaved:(id)arg1 forMetadata:(id)arg2 responseCode:(id)arg3;
- (id)_ownerUserIdentity;
- (BOOL)_performMetadataCallbacks;
- (void)_preparePCSDataForShares;
- (BOOL)_removeSelfFromPublicPCSForShareInfo:(id)arg1 error:(id *)arg2;
- (void)_saveSharesToServer;
- (BOOL)_serializePCSDataForShare:(id)arg1 error:(id *)arg2;
- (BOOL)_serializePublicPCSForShareInfo:(id)arg1 error:(id *)arg2;
- (BOOL)_updateSharePublicPCS:(id)arg1 error:(id *)arg2;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end
