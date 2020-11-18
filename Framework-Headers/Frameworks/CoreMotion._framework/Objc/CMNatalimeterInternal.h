//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMNatalimeterInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    BOOL fStartedUpdates;
    BOOL fResendActivityOverrideOnInterrupt;
    long long fActivityOverride;
    CDUnknownBlockType fHandler;
}

- (id)_getExecutablePathFromPid:(int)arg1;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)_promptsNeeded;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_setSession:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_startWatchdogCheckins;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

