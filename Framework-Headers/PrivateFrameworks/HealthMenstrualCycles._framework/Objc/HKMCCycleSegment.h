//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@interface HKMCCycleSegment : NSObject <NSSecureCoding>
{
    CDStruct_ef5fcbe6 _days;
    long long _type;
}

@property (readonly, nonatomic) CDStruct_ef5fcbe6 days; // @synthesize days=_days;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)_fertileWindowSegmentWithDays:(CDStruct_ef5fcbe6)arg1;
+ (id)_menstruationSegmentWithDays:(CDStruct_ef5fcbe6)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_initWithType:(long long)arg1 days:(CDStruct_ef5fcbe6)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end
