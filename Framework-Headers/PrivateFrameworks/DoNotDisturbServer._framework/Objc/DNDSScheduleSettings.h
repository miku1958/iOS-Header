//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings
{
    NSDate *_creationDate;
}

@property (readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;

+ (id)defaultScheduleSettings;
+ (id)settingsForRecord:(id)arg1;
+ (id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)makeRecord;
- (id)replacementObjectForCoder:(id)arg1;

@end
