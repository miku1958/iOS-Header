//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate, NSString;

@protocol NTKAlarmComplicationDisplay <NTKComplicationDisplay>
- (void)setStateActiveWithDate:(NSDate *)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;

@optional
- (void)setAlarmComplicationNameText:(NSString *)arg1;
@end

