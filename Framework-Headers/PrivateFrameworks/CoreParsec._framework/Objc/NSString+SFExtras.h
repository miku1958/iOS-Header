//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SFExtras)
+ (void)_parsec_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)parsec_stringByBase64EncodingData:(id)arg1;
- (id)_parsec_highLevelDomainFromHost;
- (id)_parsec_topLevelDomainUsingCFFromComponents:(id)arg1;
- (id)parsec_base64DecodedData;
- (BOOL)parsec_caseInsensitiveContainsString:(id)arg1;
- (BOOL)parsec_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)parsec_hasCaseInsensitiveSuffix:(id)arg1;
- (BOOL)parsec_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (BOOL)parsec_hasPrefix:(id)arg1;
- (BOOL)parsec_isCaseInsensitiveEqualToString:(id)arg1;
- (id)parsec_readableURLStringAfterRemovingSubdomains;
- (int)sf_asButtonAlignment;
- (int)sf_asColumnAlignment;
- (int)sf_asImageAlignment;
- (int)sf_asResultPlacement;
- (int)sf_asTextAlignment;
- (int)sf_cardSectionType;
@end

