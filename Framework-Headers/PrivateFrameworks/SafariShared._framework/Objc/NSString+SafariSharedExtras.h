//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SafariSharedExtras)

@property (readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;

+ (id)safari_localizedStringFromComponents:(id)arg1 usingConjunctionForFinalJoiner:(BOOL)arg2;
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringAsHexWithData:(id)arg1;
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)safari_bestLanguageTag;
- (id)safari_bestURLForUserTypedString;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (id)safari_containedURLs;
- (unsigned long long)safari_countOfString:(id)arg1;
- (id)safari_domainFromHost;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_fixedStringByExpandingTildeInPath;
- (BOOL)safari_hasDirectionalPrefix;
- (BOOL)safari_isJavaScriptURLString;
- (BOOL)safari_isPathExtensionAllowedForAnalytics;
- (BOOL)safari_isVisualDuplicateOfURLString:(id)arg1;
- (BOOL)safari_looksLikeObscuredPassword;
- (id)safari_md5Hash;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_scriptIfJavaScriptURLString;
- (id)safari_sha256Hash;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
- (id)safari_stringByRemovingDirectionalPrefix;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_stringByRemovingWwwDotPrefix;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (id)safari_userVisibleURL;
@end
