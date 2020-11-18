//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSwimData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMSwimTrackerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    BOOL fStartedUpdates;
    CMSwimData *fMostRecentRecord;
    CDUnknownBlockType fHandler;
    unsigned long long fStrokeCountOffset;
    double fDistanceOffset;
    unsigned long long fLapCountOffset;
    double fActiveTime;
}

- (void)_handleUpdates:(id)arg1;
- (void)_querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

