//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCAccountSession, BRCFSEventsPersistedState, BRCFairSource, BRCRelativePath, BRCVolume, NSMutableArray, NSString, PQLConnection;
@protocol BRCFSEventsDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable>
{
    BRCAccountSession *_session;
    NSString *_name;
    _Atomic int _suspendCount;
    _Atomic int _resetCount;
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    NSObject<OS_dispatch_queue> *_processQueue;
    BRCFairSource *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    unsigned long long _maxFSEventQueueSize;
    unsigned long long _fseventProcessBatchSize;
    BOOL _hasMarkSelf;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _drainEvents;
    BRCVolume *_volume;
    BOOL _isCancelled;
    BRCRelativePath *_root;
    id<BRCFSEventsDelegate> _delegate;
    PQLConnection *_db;
}

@property (strong, nonatomic, setter=setDB:) PQLConnection *db; // @synthesize db=_db;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<BRCFSEventsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) BRCRelativePath *root; // @synthesize root=_root;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL volumeIsCaseSensitive;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_close;
- (BOOL)_queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2;
- (void)_updatePersistedStateWithState:(id)arg1;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)flushStream;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(BOOL)arg6;
- (void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)initWithAccountSession:(id)arg1 name:(id)arg2;
- (BOOL)openWithRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id *)arg4;
- (BOOL)openWithRoot:(id)arg1 volume:(id)arg2 error:(id *)arg3;
- (void)processFseventBatch;
- (void)queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2;
- (void)resetWithReason:(id)arg1;
- (void)resume;
- (BOOL)setUpRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id *)arg4;
- (BOOL)setUpStreamSynchronously:(BOOL)arg1 reason:(id)arg2 error:(id *)arg3;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (void)stopWatcher;
- (void)suspend;

@end

