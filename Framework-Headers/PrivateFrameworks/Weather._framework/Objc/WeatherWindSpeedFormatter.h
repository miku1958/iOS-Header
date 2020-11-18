//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSDictionary, NSLocale;

@interface WeatherWindSpeedFormatter : NSFormatter
{
    NSLocale *_locale;
    NSDictionary *_directionSubstringAttributes;
}

@property (strong) NSDictionary *directionSubstringAttributes; // @synthesize directionSubstringAttributes=_directionSubstringAttributes;
@property (strong) NSLocale *locale; // @synthesize locale=_locale;

+ (id)convenienceFormatter;
- (void).cxx_destruct;
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)fallbackStringForWindSpeed:(float)arg1;
- (id)fallbackUnitString;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (double)speedByConvertingToUserUnit:(double)arg1;
- (id)speedStringByConvertingToUserUnits:(float)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForWindDirection:(float)arg1;
- (id)stringForWindSpeed:(float)arg1;
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;
- (int)windSpeedUnit;

@end
