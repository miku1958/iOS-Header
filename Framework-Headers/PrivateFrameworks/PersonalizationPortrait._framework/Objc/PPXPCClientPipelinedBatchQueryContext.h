//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryContext : NSObject
{
    BOOL _stop;
    CDUnknownBlockType _finalizeCall;
    struct atomic_flag _calledFinalizeBlock;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handleBatch;
}

@property (copy, nonatomic) CDUnknownBlockType handleBatch; // @synthesize handleBatch=_handleBatch;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)description;
- (void)finalizeCallWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)setFinalizeCall:(CDUnknownBlockType)arg1;

@end

