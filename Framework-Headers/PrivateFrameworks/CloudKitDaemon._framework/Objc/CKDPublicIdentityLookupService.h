//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, CKDKeyValueDiskCache, CKDOperation, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupService : NSObject
{
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_source> *_lookupSource;
    NSObject<OS_dispatch_queue> *_queue;
    CKDKeyValueDiskCache *_cache;
    CKDOperation *_operationToUseForSettingUpThelookup;
    CKDClientContext *_context;
}

@property (weak, nonatomic) CKDClientContext *context; // @synthesize context=_context;

- (void).cxx_destruct;
- (void)_fetchEmails;
- (void)_finishCompletedRequests;
- (void)_finishPendingRequestsWithError:(id)arg1;
- (void)_saveAndFinishRequestsWithPublicIdentify:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (void)scheduleRequest:(id)arg1 forOperation:(id)arg2;

@end
