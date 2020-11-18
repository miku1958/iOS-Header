//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter
{
    BOOL _includeDegreeSymbol;
    int _inputUnit;
    int _outputUnit;
    struct UAMeasureFormat *_measureFormatter;
    NSLocale *_locale;
    NSString *_fallbackTemperatureString;
    unsigned long long _roundingMode;
    unsigned long long _maximumFractionDigits;
}

@property (copy, nonatomic) NSString *fallbackTemperatureString; // @synthesize fallbackTemperatureString=_fallbackTemperatureString;
@property (nonatomic) BOOL includeDegreeSymbol; // @synthesize includeDegreeSymbol=_includeDegreeSymbol;
@property (nonatomic) int inputUnit; // @synthesize inputUnit=_inputUnit;
@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) unsigned long long maximumFractionDigits; // @synthesize maximumFractionDigits=_maximumFractionDigits;
@property (nonatomic) struct UAMeasureFormat *measureFormatter; // @synthesize measureFormatter=_measureFormatter;
@property (nonatomic) int outputUnit; // @synthesize outputUnit=_outputUnit;
@property (nonatomic) unsigned long long roundingMode; // @synthesize roundingMode=_roundingMode;

+ (id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2;
- (void).cxx_destruct;
- (id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)formattedStringFromTemperature:(id)arg1;
- (id)formattedTemperatureFromString:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)stringForObjectValue:(id)arg1;

@end

