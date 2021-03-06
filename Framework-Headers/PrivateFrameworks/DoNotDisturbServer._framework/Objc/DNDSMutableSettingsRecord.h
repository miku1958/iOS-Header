//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord
{
}

@property (copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings; // @dynamic behaviorSettings;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings; // @dynamic phoneCallBypassSettings;
@property (copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings; // @dynamic scheduleSettings;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

