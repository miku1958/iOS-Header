//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CLSWeather : NSObject
{
    NSDate *_date;
    double _minTemperature;
    double _maxTemperature;
    double _averageTemperature;
    unsigned long long _condition;
}

@property (readonly) double averageTemperature; // @synthesize averageTemperature=_averageTemperature;
@property (readonly) unsigned long long condition; // @synthesize condition=_condition;
@property (readonly) NSDate *date; // @synthesize date=_date;
@property (readonly) double maxTemperature; // @synthesize maxTemperature=_maxTemperature;
@property (readonly) double minTemperature; // @synthesize minTemperature=_minTemperature;

+ (id)conditionDescription:(unsigned long long)arg1;
+ (id)keyForCondition:(unsigned long long)arg1;
+ (id)stringForCondition:(unsigned long long)arg1;
+ (id)temperatureDescription:(double)arg1;
+ (id)weatherWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)dateFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)weatherConditionFromString:(id)arg1;

@end

