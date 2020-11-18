//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)

@property (readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
@property (readonly, nonatomic) NSString *tsu_normalizedFilenameExtension;
@property (readonly, nonatomic) NSString *tsu_pathUTI;

+ (id)tsu_JSONStringFromString:(id)arg1;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(BOOL)arg3;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(BOOL)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;
+ (id)tsu_numberSymbols;
+ (id)tsu_redactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(BOOL)arg3;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (id)tsu_unRedactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)tsu_appendJSONStringToString:(id)arg1;
- (BOOL)tsu_bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;
- (long long)tsu_compareToVersionString:(id)arg1;
- (BOOL)tsu_conformsToAnyUTI:(id)arg1;
- (BOOL)tsu_conformsToUTI:(id)arg1;
- (BOOL)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (BOOL)tsu_containsSubstring:(id)arg1;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (BOOL)tsu_customFormatIntegerTokenUsesSeparator;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (id)tsu_encodeStringBase64;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)tsu_escapeForIcuRegex;
- (id)tsu_escapeXML;
- (id)tsu_firstKey;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (void)tsu_getMD5Hash:(char *)arg1;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
- (BOOL)tsu_isCJKString;
- (BOOL)tsu_isChildOfPath:(id)arg1;
- (BOOL)tsu_isDescendantOfPath:(id)arg1;
- (BOOL)tsu_isEqualToString:(id)arg1;
- (BOOL)tsu_isNumberFormatPattern;
- (BOOL)tsu_isSpecialCustomNumberFormatToken;
- (BOOL)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_lastKey;
- (id)tsu_md5Hash;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (BOOL)tsu_pathConformsToUTI:(id)arg1;
- (id)tsu_pathExceptPrivate;
- (BOOL)tsu_pathExtensionConformsToUTI:(id)arg1;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(BOOL)arg1;
- (id)tsu_sha256HexHashString;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringByDeletingPathExtensionIfEqualTo:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringTrimByLimitingFirstCharacterToSet:(id)arg1;
- (id)tsu_stringWithNormalizedHyphens;
- (id)tsu_stringWithNormalizedHyphensAndQuotationMarks;
- (id)tsu_stringWithNormalizedQuotationMarks;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)tsu_stringWithRealpath;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_stringWithoutBidiControls;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (id)tsu_uncommentedAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_unescapeXML;
@end
