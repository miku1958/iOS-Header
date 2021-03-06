//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <Home/HFPropertyListConvertible-Protocol.h>
#import <Home/HFStringGenerator-Protocol.h>

@interface NSString (HFPropertyListConverting) <HFPropertyListConvertible, HFStringGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)hf_formattedPersonNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)hf_stringWithFormat:(id)arg1 arguments:(id)arg2;
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;
- (id)hf_SHA1;
- (id)hf_SHA256;
- (unsigned int)hf_UTF8Length;
- (unsigned long long)hf_countForSubstring:(id)arg1;
- (BOOL)hf_isEmail;
- (BOOL)hf_isPhoneNumber;
- (id)hf_stringByCapitalizingFirstWord;
- (id)hf_stringByLowercasingFirstWord;
- (id)hf_stringByTransformingFirstWordUsingBlock:(CDUnknownBlockType)arg1;
- (id)hf_stringByTrimmingTrailingHexCode;
- (id)hf_toHexString:(char *)arg1 length:(unsigned int)arg2;
- (BOOL)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;
@end

