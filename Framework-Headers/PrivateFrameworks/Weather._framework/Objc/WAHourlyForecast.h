//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/NSCopying-Protocol.h>

@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject <NSCopying>
{
    unsigned long long _eventType;
    NSString *_time;
    long long _hourIndex;
    WFTemperature *_temperature;
    NSString *_forecastDetail;
    long long _conditionCode;
    double _percentPrecipitation;
}

@property (nonatomic) long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property (nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (copy, nonatomic) NSString *forecastDetail; // @synthesize forecastDetail=_forecastDetail;
@property (nonatomic) long long hourIndex; // @synthesize hourIndex=_hourIndex;
@property (nonatomic) double percentPrecipitation; // @synthesize percentPrecipitation=_percentPrecipitation;
@property (strong, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
@property (copy, nonatomic) NSString *time; // @synthesize time=_time;

+ (long long)TimeValueFromString:(id)arg1;
+ (id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

