//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)mf_MD5Digest;
- (id)mf_SHA1Digest;
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (id)mf_copyStringByDecodingIDNA;
- (id)mf_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;
- (id)mf_copyStringByEncodingIDNA;
- (id)mf_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2;
- (const void *)mf_lossyDefaultCStringBytes;
- (id)mf_messageIDSubstring;
@end

