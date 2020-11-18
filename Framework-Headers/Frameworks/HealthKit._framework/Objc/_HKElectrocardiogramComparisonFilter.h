//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKElectrocardiogramComparisonFilter : _HKComparisonFilter
{
}

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (BOOL)isSupportedKeyPath:(id)arg1;
+ (BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id *)arg5;
- (BOOL)_acceptsECGWithAverageHeartRate:(id)arg1;
- (BOOL)_acceptsECGWithPrivateClassification:(unsigned long long)arg1;
- (BOOL)_acceptsECGWithPublicClassification:(long long)arg1;
- (BOOL)_acceptsECGWithSymptomsStatus:(long long)arg1;
- (BOOL)acceptsDataObject:(id)arg1;

@end
