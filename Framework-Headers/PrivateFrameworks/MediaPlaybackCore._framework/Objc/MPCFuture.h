//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MPCFuture : NSObject
{
    BOOL _finalized;
    BOOL _invalid;
    id _result;
    NSError *_error;
    NSString *_debugLabel;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_successBlocks;
    NSMutableArray *_failureBlocks;
    NSMutableArray *_completionBlocks;
    NSMapTable *_invalidBlocks;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel=_debugLabel;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSMutableArray *failureBlocks; // @synthesize failureBlocks=_failureBlocks;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized; // @synthesize finalized=_finalized;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
@property (readonly, nonatomic) NSMapTable *invalidBlocks; // @synthesize invalidBlocks=_invalidBlocks;
@property (readonly, nonatomic) id result; // @synthesize result=_result;
@property (readonly, nonatomic) NSMutableArray *successBlocks; // @synthesize successBlocks=_successBlocks;

- (void).cxx_destruct;
- (void)_onQueue_finalize;
- (void)dealloc;
- (id)description;
- (void)finishWithError:(id)arg1;
- (void)finishWithValue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id)onCompletion:(CDUnknownBlockType)arg1;
- (id)onFailure:(CDUnknownBlockType)arg1;
- (id)onInvalid:(CDUnknownBlockType)arg1;
- (id)onSuccess:(CDUnknownBlockType)arg1;

@end
