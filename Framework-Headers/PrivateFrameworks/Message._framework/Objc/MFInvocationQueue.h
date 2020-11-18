//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator>
{
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _numThreads;
    unsigned long long _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
    struct __CFDictionary *_lowPriorityThreads;
    BOOL _isForeground;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long invocationCount;
@property (nonatomic) unsigned long long maxThreadCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long threadCount; // @synthesize threadCount=_numThreads;
@property (nonatomic) int threadPriorityTrigger; // @synthesize threadPriorityTrigger=_threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout; // @synthesize threadRecycleTimeout=_threadRecycleTimeout;

+ (void)flushAllInvocationQueues;
+ (id)sharedInvocationQueue;
+ (unsigned long long)totalInvocationCount;
- (void)_adjustThreadPrioritiesIsForeground:(BOOL)arg1;
- (void)_drainQueue:(id)arg1;
- (void)_processInvocation:(id)arg1;
- (void)addInvocation:(id)arg1;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)didCancel:(id)arg1;
- (id)init;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;
- (void)removeAllItems;

@end

