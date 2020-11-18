//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchShareInfoOperation : CKOperation
{
    NSArray *_shareURLs;
    CDUnknownBlockType _perShareInfoBlock;
    CDUnknownBlockType _fetchShareInfoCompletionBlock;
    NSMutableDictionary *_shareInfoByURL;
    NSMutableDictionary *_errorsByURL;
}

@property (strong, nonatomic) NSMutableDictionary *errorsByURL; // @synthesize errorsByURL=_errorsByURL;
@property (copy, nonatomic) CDUnknownBlockType fetchShareInfoCompletionBlock; // @synthesize fetchShareInfoCompletionBlock=_fetchShareInfoCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType perShareInfoBlock; // @synthesize perShareInfoBlock=_perShareInfoBlock;
@property (strong, nonatomic) NSMutableDictionary *shareInfoByURL; // @synthesize shareInfoByURL=_shareInfoByURL;
@property (strong, nonatomic) NSArray *shareURLs; // @synthesize shareURLs=_shareURLs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithShareURLs:(id)arg1;
- (void)performCKOperation;

@end

