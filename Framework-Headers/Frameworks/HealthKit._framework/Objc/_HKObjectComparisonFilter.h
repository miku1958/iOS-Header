//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKComparisonFilter.h>

@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter
{
    BOOL _compareForLocalDevice;
    NSString *_devicePropertyName;
    NSString *_metadataKey;
}

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg1;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg1;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (BOOL)isSupportedDevicePropertyKey:(id)arg1;
+ (BOOL)isSupportedKeyPath:(id)arg1;
+ (BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (BOOL)_acceptsDataObjectComparingDeviceProperty:(id)arg1;
- (BOOL)_acceptsDataObjectWithAppleWatchSource:(id)arg1;
- (BOOL)_acceptsDataObjectWithContributor:(id)arg1;
- (BOOL)_acceptsDataObjectWithCreationTime:(double)arg1;
- (BOOL)_acceptsDataObjectWithMetadata:(id)arg1;
- (BOOL)_acceptsDataObjectWithSource:(id)arg1;
- (BOOL)_acceptsDataObjectWithValue:(id)arg1;
- (void)_configureForKeyPathDeviceProperty;
- (void)_configureForKeyPathSource;
- (void)_configureForMetdataKeyPath;
- (BOOL)acceptsDataObject:(id)arg1;
- (void)configureInMemoryFilter;

@end

