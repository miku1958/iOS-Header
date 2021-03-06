//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDReplayStorageController, IMDReplayStorageIterationContext, NSDictionary;

@interface IMDReplayController : NSObject
{
    IMDReplayStorageController *_suspendedStorageController;
    BOOL _isRecordingReplayDB;
    NSDictionary *_syncTaskByServiceName;
    IMDReplayStorageIterationContext *_heldDeletionContext;
    CDUnknownBlockType _automationCompletionBlock;
    IMDReplayStorageController *_storageController;
}

@property (copy, nonatomic) CDUnknownBlockType automationCompletionBlock; // @synthesize automationCompletionBlock=_automationCompletionBlock;
@property (strong, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext; // @synthesize heldDeletionContext=_heldDeletionContext;
@property (readonly, nonatomic) BOOL isRecordingReplayDB; // @synthesize isRecordingReplayDB=_isRecordingReplayDB;
@property (strong, nonatomic) IMDReplayStorageController *storageController; // @synthesize storageController=_storageController;
@property (strong, nonatomic) NSDictionary *syncTaskByServiceName; // @synthesize syncTaskByServiceName=_syncTaskByServiceName;

+ (long long)batchSize;
+ (id)sharedInstance;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)_processBatch:(id)arg1;
- (void)dealloc;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)endRecordingReplayDatabase;
- (id)init;
- (id)initWithStorageController:(id)arg1;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)arg1;
- (void)replayMessages;
- (void)replayMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreDefaultStoreControllerInstance;
- (void)scheduleSyncTaskForServices:(id)arg1;
- (void)startRecordingReplayDatabase;
- (BOOL)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;

@end

