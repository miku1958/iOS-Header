//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareMetadataOperation : CKOperation
{
    BOOL _shouldFetchRootRecord;
    CDUnknownBlockType _perShareMetadataBlock;
    CDUnknownBlockType _fetchShareMetadataCompletionBlock;
    NSArray *_shareURLs;
    NSArray *_rootRecordDesiredKeys;
    NSMutableDictionary *_errorsByURL;
    NSMutableSet *_packagesToDestroy;
}

@property (strong, nonatomic) NSMutableDictionary *errorsByURL; // @synthesize errorsByURL=_errorsByURL;
@property (copy, nonatomic) CDUnknownBlockType fetchShareMetadataCompletionBlock; // @synthesize fetchShareMetadataCompletionBlock=_fetchShareMetadataCompletionBlock;
@property (strong, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property (copy, nonatomic) CDUnknownBlockType perShareMetadataBlock; // @synthesize perShareMetadataBlock=_perShareMetadataBlock;
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property (copy, nonatomic) NSArray *shareURLs; // @synthesize shareURLs=_shareURLs;
@property (nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (BOOL)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareURLs:(id)arg1;
- (void)performCKOperation;

@end

