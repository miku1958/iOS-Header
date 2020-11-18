//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject
{
    NSMutableDictionary *_progressCallbacks;
    NSMutableDictionary *_statisticsCallbacks;
    NSMutableDictionary *_commandCallbacks;
    NSMutableDictionary *_completionCallbacks;
    NSMutableDictionary *_checkpointCallbacks;
    NSMapTable *_operationsByID;
}

@property (strong) NSMutableDictionary *checkpointCallbacks; // @synthesize checkpointCallbacks=_checkpointCallbacks;
@property (strong) NSMutableDictionary *commandCallbacks; // @synthesize commandCallbacks=_commandCallbacks;
@property (strong) NSMutableDictionary *completionCallbacks; // @synthesize completionCallbacks=_completionCallbacks;
@property (strong) NSMapTable *operationsByID; // @synthesize operationsByID=_operationsByID;
@property (strong) NSMutableDictionary *progressCallbacks; // @synthesize progressCallbacks=_progressCallbacks;
@property (strong) NSMutableDictionary *statisticsCallbacks; // @synthesize statisticsCallbacks=_statisticsCallbacks;

- (void).cxx_destruct;
- (void)_performCallbackForOperation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (id)init;
- (void)registerCheckpointCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCommandCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCompletionCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerStatisticsCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)removeAllCallbacks;
- (void)unregisterAllCallbacksForOperation:(id)arg1;

@end

