//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKFetchUserQuotaOperationCallbacks-Protocol.h>

@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks>
{
    CDUnknownBlockType _fetchUserQuotaCompletionBlock;
    unsigned long long _quotaAvailable;
}

@property (readonly, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (copy, nonatomic) CDUnknownBlockType fetchUserQuotaCompletionBlock; // @synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock;
@property (nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (void)performCKOperation;

@end
