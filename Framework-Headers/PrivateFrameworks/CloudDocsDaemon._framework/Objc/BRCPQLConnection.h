//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <prequelite/PQLConnection.h>

@class br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    BOOL _flushImmediately;
}

@property (copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;
@property (nonatomic) BOOL profilingEnabled;

- (void).cxx_destruct;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id)arg1;
- (void)_setLockedHandler;
- (BOOL)_shouldFlushWithChangeCount:(int)arg1;
- (BOOL)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;
- (void)autovacuumIfNeeded;
- (void)brc_close;
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;
- (BOOL)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;
- (BOOL)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (id)init;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(id)arg2;
- (BOOL)needsAutovacuum;
- (BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (void)setProfilingHook:(CDUnknownBlockType)arg1;
- (long long)sizeInBytes;
- (void)usePacedBatchingWithInterval:(double)arg1 changeCount:(int)arg2;

@end

