//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableString.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString <NSSecureCoding>
{
    NSMutableString *original;
    NSDictionary *config;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)_allowsDirectEncoding;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short *)_fastCharacterContents;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)baseString;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formatConfiguration;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (void)setString:(id)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;

@end

