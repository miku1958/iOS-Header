//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

#import <NanoTimeKitCompanion/CLKTimelineEntry-Protocol.h>
#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class HKQuantity, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>
{
    BOOL _databaseLoading;
    BOOL _deviceLocked;
    HKQuantity *_activeEnergy;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    double _briskMinutes;
    double _briskMinutesTotal;
    double _briskMinutesGoal;
    unsigned long long _standHourState;
    long long _standHoursTotal;
    long long _standHoursGoal;
    NTKWellnessEntryModel *_previousEntryModel;
}

@property (strong, nonatomic) HKQuantity *activeEnergy; // @synthesize activeEnergy=_activeEnergy;
@property (strong, nonatomic) HKQuantity *activeEnergyGoal; // @synthesize activeEnergyGoal=_activeEnergyGoal;
@property (strong, nonatomic) HKQuantity *activeEnergyTotal; // @synthesize activeEnergyTotal=_activeEnergyTotal;
@property (nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property (nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property (nonatomic) double briskMinutesTotal; // @synthesize briskMinutesTotal=_briskMinutesTotal;
@property (nonatomic) BOOL databaseLoading; // @synthesize databaseLoading=_databaseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) NTKWellnessEntryModel *previousEntryModel; // @synthesize previousEntryModel=_previousEntryModel;
@property (nonatomic) unsigned long long standHourState; // @synthesize standHourState=_standHourState;
@property (nonatomic) long long standHoursGoal; // @synthesize standHoursGoal=_standHoursGoal;
@property (nonatomic) long long standHoursTotal; // @synthesize standHoursTotal=_standHoursTotal;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)formattingManager;
+ (id)idealizedEntryModel;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)lockedEntryModel;
- (void).cxx_destruct;
- (double)activeEnergyGoalCompletionPercentage;
- (long long)availabilityState;
- (double)briskMinuteGoalCompletionPercentage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (double)standHourGoalCompletionPercentage;
- (id)templateForComplicationFamily:(long long)arg1;

@end
