//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REHistogram.h>

@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram
{
    unsigned long long _binningValue;
    RESortedDictionary *_values;
}

- (void).cxx_destruct;
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)addValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (void)dealloc;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mean;
- (void)removeValue:(unsigned long long)arg1;
- (unsigned long long)standardDeviation;

@end
