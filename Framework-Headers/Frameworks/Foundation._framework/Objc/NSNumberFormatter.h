//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSDictionary, NSLocale, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString;

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver>
{
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter *_formatter;
    unsigned long long _counter;
    unsigned long long _behavior;
    NSRecursiveLock *_lock;
    unsigned long long _stateBitMask;
    long long _cacheGeneration;
    void *_reserved[8];
}

@property BOOL allowsFloats;
@property BOOL alwaysShowsDecimalSeparator;
@property (copy) NSString *currencyCode;
@property (copy) NSString *currencyDecimalSeparator;
@property (copy) NSString *currencyGroupingSeparator;
@property (copy) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *decimalSeparator;
@property (readonly, copy) NSString *description;
@property (copy) NSString *exponentSymbol;
@property unsigned long long formatWidth;
@property unsigned long long formatterBehavior;
@property long long formattingContext;
@property BOOL generatesDecimalNumbers;
@property (copy) NSString *groupingSeparator;
@property unsigned long long groupingSize;
@property (readonly) unsigned long long hash;
@property (copy) NSString *internationalCurrencySymbol;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSLocale *locale;
@property (copy) NSNumber *maximum;
@property unsigned long long maximumFractionDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long maximumSignificantDigits;
@property (copy) NSNumber *minimum;
@property unsigned long long minimumFractionDigits;
@property unsigned long long minimumIntegerDigits;
@property unsigned long long minimumSignificantDigits;
@property (copy) NSString *minusSign;
@property (copy) NSNumber *multiplier;
@property (copy) NSString *negativeFormat;
@property (copy) NSString *negativeInfinitySymbol;
@property (copy) NSString *negativePrefix;
@property (copy) NSString *negativeSuffix;
@property (copy) NSString *nilSymbol;
@property (copy) NSString *notANumberSymbol;
@property unsigned long long numberStyle;
@property (copy) NSString *paddingCharacter;
@property unsigned long long paddingPosition;
@property (getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;
@property (copy) NSString *perMillSymbol;
@property (copy) NSString *percentSymbol;
@property (copy) NSString *plusSign;
@property (copy) NSString *positiveFormat;
@property (copy) NSString *positiveInfinitySymbol;
@property (copy) NSString *positivePrefix;
@property (copy) NSString *positiveSuffix;
@property (copy) NSNumber *roundingIncrement;
@property unsigned long long roundingMode;
@property unsigned long long secondaryGroupingSize;
@property (readonly) Class superclass;
@property (copy) NSDictionary *textAttributesForNegativeInfinity;
@property (copy) NSDictionary *textAttributesForNegativeValues;
@property (copy) NSDictionary *textAttributesForNil;
@property (copy) NSDictionary *textAttributesForNotANumber;
@property (copy) NSDictionary *textAttributesForPositiveInfinity;
@property (copy) NSDictionary *textAttributesForPositiveValues;
@property (copy) NSDictionary *textAttributesForZero;
@property BOOL usesGroupingSeparator;
@property BOOL usesSignificantDigits;
@property (copy) NSString *zeroSymbol;

+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
- (void *)__Keynote_NOOP;
- (long long)_cacheGenerationCount;
- (void)_clearFormatter;
- (BOOL)_hasSetCurrencyCode;
- (BOOL)_hasSetCurrencySymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (void)_invalidateCache;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_tracksCacheGenerationCount;
- (BOOL)_usesCharacterDirection;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)checkLocaleChange;
- (BOOL)checkModify;
- (void)clearPropertyBit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void *)getFormatter;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)numberFromString:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (void)setPropertyBit;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;

@end

