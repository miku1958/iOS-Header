//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber, STTemperature;

@interface STWeatherAttributes : STSiriModelObject
{
    long long _condition;
    STTemperature *_temperature;
    STTemperature *_highTemperature;
    STTemperature *_lowTemperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5;
- (id)chanceOfPrecipitation;
- (long long)condition;
- (void)encodeWithCoder:(id)arg1;
- (id)highTemperature;
- (id)initWithCoder:(id)arg1;
- (id)lowTemperature;
- (id)temperature;

@end

