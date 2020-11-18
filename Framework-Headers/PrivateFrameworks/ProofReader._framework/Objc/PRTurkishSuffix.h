//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PRTurkishSuffix : NSObject
{
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer[16];
    unsigned char _isOptional[16];
    unsigned long long _patternBufferLength;
    int _suffixType;
    BOOL _postponesApostrophe;
}

+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id *)arg7 suffixRangeStack:(struct _NSRange *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishSuffixes;
+ (id)standardTurkishVerbSuffixes;
- (void)_fillPatternBuffer;
- (void)dealloc;
- (id)description;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(BOOL)arg4;
- (unsigned long long)matchingIndexInBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(BOOL *)arg4;
- (id)name;
- (id)pattern;
- (BOOL)postponesApostrophe;
- (int)suffixType;

@end
