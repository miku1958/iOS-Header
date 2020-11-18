//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBUIPreciseClockTimer : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)now;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (void)dealloc;
- (id)init;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;

@end

