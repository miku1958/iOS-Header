//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSData, WFWeatherConditions;

@interface WFForecastResponse : WFResponse <NSSecureCoding>
{
    BOOL _responseWasFromCache;
    WFWeatherConditions *_forecast;
    unsigned long long _forecastType;
    NSData *_rawAPIData;
}

@property (strong, nonatomic) WFWeatherConditions *forecast; // @synthesize forecast=_forecast;
@property (nonatomic) unsigned long long forecastType; // @synthesize forecastType=_forecastType;
@property (strong, nonatomic) NSData *rawAPIData; // @synthesize rawAPIData=_rawAPIData;
@property (nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

