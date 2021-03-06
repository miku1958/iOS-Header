//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAlarm;

@protocol _INPBUpdateAlarmIntentResponse <NSObject>

@property (copy, nonatomic) NSArray *conflictAlarms;
@property (readonly, nonatomic) unsigned long long conflictAlarmsCount;
@property (readonly, nonatomic) BOOL hasUpdatedAlarm;
@property (strong, nonatomic) _INPBAlarm *updatedAlarm;

+ (Class)conflictAlarmsType;
- (void)addConflictAlarms:(_INPBAlarm *)arg1;
- (void)clearConflictAlarms;
- (_INPBAlarm *)conflictAlarmsAtIndex:(unsigned long long)arg1;
@end

