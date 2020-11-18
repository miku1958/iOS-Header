//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, NSString, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    brc_task_tracker *_taskTracker;
    BOOL _isCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;

+ (BOOL)_isPathMatchIdle:(const CDStruct_177058d5 *)arg1;
- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (id)_generateGentleBounceForPathMatch:(const CDStruct_177058d5 *)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long *)arg3;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(BOOL *)arg6;
- (id)bouncePath:(id)arg1 toPreservePathMatch:(id)arg2;
- (BOOL)bouncePathMatch:(const CDStruct_177058d5 *)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;

@end

