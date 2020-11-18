//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone, NSTimer;

@interface HMDTimerTrigger : HMDTrigger
{
    NSDate *_fireDate;
    NSTimeZone *_fireDateTimeZone;
    NSDateComponents *_fireRepeatInterval;
    NSString *_timerID;
    NSDate *_currentFireDate;
    NSTimer *_timer;
}

@property (strong, nonatomic) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
@property (copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property (copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property (copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property (strong, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;

+ (BOOL)supportsSecureCoding;
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;
- (void).cxx_destruct;
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;
- (id)_nextFireDate;
- (void)_registerForMessages;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)_stopTimer;
- (void)_timerTriggered;
- (void)activate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeConfiguration;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getCalendar;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4;
- (void)invalidate;
- (void)nsTimerTriggered:(id)arg1;
- (void)timerTriggered;
- (id)validateRecurrence:(id)arg1;

@end

