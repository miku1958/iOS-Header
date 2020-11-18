//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableSet;
@protocol MFSQLiteConnectionPoolDelegate, OS_dispatch_semaphore, OS_dispatch_source;

@interface MFSQLiteConnectionPool : NSObject
{
    id<MFSQLiteConnectionPoolDelegate> _delegate;
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    unsigned long long _maxConcurrentBackgroundReaders;
    unsigned long long _maxConcurrentWriters;
    NSLock *_checkoutLock;
    struct __CFDictionary *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_backgroundReaderSemaphore;
    int _backgroundReadersWaiting;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    int _writersWaiting;
    NSObject<OS_dispatch_source> *_terminationTimer;
}

@property (readonly) unsigned long long backgroundReadersWaiting;
@property unsigned long long cacheSize;
@property id<MFSQLiteConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) unsigned long long maxConcurrentBackgroundReaders; // @synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders;
@property (readonly) unsigned long long maxConcurrentWriters;
@property (readonly) unsigned long long writersWaiting;

- (id)_connectionWithType:(unsigned long long)arg1;
- (void)_interruptActiveConnections;
- (id)_semaphoreForConnectionType:(unsigned long long)arg1 waitCounter:(int **)arg2;
- (id)backgroundReaderConnection;
- (void)cancelTerminationTimer;
- (void)checkInConnection:(id)arg1;
- (void)dealloc;
- (void)flush;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (void)interruptConnectionsAfterDelay:(double)arg1;
- (unsigned long long)maxConcurrentReaders;
- (id)readerConnection;
- (id)writerConnection;

@end

