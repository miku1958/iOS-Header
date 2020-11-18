//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>
{
    HKMedicalDate *_startDate;
    HKMedicalDate *_endDate;
}

@property (readonly, copy, nonatomic) HKMedicalDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, copy, nonatomic) HKMedicalDate *startDate; // @synthesize startDate=_startDate;

+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
