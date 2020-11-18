//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFMimeCharset : NSObject
{
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(BOOL)arg1;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)preferredMimeCharset;
- (void)_setPrimaryLanguage:(id)arg1;
- (BOOL)canBeUsedForOutgoingMessages;
- (id)charsetName;
- (BOOL)coversLargeUnicodeSubset;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned int)encoding;
- (id)initWithEncoding:(unsigned int)arg1;
- (id)primaryLanguage;
- (BOOL)useBase64InHeaders;

@end

