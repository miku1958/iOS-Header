//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>

@class GEOLogContext, NSHashTable, NSLock, NSString;

@interface GEOLogger : NSObject <GEOExperimentConfigurationObserver>
{
    GEOLogContext *_cachedLogContext;
    NSHashTable *_logContextDelegates;
    NSLock *_logContextDelegatesLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)executeLoggerBlock:(CDUnknownBlockType)arg1;
+ (id)loggerQueue;
+ (id)sharedLogger;
- (void).cxx_destruct;
- (id)_cachedStateOfType:(int)arg1;
- (void)_captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 withMergedContext:(id)arg3;
- (void)_generateAndQueueLogMessagesForLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 currentContext:(id)arg3;
- (void)cachedStateOfType:(int)arg1 getCachedStateOfTypeBlock:(CDUnknownBlockType)arg2;
- (void)captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2;
- (void)captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 withLogContext:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)registerLogContextDelegate:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerLogMsgStatesInContext:(id)arg1;
- (id)sharedLogManagerInstance;
- (void)unregisterAllLogContextDelegates;
- (void)unregisterLogContextDelegate:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;

@end

