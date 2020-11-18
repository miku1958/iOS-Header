//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char _minimumIntegerWidth;
    unsigned char _decimalWidth;
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char _indexFromRightOfLastDigitPlaceholder;
    unsigned char _numberOfHashDecimalPlaceholders;
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
    BOOL _showThousandsSeparator;
    BOOL _useAccountingStyle;
    BOOL _requiresFractionReplacement;
    BOOL _isConditional;
    BOOL _formatContainsIntegerToken;
    BOOL _isComplexFormat;
    unsigned short _currencyCodeIndex;
    int _fractionAccuracy;
    NSString *_formatString;
    NSArray *_interstitialStrings;
    NSIndexSet *_interstitialStringInsertionIndexes;
    double _scaleFactor;
}

@property (nonatomic) unsigned short currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth; // @synthesize decimalWidth=_decimalWidth;
@property (nonatomic) BOOL formatContainsIntegerToken; // @synthesize formatContainsIntegerToken=_formatContainsIntegerToken;
@property (copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property (nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @synthesize indexFromRightOfLastDigitPlaceholder=_indexFromRightOfLastDigitPlaceholder;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @synthesize interstitialStringInsertionIndexes=_interstitialStringInsertionIndexes;
@property (copy, nonatomic) NSArray *interstitialStrings; // @synthesize interstitialStrings=_interstitialStrings;
@property (nonatomic) BOOL isComplexFormat; // @synthesize isComplexFormat=_isComplexFormat;
@property (nonatomic) BOOL isConditional; // @synthesize isConditional=_isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth; // @synthesize minimumIntegerWidth=_minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @synthesize numberOfHashDecimalPlaceholders=_numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @synthesize numberOfNonSpaceDecimalPlaceholderDigits=_numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @synthesize numberOfNonSpaceIntegerPlaceholderDigits=_numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) BOOL requiresFractionReplacement; // @synthesize requiresFractionReplacement=_requiresFractionReplacement;
@property (nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property (nonatomic) BOOL showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @synthesize totalNumberOfDecimalPlaceholdersInFormat=_totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) BOOL useAccountingStyle; // @synthesize useAccountingStyle=_useAccountingStyle;

+ (id)customFormatData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCustomFormatData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_copySelfTo:(id)arg1;

@end

