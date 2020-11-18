//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REHistogram.h>

@class REFeatureValue, RESortedDictionary;

@interface _REContinuousHistogram : REHistogram
{
    REFeatureValue *_binningValue;
    RESortedDictionary *_values;
}

- (void).cxx_destruct;
- (void)_enumerateValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(id)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mean;
- (void)removeValue:(id)arg1;
- (id)standardDeviation;

@end

