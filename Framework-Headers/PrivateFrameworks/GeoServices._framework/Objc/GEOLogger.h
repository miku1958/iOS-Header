//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOLogContext, NSHashTable, NSLock;
@protocol OS_dispatch_queue;

@interface GEOLogger : NSObject
{
    GEOLogContext *_cachedLogContext;
    NSHashTable *_logContextDelegates;
    NSLock *_logContextDelegatesLock;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    void *_loggerQueueIdentityKey;
    void *_loggerQueueIdentityValue;
}

+ (void)registerGEOLogFacility;
+ (id)sharedLogger;
- (void)_captureLogMsgEvent:(id)arg1 withMergedContext:(id)arg2;
- (id)cachedStateOfType:(int)arg1;
- (void)captureLogMsgEvent:(id)arg1;
- (void)captureLogMsgEvent:(id)arg1 withLogContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)registerLogContextDelegate:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerLogMsgStatesInContext:(id)arg1;
- (id)sharedLogManagerInstance;
- (id)sharedLogMessageFactoryInstance;
- (void)unregisterAllLogContextDelegates;
- (void)unregisterLogContextDelegate:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)updateLogMsgStatesFromCachedContextInLogMessage:(id)arg1;

@end
