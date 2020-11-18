//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

__attribute__((visibility("hidden")))
@interface CKFetchServerEnvironmentOperation : CKOperation
{
    long long _environment;
    CDUnknownBlockType _fetchServerEnvironmentCompletionBlock;
}

@property (nonatomic) long long environment; // @synthesize environment=_environment;
@property (copy, nonatomic) CDUnknownBlockType fetchServerEnvironmentCompletionBlock; // @synthesize fetchServerEnvironmentCompletionBlock=_fetchServerEnvironmentCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;

@end

