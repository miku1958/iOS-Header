//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying>
{
    double _intensity;
    double _chance;
    double _perceivedIntensity;
    NSDate *_date;
}

@property (readonly, nonatomic) double chance; // @synthesize chance=_chance;
@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) double intensity; // @synthesize intensity=_intensity;
@property (readonly, nonatomic) double perceivedIntensity; // @synthesize perceivedIntensity=_perceivedIntensity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIntensity:(double)arg1 chance:(double)arg2 perceivedIntensity:(double)arg3 date:(id)arg4;

@end

