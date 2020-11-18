//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _scheduleEnabledSetting;
    DNDScheduleTimePeriod *_timePeriod;
    unsigned long long _bedtimeBehaviorEnabledSetting;
}

@property (readonly, nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; // @synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting;
@property (readonly, nonatomic) unsigned long long scheduleEnabledSetting; // @synthesize scheduleEnabledSetting=_scheduleEnabledSetting;
@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod; // @synthesize timePeriod=_timePeriod;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

