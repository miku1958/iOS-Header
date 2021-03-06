//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying>
{
    double fTimestamp;
    double _elapsedTime;
    double _totalEnergy;
    double _totalDistance;
    double _totalElevationAscended;
    long long _totalStrideCount;
    long long _totalStrokeCount;
    long long _totalFloorsClimbed;
    double _instantaneousSpeed;
    double _instantaneousCadence;
    double _instantaneousPower;
    double _inclination;
    double _resistanceLevel;
}

@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (nonatomic) double inclination; // @synthesize inclination=_inclination;
@property (nonatomic) double instantaneousCadence; // @synthesize instantaneousCadence=_instantaneousCadence;
@property (nonatomic) double instantaneousPower; // @synthesize instantaneousPower=_instantaneousPower;
@property (nonatomic) double instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
@property (nonatomic) double resistanceLevel; // @synthesize resistanceLevel=_resistanceLevel;
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;
@property (nonatomic) double totalElevationAscended; // @synthesize totalElevationAscended=_totalElevationAscended;
@property (nonatomic) double totalEnergy; // @synthesize totalEnergy=_totalEnergy;
@property (nonatomic) long long totalFloorsClimbed; // @synthesize totalFloorsClimbed=_totalFloorsClimbed;
@property (nonatomic) long long totalStrideCount; // @synthesize totalStrideCount=_totalStrideCount;
@property (nonatomic) long long totalStrokeCount; // @synthesize totalStrokeCount=_totalStrokeCount;

+ (BOOL)isAvailable;
+ (BOOL)supportsSecureCoding;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1;

@end

