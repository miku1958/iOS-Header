//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineWriteTransactionBlocker, CPLTransaction, NSError, NSMutableArray, NSString, NSThread;

@interface CPLEngineStoreTransaction : NSObject
{
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
    NSError *_error;
    NSString *_name;
    CPLEngineWriteTransactionBlocker *_blocker;
}

@property (strong, nonatomic) CPLEngineWriteTransactionBlocker *blocker; // @synthesize blocker=_blocker;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (BOOL)_forWrite;
- (void)_releaseDirty;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (void)addCleanupBlock:(CDUnknownBlockType)arg1;
- (BOOL)canRead;
- (BOOL)canWrite;
- (void)dealloc;
- (id)description;
- (BOOL)do:(CDUnknownBlockType)arg1;
- (id)initForWrite:(BOOL)arg1 identifier:(id)arg2 description:(id)arg3;
- (id)redactedDescription;

@end

