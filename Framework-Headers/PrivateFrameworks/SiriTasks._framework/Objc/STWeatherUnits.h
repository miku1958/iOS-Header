//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STWeatherUnits : STSiriModelObject
{
    long long _temperatureUnits;
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithTemperatureUnits:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)temperatureUnits;

@end
