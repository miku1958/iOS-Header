//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@class HKMCCycleSegment, NSNumber;

@interface HKMCCycle : NSObject <NSSecureCoding>
{
    HKMCCycleSegment *_menstruationSegment;
    HKMCCycleSegment *_fertileWindowSegment;
    NSNumber *_lastDayIndex;
}

@property (readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment; // @synthesize fertileWindowSegment=_fertileWindowSegment;
@property (readonly, nonatomic) NSNumber *lastDayIndex; // @synthesize lastDayIndex=_lastDayIndex;
@property (readonly, nonatomic) HKMCCycleSegment *menstruationSegment; // @synthesize menstruationSegment=_menstruationSegment;

+ (id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end
