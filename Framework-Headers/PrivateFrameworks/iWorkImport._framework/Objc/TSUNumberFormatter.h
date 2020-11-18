//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSMutableArray, NSMutableDictionary, NSString, TSULocaleStructuredDictionary;

__attribute__((visibility("hidden")))
@interface TSUNumberFormatter : NSObject
{
    NSLocale *_locale;
    NSArray *_decimalFormatters;
    NSDictionary *_currencyFormatters;
    NSArray *_percentageFormatters;
    NSArray *_scientificFormatters;
    struct __CFNumberFormatter *_fractionFormatter;
    NSString *_currencyString;
    NSString *_percentageString;
    NSString *_scientificString;
    NSString *_decimalString;
    NSString *_decimalSeparator;
    NSString *_plusSign;
    NSString *_minusSign;
    NSString *_currencyDecimalSeparator;
    NSString *_groupingSeparator;
    NSString *_currencyGroupingSeparator;
    NSString *_percentSymbol;
    unsigned long long _groupingSize;
    NSMutableArray *_transformedDecimalStrings;
    NSMutableArray *_transformedCurrencyStrings;
    NSMutableArray *_transformedPercentageStrings;
    NSMutableArray *_transformedScientificStrings;
    TSULocaleStructuredDictionary *_harmonizedNumberFormatterSymbols;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    NSString *_additionalCurrencyCode;
    NSDictionary *_additionalCurrencyCodeFormatters;
}

@property (readonly, nonatomic) NSString *minusSign;
@property (readonly, nonatomic) NSString *plusSign;

+ (id)availableCurrencyCodes;
+ (struct __CFNumberFormatter *)createHarmonizedCFNumberFormatterWithLocale:(id)arg1 style:(long long)arg2;
+ (id)currencyDecimalSeparatorForLocale:(id)arg1;
+ (id)currencyGroupingSeparatorForLocale:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1 locale:(id)arg2;
+ (id)currentLocaleCurrencyCode;
+ (id)currentLocaleCurrencyDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)decimalSeparatorForLocale:(id)arg1;
+ (id)defaultCurrencyCodeForLocale:(id)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)formatterForLocale:(id)arg1;
+ (id)groupingSeparatorForLocale:(id)arg1;
+ (unsigned long long)groupingSizeForLocale:(id)arg1;
+ (void)initialize;
+ (id)numberFormatStringSpecialSymbols;
+ (id)percentSymbolForLocale:(id)arg1;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1;
+ (id)userVisibleCurrencyCodes;
- (void).cxx_destruct;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (BOOL)currencyFromString:(id)arg1 additionalCurrencyCode:(id)arg2 value:(double *)arg3 formatString:(id *)arg4 currencyCode:(id *)arg5;
- (id)currencyGroupingSeparator;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (void)dealloc;
- (BOOL)decimalFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;
- (id)decimalSeparator;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (BOOL)fractionFromString:(id)arg1 value:(double *)arg2;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg1;
- (struct __CFNumberFormatter *)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;
- (id)p_currencyFormatters;
- (id)p_decimalFormatters;
- (id)p_findCurrencySymbolInString:(id)arg1 additionalCurrencyCode:(id)arg2 successfullString:(id *)arg3 currencyCode:(id *)arg4;
- (void)p_loadHarmonizedNumberFormatterSymbols;
- (void)p_numberPreferencesChanged:(id)arg1;
- (id)p_percentageFormatters;
- (id)p_scientificFormatters;
- (BOOL)p_valueFromString:(id)arg1 formatters:(id)arg2 value:(double *)arg3 formatString:(id *)arg4;
- (id)percentSymbol;
- (BOOL)percentageFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;
- (BOOL)scientificFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;

@end
