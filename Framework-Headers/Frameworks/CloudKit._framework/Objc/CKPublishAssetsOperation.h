//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation
{
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    CDUnknownBlockType _assetPublishedBlock;
    CDUnknownBlockType _publishAssetCompletionBlock;
    NSArray *_recordIDs;
}

@property (nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property (copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
@property (strong, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property (copy, nonatomic) CDUnknownBlockType publishAssetCompletionBlock; // @synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock;
@property (strong, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordIDs:(id)arg1;
- (void)performCKOperation;

@end

