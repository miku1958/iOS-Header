//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

#import <NanoTimeKitCompanion/CLKTimelineEntry-Protocol.h>
#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>
{
    BOOL _wheelchairUser;
    BOOL _databaseLoading;
    BOOL _deviceLocked;
    BOOL _areFitnessAppsRestricted;
    long long _activityMoveMode;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    double _appleMoveTimeTotal;
    double _appleMoveTimeGoal;
    double _appleExerciseTimeTotal;
    double _appleExerciseTimeGoal;
    long long _appleStandHoursTotal;
    long long _appleStandHoursGoal;
    NSArray *_activeEnergyChartData;
    NSArray *_appleMoveTimeChartData;
    NSArray *_appleExerciseTimeChartData;
    NSArray *_appleStandHourChartData;
}

@property (strong, nonatomic) NSArray *activeEnergyChartData; // @synthesize activeEnergyChartData=_activeEnergyChartData;
@property (strong, nonatomic) HKQuantity *activeEnergyGoal; // @synthesize activeEnergyGoal=_activeEnergyGoal;
@property (strong, nonatomic) HKQuantity *activeEnergyTotal; // @synthesize activeEnergyTotal=_activeEnergyTotal;
@property (nonatomic) long long activityMoveMode; // @synthesize activityMoveMode=_activityMoveMode;
@property (strong, nonatomic) NSArray *appleExerciseTimeChartData; // @synthesize appleExerciseTimeChartData=_appleExerciseTimeChartData;
@property (nonatomic) double appleExerciseTimeGoal; // @synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal;
@property (nonatomic) double appleExerciseTimeTotal; // @synthesize appleExerciseTimeTotal=_appleExerciseTimeTotal;
@property (strong, nonatomic) NSArray *appleMoveTimeChartData; // @synthesize appleMoveTimeChartData=_appleMoveTimeChartData;
@property (nonatomic) double appleMoveTimeGoal; // @synthesize appleMoveTimeGoal=_appleMoveTimeGoal;
@property (nonatomic) double appleMoveTimeTotal; // @synthesize appleMoveTimeTotal=_appleMoveTimeTotal;
@property (strong, nonatomic) NSArray *appleStandHourChartData; // @synthesize appleStandHourChartData=_appleStandHourChartData;
@property (nonatomic) long long appleStandHoursGoal; // @synthesize appleStandHoursGoal=_appleStandHoursGoal;
@property (nonatomic) long long appleStandHoursTotal; // @synthesize appleStandHoursTotal=_appleStandHoursTotal;
@property (nonatomic) BOOL areFitnessAppsRestricted; // @synthesize areFitnessAppsRestricted=_areFitnessAppsRestricted;
@property (nonatomic) BOOL databaseLoading; // @synthesize databaseLoading=_databaseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;
@property (nonatomic) BOOL wheelchairUser; // @synthesize wheelchairUser=_wheelchairUser;

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)_signatureBezelFromModel:(id)arg1;
+ (id)_signatureCornerFromModel:(id)arg1;
+ (id)_signatureRectangleFromModel:(id)arg1;
+ (id)formattingManager;
+ (id)idealizedEntryModel;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)lockedEntryModel;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)activeEnergyCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleMoveTimeCompletionPercentage;
- (double)appleStandHourCompletionPercentage;
- (long long)availabilityState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingString;
- (void)setDate:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;
- (BOOL)tl_validate:(id *)arg1;

@end
