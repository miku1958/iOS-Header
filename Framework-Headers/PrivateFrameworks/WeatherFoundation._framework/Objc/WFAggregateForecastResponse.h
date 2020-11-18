//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding>
{
    BOOL _responseWasFromCache;
    NSArray *_forecasts;
}

@property (copy, nonatomic) NSArray *forecasts; // @synthesize forecasts=_forecasts;
@property (nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
