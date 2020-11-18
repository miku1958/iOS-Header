//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class WFWeatherEventConfig;

@interface WFWeatherEventsConfig : NSObject <NSCopying>
{
    WFWeatherEventConfig *_changeInConditions;
    WFWeatherEventConfig *_nextHourPrecipitation;
    WFWeatherEventConfig *_severeWeather;
}

@property (strong, nonatomic) WFWeatherEventConfig *changeInConditions; // @synthesize changeInConditions=_changeInConditions;
@property (strong, nonatomic) WFWeatherEventConfig *nextHourPrecipitation; // @synthesize nextHourPrecipitation=_nextHourPrecipitation;
@property (strong, nonatomic) WFWeatherEventConfig *severeWeather; // @synthesize severeWeather=_severeWeather;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
