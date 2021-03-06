//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSItemProviderReading-Protocol.h>
#import <Foundation/NSItemProviderWriting-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString;

@interface NSString : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding>
{
}

@property (readonly, nonatomic) NSAttributedString *__baseAttributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly, copy) NSString *stringByRemovingPercentEncoding;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)_newZStringWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)_newZStringWithString:(id)arg1;
+ (id)_newZStringWithUTF8String:(const char *)arg1;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (const unsigned long long *)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (void)initialize;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id *)arg3;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)pathWithComponents:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)string;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id *)arg3 usedLossyConversion:(BOOL *)arg4;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;
- (const char *)UTF8String;
- (id)__escapeString5991;
- (BOOL)_allowsDirectEncoding;
- (unsigned long long)_cfTypeID;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short *)_fastCharacterContents;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (void)_flushRegularExpressionCaches;
- (void)_getBlockStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(BOOL)arg5;
- (BOOL)_getBytesAsData:(id *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (BOOL)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (id)_getCharactersAsStringInRange:(struct _NSRange)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned long long *)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (BOOL)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (struct _NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)_stringRepresentation;
- (id)_web_HTTPStyleLanguageCode;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_URLFragment;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (long long)_web_countOfString:(id)arg1;
- (id)_web_domainFromHost;
- (BOOL)_web_domainMatches:(id)arg1;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_fixedCarbonPOSIXPath;
- (BOOL)_web_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_web_hasCountryCodeTLD;
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)_web_isFileURL;
- (BOOL)_web_isJavaScriptURL;
- (BOOL)_web_looksLikeAbsoluteURL;
- (BOOL)_web_looksLikeIPAddress;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (struct _NSRange)_web_rangeOfURLHost;
- (struct _NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange)_web_rangeOfURLScheme_nowarn;
- (struct _NSRange)_web_rangeOfURLUserPasswordHostPort;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_stringByTrimmingWhitespace;
- (id)_widthVariants;
- (BOOL)boolValue;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (unsigned long long)completePathIntoString:(id *)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id *)arg3 filterTypes:(id)arg4;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (BOOL)containsString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2;
- (CDStruct_5fe7aead)decimalValue;
- (id)decomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)displayableString;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)fastestEncoding;
- (const char *)fileSystemRepresentation;
- (float)floatValue;
- (id)formatConfiguration;
- (BOOL)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(BOOL)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (BOOL)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (void)getParagraphStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (BOOL)hasPrefix:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (id)init;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long *)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(struct __va_list_tag [1])arg4 error:(id *)arg5;
- (int)intValue;
- (long long)integerValue;
- (BOOL)isAbsolutePath;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isNSString__;
- (id)lastPathComponent;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (id)linguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id *)arg5;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)localizedCapitalizedString;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (BOOL)localizedCaseInsensitiveContainsString:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (BOOL)localizedHasPrefix:(id)arg1;
- (BOOL)localizedHasSuffix:(id)arg1;
- (id)localizedLowercaseString;
- (long long)localizedStandardCompare:(id)arg1;
- (BOOL)localizedStandardContainsString:(id)arg1;
- (struct _NSRange)localizedStandardRangeOfString:(id)arg1;
- (id)localizedUppercaseString;
- (long long)longLongValue;
- (const char *)lossyCString;
- (id)lowercaseString;
- (id)lowercaseStringWithLocale:(id)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;
- (id)pathComponents;
- (id)pathExtension;
- (id)precomposedStringWithCanonicalMapping;
- (id)precomposedStringWithCompatibilityMapping;
- (id)propertyList;
- (id)propertyListFromStringsFileFormat;
- (id)quotedStringRepresentation;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfString:(id)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct _NSRange)significantText;
- (unsigned long long)smallestEncoding;
- (id)standardizedURLPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringByAddingPercentEscapes;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2;
- (id)stringByConvertingPathToURL;
- (id)stringByConvertingURLToPath;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)stringByRemovingPercentEscapes;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;

@end

