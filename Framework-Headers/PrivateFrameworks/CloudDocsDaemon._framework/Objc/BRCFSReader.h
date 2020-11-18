//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCFSEventsDelegate-Protocol.h>
#import <CloudDocsDaemon/BRCFileCoordinationReading-Protocol.h>
#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCCountedSet, BRCMinHeap, BRCRelativePath, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCFSEventsDelegate, BRCFileCoordinationReading>
{
    BRCCountedSet *_coordinatedReaders;
    BOOL _readerCountReachedMax;
    BRCRelativePath *_currentScan;
    BRCMinHeap *_lostHeap;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    NSObject<OS_dispatch_source> *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    BOOL _resumed;
    NSObject<OS_dispatch_group> *_lostScanGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *lostScanGroup; // @synthesize lostScanGroup=_lostScanGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_cancelScan;
- (void)_close;
- (void)_continueScan:(id)arg1;
- (void)_createOrRetryThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 throttle:(id)arg4 hasBeenTried:(BOOL)arg5;
- (void)_delayThrottleID:(long long)arg1 zone:(id)arg2 by:(double)arg3;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 item:(id)arg3 lookup:(id)arg4;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 item:(id)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)_lostScanSchedule;
- (void)_processDeadItem:(id)arg1;
- (void)_processLostItem:(id)arg1;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (unsigned long long)_readCoordinationCount;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_schedule;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (BOOL)_scheduleOne:(id)arg1;
- (void)_slowScanDirectoryAtPath:(id)arg1;
- (void)_startScan:(id)arg1;
- (void)cancel;
- (void)createThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)dealloc;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
- (void)endReadCoordinationInZone:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventInsideSharedEnclosure:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnSharedRoot:(id)arg1 flags:(unsigned int)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 container:(id)arg2 path:(id)arg3;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (BOOL)readUnderCoordinationWithLookup:(id)arg1;
- (void)reset;
- (void)resume;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (BOOL)startReadCoordinationInZone:(id)arg1;
- (void)suspend;
- (BOOL)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (void)unscheduleContainerForLostScan:(id)arg1;

@end
