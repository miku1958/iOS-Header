//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSTimer;

__attribute__((visibility("hidden")))
@interface BirthdayCalendarManager : NSObject
{
    NSOperationQueue *_queue;
    void *_addressBook;
    BOOL _abSyncActive;
    BOOL _calSyncActive;
    NSTimer *_syncTimer;
    NSTimer *_throttleTimer;
    BOOL _wantsUpdatedWhileThrottled;
    BOOL _running;
    unsigned long long _failedPopulateAttempts;
    BOOL _isPopulatePending;
    unsigned long long _failedAlarmUpdateAttempts;
    BOOL _isAlarmUpdatePending;
}

+ (void)setStateInPrefs:(int)arg1 withLastABSequence:(int)arg2;
- (void).cxx_destruct;
- (void)_killSyncTimer;
- (void)_killThrottleTimer;
- (void)_startThrottleTimer;
- (void)_throttleTimerFired:(id)arg1;
- (void)_updateIfNeeded;
- (void)abSyncDidEnd;
- (void)abSyncDidStart;
- (void)calSyncDidEnd;
- (void)calSyncDidStart;
- (void)dealloc;
- (void)killSyncTimer;
- (void)maybeUpdateAfterSyncEnd;
- (void)populate;
- (void)rebuild;
- (void)resetSyncTimer;
- (void)start;
- (void)stop;
- (void)syncTimerFired:(id)arg1;
- (void)updateAlarms;

@end
