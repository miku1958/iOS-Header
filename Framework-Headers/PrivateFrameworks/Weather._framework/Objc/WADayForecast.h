//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSCopying-Protocol.h>

@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying>
{
    WFTemperature *_high;
    WFTemperature *_low;
    unsigned long long _icon;
    unsigned long long _dayOfWeek;
    unsigned long long _dayNumber;
}

@property (nonatomic) unsigned long long dayNumber; // @synthesize dayNumber=_dayNumber;
@property (nonatomic) unsigned long long dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property (copy, nonatomic) WFTemperature *high; // @synthesize high=_high;
@property (nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property (copy, nonatomic) WFTemperature *low; // @synthesize low=_low;

+ (id)dayForecastForLocation:(id)arg1 conditions:(id)arg2;
- (void).cxx_destruct;
- (long long)compareDayNumberToDayForecast:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

