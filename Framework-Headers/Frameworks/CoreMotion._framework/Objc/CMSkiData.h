//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMSkiData : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    double fRunDistance;
    double fRunAvgSpeed;
    double fRunMaxSpeed;
    double fRunSlope;
    double fRunElevationDescent;
}

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) double runAvgSpeed;
@property (readonly, nonatomic) double runDistance;
@property (readonly, nonatomic) double runElevationDescent;
@property (readonly, nonatomic) double runMaxSpeed;
@property (readonly, nonatomic) double runSlope;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;
- (void)convertToSkiEntry:(struct CLSkiEntry *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 runDistance:(double)arg6 runAvgSpeed:(double)arg7 runMaxSpeed:(double)arg8 runSlope:(double)arg9 runElevationDescent:(double)arg10;
- (id)initWithSessionId:(id)arg1;
- (id)initWithSkiEntry:(const struct CLSkiEntry *)arg1;

@end

