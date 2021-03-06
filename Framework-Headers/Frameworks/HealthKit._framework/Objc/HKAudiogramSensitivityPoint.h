//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding>
{
    HKQuantity *_frequency;
    HKQuantity *_leftEarSensitivity;
    HKQuantity *_rightEarSensitivity;
}

@property (readonly, copy) HKQuantity *frequency;
@property (readonly, copy) HKQuantity *leftEarSensitivity;
@property (readonly, copy) HKQuantity *rightEarSensitivity;

+ (id)_incompatibleUnit:(id)arg1 incompatibleWith:(id)arg2;
+ (id)_rangeViolationMin:(id)arg1 max:(id)arg2 value:(id)arg3;
+ (BOOL)_validateUnitForFrequency:(id)arg1;
+ (BOOL)_validateUnitForSensitivity:(id)arg1;
+ (id)sensitivityPointWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 error:(id *)arg4;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validFrequency:(id)arg1 error:(id *)arg2;
+ (BOOL)validSensitivity:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_audiogramDiagnosticSensitivityPointForEarSensitivity:(id)arg1;
- (id)_leftDiagnosticSensitivityPoint;
- (id)_rightDiagnosticSensitivityPoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3;

@end

