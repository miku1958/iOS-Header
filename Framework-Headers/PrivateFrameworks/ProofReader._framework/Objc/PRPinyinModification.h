//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification
{
    struct _NSRange _range;
    NSString *_replacementString;
    unsigned long long _modificationType;
    struct _NSRange _syllableRange;
    struct _NSRange _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    unsigned char _letters[7];
    BOOL _producesPartialSyllable;
    BOOL _isTemporary;
}

+ (id)finalModificationsForInputString:(id)arg1;
+ (id)modificationsForInputString:(id)arg1;
- (BOOL)_shouldAppendLetter:(unsigned char)arg1;
- (struct _NSRange)additionalSyllableRange;
- (struct _NSRange)combinedSyllableRange;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9 isTemporary:(BOOL)arg10;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 isTemporary:(BOOL)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8 isTemporary:(BOOL)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporary;
- (double)modificationScore;
- (unsigned long long)modificationType;
- (BOOL)producesPartialSyllable;
- (struct _NSRange)range;
- (id)replacementString;
- (unsigned long long)syllableCountScore;
- (struct _NSRange)syllableRange;

@end

