//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSQLite.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSObject<OS_dispatch_queue> *_cacheDelegateQueue;
    NSMapTable *_delegatesByOperationID;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue; // @synthesize cacheDelegateQueue=_cacheDelegateQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property (strong, nonatomic) NSMapTable *delegatesByOperationID; // @synthesize delegatesByOperationID=_delegatesByOperationID;

+ (id)dbFileName;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_lockedResultForOperationWithID:(id)arg1;
- (void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3;
- (void)_lockedSetOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_locked_operationInfoForID:(id)arg1;
- (id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1;
- (void)deleteAllInfoForOperationWithID:(id)arg1;
- (void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(BOOL)arg2;
- (id)init;
- (id)operationInfoMetadataForOperationWithID:(id)arg1;
- (id)outstandingOperationInfosForIDs:(id)arg1;
- (void)registerAttemptForOperationWithID:(id)arg1;
- (void)registerCacheEvictionActivity;
- (void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (void)registerOperationAndSetResult:(id)arg1 forOperationInfo:(id)arg2 appContainerTuple:(id)arg3;
- (id)resultForOperationWithID:(id)arg1;
- (id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1;
- (void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3;
- (void)setOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2;
- (void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2;

@end

