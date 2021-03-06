//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char *mUid;
    struct __CFString *mFormatString;
    struct __CFString *mCurrencyCode;
    long long mDecimalPlaces;
    BOOL mUseAccountingStyle;
    BOOL mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    BOOL mIsCustom;
    BOOL mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    BOOL mIsTextFormat;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString *mSuffixString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString *)arg1;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9;
+ (const struct StateSpec *)stateForReading;
- (id)baseStringFromDouble:(double)arg1;
- (struct __CFString *)createStringFromDouble:(double)arg1;
- (id)currencyCode;
- (id)customNumberFormatTokens;
- (void)dealloc;
- (id)formatString;
- (int)fractionAccuracy;
- (id)fractionStringFromDouble:(double)arg1;
- (BOOL)hasValidDecimalPlaces;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23;
- (BOOL)isCustom;
- (BOOL)isTextFormat;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (BOOL)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1;
- (BOOL)useAccountingStyle;
- (int)valueType;

@end

