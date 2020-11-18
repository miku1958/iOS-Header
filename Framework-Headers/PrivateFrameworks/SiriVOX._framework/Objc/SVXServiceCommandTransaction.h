//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet;
@protocol SAAceCommand, SVXPerforming, SVXTaskTracking;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandTransaction : NSObject
{
    id<SVXPerforming> _performer;
    long long _state;
    NSMutableDictionary *_preparedResultsByHandlerIdentifier;
    NSMutableDictionary *_preparedContextsByHandlerIdentifier;
    NSMutableDictionary *_handledResultsByHandlerIdentifier;
    AceObject<SAAceCommand> *_command;
    NSArray *_handlers;
    id<SVXTaskTracking> _taskTracker;
    CDUnknownBlockType _completion;
    NSMutableSet *_blockingTransactions;
    NSHashTable *_blockedTransactions;
}

- (void).cxx_destruct;
- (void)_addBlockedTransaction:(id)arg1;
- (void)_didHandleAll;
- (void)_didPrepareAll;
- (void)_dispatchCompletionWithResult:(id)arg1;
- (void)_handle;
- (void)_handler:(id)arg1 didHandleWithResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handler:(id)arg1 didPrepareSuccessfully:(BOOL)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_invalidate;
- (void)_prepare;
- (void)_removeBlockingTransaction:(id)arg1;
- (void)_unblockDependentTransactions;
- (void)addBlockedTransaction:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handler:(id)arg1 didHandleWithResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handler:(id)arg1 didPrepareSuccessfully:(BOOL)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPerformer:(id)arg1 command:(id)arg2 handlers:(id)arg3 taskTracker:(id)arg4 dependencies:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)invalidate;
- (void)removeBlockingTransaction:(id)arg1;

@end
