//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sleep/HKSPSleepSettings.h>

#import <Sleep/HKSPMutableObject-Protocol.h>

@class HKSPChangeSet, NSDate, NSSet, NSString;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>
{
    HKSPChangeSet *_changeSet;
}

@property (nonatomic) BOOL bedtimeReminders;
@property (readonly, nonatomic) HKSPChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property (nonatomic) BOOL chargingReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) BOOL scheduledSleepMode;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL springBoardGreetingDisabled;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeInBedTracking;
@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) BOOL wakeUpResults;
@property (nonatomic) BOOL watchSleepFeaturesEnabled;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopy;

@end

