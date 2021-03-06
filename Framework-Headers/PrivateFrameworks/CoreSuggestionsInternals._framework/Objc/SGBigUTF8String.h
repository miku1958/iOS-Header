//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSMutableCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>

@class NSData;

@interface SGBigUTF8String : NSString <NSCopying, NSMutableCopying, NSSecureCoding>
{
    const char *_utf8;
    const char *_utf8End;
    NSData *_backingData;
    struct {
        unsigned int :6;
        unsigned int :1;
        unsigned int :1;
        unsigned int :24;
    } *_chunks;
    unsigned int _nchunks;
    unsigned int _length;
    BOOL _ascii;
    BOOL _nullTerminated;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithUTF8Data:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

