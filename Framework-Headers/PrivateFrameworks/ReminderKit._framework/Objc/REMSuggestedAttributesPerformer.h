//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMStore;
@protocol OS_dispatch_queue, REMXPCSuggestedAttributesPerformer;

@interface REMSuggestedAttributesPerformer : NSObject
{
    REMStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    id<REMXPCSuggestedAttributesPerformer> _q_cachedXPCPerformer;
}

@property (strong, nonatomic) id<REMXPCSuggestedAttributesPerformer> q_cachedXPCPerformer; // @synthesize q_cachedXPCPerformer=_q_cachedXPCPerformer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) REMStore *store; // @synthesize store=_store;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 store:(id)arg2;
- (void)preWarmModels;
- (id)q_resolveSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)q_syncSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id *)arg4;

@end

