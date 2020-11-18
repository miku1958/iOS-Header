//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;

__attribute__((visibility("hidden")))
@interface CKDPublishAssetsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _assetPublishedBlock;
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
}

@property (nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property (copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
@property (strong) NSOperation *fetchRecordsOperation; // @synthesize fetchRecordsOperation=_fetchRecordsOperation;
@property (strong, nonatomic) NSMutableDictionary *fetchedRecordsByID; // @synthesize fetchedRecordsByID=_fetchedRecordsByID;
@property (strong, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property (strong, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;

- (void).cxx_destruct;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection *)arg3 error:(id)arg4;
- (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)cancel;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end

