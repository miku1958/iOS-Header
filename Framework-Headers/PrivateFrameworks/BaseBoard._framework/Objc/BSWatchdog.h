//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSTimer, NSDate;
@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

@interface BSWatchdog : NSObject
{
    id<BSWatchdogDelegate> _delegate;
    id<BSWatchdogProviding> _provider;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    BSTimer *_timer;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    BOOL _invalidated;
    BOOL _completed;
    BOOL _hasFired;
}

@property (strong, nonatomic) id<BSWatchdogDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic, getter=hasFired) BOOL fired; // @synthesize fired=_hasFired;
@property (readonly, strong, nonatomic) id<BSWatchdogProviding> provider; // @synthesize provider=_provider;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void)_completeWatchdogAfterFiring:(BOOL)arg1;
- (void)_invalidateTimer;
- (void)_setupTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stageOneTimerFired;
- (void)_stageTwoTimerFired;
- (void)_startWatchdogTimer;
- (void)_watchdogInvalidated;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (id)description;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)start;

@end

