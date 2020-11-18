//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSPowerMonitorObserver-Protocol.h>

@class NSCalendar, NSDate, NSString, NSTimer;
@protocol BSRelativeDateTimerDelegate;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver>
{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id<BSRelativeDateTimerDelegate> _delegate;
    unsigned long long _currResolution;
    long long _currValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BSRelativeDateTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
+ (void)invalidateTimer:(id)arg1;
- (void).cxx_destruct;
- (void)_fireAndUpdateTimerIfNecessary;
- (void)_fireForEvent;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_invalidateTimer;
- (double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (id)_timeDifferenceFromDate:(id)arg1;
- (id)date;
- (void)dealloc;
- (void)fireAndSchedule;
- (id)init;
- (void)invalidate;
- (double)nextFireInterval;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)setDate:(id)arg1;

@end
