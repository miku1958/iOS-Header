//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSUNumberFormatting-Protocol.h>

@class NSArray, NSIndexSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
{
    int mValueType;
    NSString *mFormatString;
    unsigned short mDecimalPlaces;
    NSString *mCurrencyCode;
    BOOL mUseAccountingStyle;
    int mNegativeStyle;
    BOOL mShowThousandsSeparator;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    NSString *mPrefixString;
    NSString *mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUseMinusSign;
    BOOL mIsCustom;
    double mScaleFactor;
    BOOL mFormatStringContainsTabCharacter;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    BOOL mRequiresFractionReplacement;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    BOOL mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString *mFormatName;
    NSUUID *mCustomFormatKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
+ (id)numberFormatFromFormatStruct:(CDStruct_b1066b25)arg1;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 formatName:(id)arg16;
- (unsigned short)base;
- (unsigned short)basePlaces;
- (id)baseStringFromDouble:(double)arg1;
- (BOOL)baseUseMinusSign;
- (BOOL)canFormatText;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currencyCode;
- (id)customFormatKey;
- (BOOL)customFormatShouldAutoInsertPercentSymbol;
- (id)customNumberFormatTokens;
- (void)dealloc;
- (unsigned short)decimalPlaces;
- (id)formatName;
- (id)formatString;
- (CDStruct_b1066b25)formatStructAndCustomFormatData:(id *)arg1;
- (int)fractionAccuracy;
- (BOOL)hasValidDecimalPlaces;
- (BOOL)ignoreDecimalPlacesForZeroValue;
- (id)init;
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(BOOL)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(BOOL)arg13 formatName:(id)arg14;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(BOOL)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(BOOL)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(BOOL)arg23 formatName:(id)arg24 customFormatKey:(id)arg25;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
- (BOOL)isCustom;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (BOOL)isTextFormat;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (int)negativeStyle;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)arg1;
- (id)prefixString;
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (double)scaleFactor;
- (void)setFormatName:(id)arg1;
- (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg1;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (BOOL)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(BOOL)arg5;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(BOOL)arg3;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(BOOL)arg4;
- (id)stringFromString:(id)arg1;
- (id)suffixString;
- (BOOL)useScientificFormattingAutomatically;
- (BOOL)usesAccountingStyle;
- (BOOL)usesTabs;
- (BOOL)usesTextFormatForValue:(double)arg1;
- (int)valueType;

@end

