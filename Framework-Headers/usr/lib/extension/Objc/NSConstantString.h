//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
{
}

- (const char *)_fastCStringContents:(BOOL)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (const char *)lossyCString;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)smallestEncoding;

@end

