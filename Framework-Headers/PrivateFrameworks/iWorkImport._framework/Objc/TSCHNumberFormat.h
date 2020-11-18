//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSCHCustomFormatSupport-Protocol.h>
#import <iWorkImport/TSCHDataFormatter-Protocol.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject-Protocol.h>
#import <iWorkImport/TSCHDataFormatterSupportedClientFormatObject-Protocol.h>
#import <iWorkImport/TSCHFormatTypeSupport-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>
{
    NSString *mPrefixString;
    NSString *mSuffixString;
    CDStruct_28403e59 mFormatStruct;
}

@property (readonly, nonatomic) unsigned int base;
@property (readonly, nonatomic) unsigned int basePlaces;
@property (readonly, nonatomic) BOOL baseUseMinusSign;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int decimalPlaces;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int formatType;
@property (readonly, nonatomic) int fractionAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isBase;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) BOOL isFraction;
@property (readonly, nonatomic) BOOL isPercentage;
@property (readonly, nonatomic) int negativeStyle;
@property (readonly, copy, nonatomic) NSString *prefixString;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, copy, nonatomic) NSString *suffixString;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useAccountingStyle;
@property (readonly, nonatomic) BOOL usesNumberFormatStruct;

+ (id)automaticDecimalPlaces;
+ (id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3;
+ (unsigned int)defaultBase;
+ (unsigned int)defaultBasePlaces;
+ (BOOL)defaultBaseUseMinusSign;
+ (id)defaultCurrencyCode;
+ (id)defaultDecimalNumberFormat;
+ (int)defaultFractionAccuracy;
+ (int)defaultNegativeNumberStyle;
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
+ (int)labelFormatTypeFromTSUFormatType:(int)arg1;
+ (id)numberFormatWithFormatStruct:(CDStruct_28403e59)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)numberFormatWithFormatType:(int)arg1 decimalPlaces:(unsigned int)arg2 showThousandsSeparator:(BOOL)arg3;
+ (BOOL)supportsFormatType:(int)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customFormatKey;
- (id)customFormatListKey;
- (id)dataFormatterForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)dealloc;
- (CDStruct_28403e59)formatStruct;
- (id)init;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithFormatStruct:(CDStruct_28403e59)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (BOOL)isCompatibleWithDataFormatter:(id)arg1;
- (BOOL)isCustom;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isScientific;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (int)negativeStyleForNumberFormatter;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (long long)numberOfDecimalPlaces;
- (unsigned int)p_base;
- (unsigned int)p_baseIfAvailable;
- (unsigned int)p_basePlaces;
- (unsigned int)p_basePlacesIfAvailable;
- (BOOL)p_baseUseMinusSign;
- (BOOL)p_baseUseMinusSignIfAvailable;
- (id)p_currencyCode;
- (id)p_currencyCodeIfAvailable;
- (unsigned int)p_decimalPlaces;
- (unsigned int)p_decimalPlacesIfAvailable;
- (id)p_formatTypeDescription;
- (id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2;
- (int)p_fractionAccuracy;
- (int)p_fractionAccuracyIfAvailable;
- (BOOL)p_hasValidDecimalPlaces;
- (id)p_initWithFormatStruct:(CDStruct_28403e59)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (int)p_negativeStyle;
- (int)p_negativeStyleIfAvailable;
- (BOOL)p_showThousandsSeparator;
- (BOOL)p_showThousandsSeparatorIfAvailable;
- (BOOL)p_useAccountingStyle;
- (BOOL)p_useAccountingStyleIfAvailable;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (BOOL)supportsAutoMinMax;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (int)valueType;

@end

