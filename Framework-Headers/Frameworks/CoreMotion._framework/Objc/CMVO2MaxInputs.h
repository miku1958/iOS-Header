//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;
    NSDate *fStartDate;
    double fMets;
    long long fMetSource;
    double fHeartRate;
    double fHeartRateConfidence;
    double fGrade;
    long long fGradeType;
    double fCadence;
    double fPace;
    BOOL fHasGPS;
    BOOL fHasStrideCal;
    long long fWorkoutType;
}

@property (readonly, nonatomic) double cadence;
@property (readonly, nonatomic) double grade;
@property (readonly, nonatomic) long long gradeType;
@property (readonly, nonatomic) BOOL hasGPS;
@property (readonly, nonatomic) BOOL hasStrideCal;
@property (readonly, nonatomic) double heartRate;
@property (readonly, nonatomic) double heartRateConfidence;
@property (readonly, nonatomic) long long metSource;
@property (readonly, nonatomic) double mets;
@property (readonly, nonatomic) double pace;
@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long workoutType;

+ (struct VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(BOOL)arg11 hasStrideCal:(BOOL)arg12 workoutType:(long long)arg13;
- (id)initWithSample:(struct VO2MaxInput)arg1;

@end

