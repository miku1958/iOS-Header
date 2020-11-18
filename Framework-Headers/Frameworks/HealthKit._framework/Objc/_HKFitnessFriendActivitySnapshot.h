//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSTimeZone, NSUUID;

@interface _HKFitnessFriendActivitySnapshot : HKSample <NSCopying>
{
    BOOL _hasCarriedForwardGoals;
    NSUUID *_friendUUID;
    NSUUID *_sourceUUID;
    long long _snapshotIndex;
    NSDate *_snapshotUploadedDate;
    NSNumber *_timeZoneOffsetFromUTCForNoon;
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    double _energyBurned;
    double _energyBurnedGoal;
    double _stepCount;
    double _pushCount;
    long long _wheelchairUse;
    double _walkingAndRunningDistance;
}

@property (nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property (nonatomic) double activeHoursGoal; // @synthesize activeHoursGoal=_activeHoursGoal;
@property (readonly, nonatomic) double activeHoursGoalPercentage;
@property (nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property (nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property (readonly, nonatomic) double briskMinutesGoalPercentage;
@property (nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property (nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property (readonly, nonatomic) double energyBurnedGoalPercentage;
@property (strong, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
@property (nonatomic) BOOL hasCarriedForwardGoals; // @synthesize hasCarriedForwardGoals=_hasCarriedForwardGoals;
@property (nonatomic) double pushCount; // @synthesize pushCount=_pushCount;
@property (nonatomic) long long snapshotIndex; // @synthesize snapshotIndex=_snapshotIndex;
@property (strong, nonatomic) NSDate *snapshotUploadedDate; // @synthesize snapshotUploadedDate=_snapshotUploadedDate;
@property (strong, nonatomic) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property (nonatomic) double stepCount; // @synthesize stepCount=_stepCount;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (strong, nonatomic) NSNumber *timeZoneOffsetFromUTCForNoon; // @synthesize timeZoneOffsetFromUTCForNoon=_timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;

+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)arg1;
+ (id)snapshotWithActivitySummary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)activitySummary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

