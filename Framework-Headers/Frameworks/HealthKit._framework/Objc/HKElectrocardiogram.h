//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/_HKBinarySample-Protocol.h>

@class HKQuantity, NSArray, NSNumber, NSString;

@interface HKElectrocardiogram : HKSample <_HKBinarySample>
{
    struct Electrocardiogram _reading;
    unsigned long long _privateClassification;
    HKQuantity *_averageHeartRate;
    long long _symptomsStatus;
}

@property (readonly, nonatomic, getter=_algorithmVersion) NSNumber *algorithmVersion;
@property (readonly, copy, nonatomic) HKQuantity *averageHeartRate;
@property (readonly, nonatomic) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *leadNames;
@property (readonly, nonatomic, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property (readonly, nonatomic) long long numberOfVoltageMeasurements;
@property (readonly, nonatomic) unsigned long long privateClassification;
@property (readonly, nonatomic, getter=privateSymptoms) unsigned long long privateSymptoms;
@property (readonly, copy, nonatomic) HKQuantity *samplingFrequency;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long symptomsStatus; // @synthesize symptomsStatus=_symptomsStatus;

+ (id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;
+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_classification;
- (void)_enumerateDataForLead:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)_localizedClassificationWithActiveAlgorithmVersion:(long long)arg1;
- (void)_setAverageHeartRate:(id)arg1;
- (void)_setPayload:(id)arg1;
- (void)_setPrivateClassification:(unsigned long long)arg1;
- (void)_setSymptomsStatus:(long long)arg1;
- (unsigned long long)_symptoms;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDataForLead:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)frequency;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (long long)numberOfValues;
- (id)payload;
- (BOOL)prepareForSaving:(id *)arg1;
- (void)setReading:(struct Electrocardiogram)arg1;
- (long long)symptoms;

@end

