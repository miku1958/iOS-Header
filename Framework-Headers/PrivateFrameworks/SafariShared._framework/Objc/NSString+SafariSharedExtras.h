//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SafariSharedExtras)

@property (readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;

+ (void)_safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringAsHexWithData:(id)arg1;
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)_safari_topLevelDomainUsingCFFromComponents:(id)arg1;
- (id)safari_base64DecodedData;
- (id)safari_bestLanguageTag;
- (id)safari_bestURLForUserTypedString;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (id)safari_containedURLs;
- (unsigned long long)safari_countOfString:(id)arg1;
- (id)safari_domainFromHost;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_fixedStringByExpandingTildeInPath;
- (BOOL)safari_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)safari_hasCaseInsensitiveSuffix:(id)arg1;
- (BOOL)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (BOOL)safari_hasPrefix:(id)arg1;
- (id)safari_highLevelDomainFromHost;
- (BOOL)safari_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)safari_isJavaScriptURLString;
- (BOOL)safari_isVisualDuplicateOfURLString:(id)arg1;
- (id)safari_md5Hash;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_scriptIfJavaScriptURLString;
- (id)safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(BOOL)arg2 simplifiedStringOffset:(unsigned long long *)arg3;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_stringByRemovingWwwDotPrefix;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)safari_stringByTrimmingWhitespace;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (id)safari_userVisibleURL;
@end

