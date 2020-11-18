//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUCustomFormatData.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface TSUMutableCustomFormatData : TSUCustomFormatData
{
}

@property (nonatomic) unsigned short currencyCodeIndex; // @dynamic currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth; // @dynamic decimalWidth;
@property (nonatomic) BOOL formatContainsIntegerToken; // @dynamic formatContainsIntegerToken;
@property (copy, nonatomic) NSString *formatString; // @dynamic formatString;
@property (nonatomic) int fractionAccuracy; // @dynamic fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @dynamic indexFromRightOfLastDigitPlaceholder;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @dynamic interstitialStringInsertionIndexes;
@property (copy, nonatomic) NSArray *interstitialStrings; // @dynamic interstitialStrings;
@property (nonatomic) BOOL isComplexFormat; // @dynamic isComplexFormat;
@property (nonatomic) BOOL isConditional; // @dynamic isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth; // @dynamic minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @dynamic numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @dynamic numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @dynamic numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) BOOL requiresFractionReplacement; // @dynamic requiresFractionReplacement;
@property (nonatomic) double scaleFactor; // @dynamic scaleFactor;
@property (nonatomic) BOOL showThousandsSeparator; // @dynamic showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @dynamic totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) BOOL useAccountingStyle; // @dynamic useAccountingStyle;

+ (id)customFormatData;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

