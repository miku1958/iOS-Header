//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest
{
    STWeatherAttributes *_currentAttributes;
    NSArray *_hourlyAttributes;
    STCity *_city;
    long long _startHour;
    long long _forecastType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5;
- (id)city;
- (id)createResponse;
- (id)currentAttributes;
- (void)encodeWithCoder:(id)arg1;
- (long long)forecastType;
- (id)hourlyAttributes;
- (id)initWithCoder:(id)arg1;
- (long long)startHour;

@end

