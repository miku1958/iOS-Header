//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriTasks/STAlarmAction.h>

@class NSArray;

@interface STShowAlarmAction : STAlarmAction
{
    NSArray *_alarmIds;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithAlarmIds:(id)arg1;
- (id)alarmIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

