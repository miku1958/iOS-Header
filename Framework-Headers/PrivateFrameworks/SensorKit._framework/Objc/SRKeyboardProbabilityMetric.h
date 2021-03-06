//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSUnit;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>
{
    NSUnit *_unitType;
    long long _totalDataSamples;
    NSMutableArray *_mutableSampleValues;
}

@property (readonly, copy) NSArray *distributionSampleValues;
@property (strong) NSMutableArray *mutableSampleValues; // @synthesize mutableSampleValues=_mutableSampleValues;
@property (nonatomic) long long totalDataSamples; // @synthesize totalDataSamples=_totalDataSamples;
@property (copy) NSUnit *unitType; // @synthesize unitType=_unitType;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

