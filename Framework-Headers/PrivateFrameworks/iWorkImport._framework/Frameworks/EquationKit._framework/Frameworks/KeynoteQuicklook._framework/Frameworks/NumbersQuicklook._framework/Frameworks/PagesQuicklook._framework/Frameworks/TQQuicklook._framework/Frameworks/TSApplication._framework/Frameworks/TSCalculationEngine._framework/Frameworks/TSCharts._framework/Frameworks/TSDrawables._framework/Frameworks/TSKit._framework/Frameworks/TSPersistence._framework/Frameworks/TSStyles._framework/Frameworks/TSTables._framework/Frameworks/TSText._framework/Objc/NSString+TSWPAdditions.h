//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSWPAdditions)
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(BOOL)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
- (BOOL)tswp_containsIdeographs;
- (int)tswp_contentsScript;
- (int)tswp_contentsScriptInRange:(struct _NSRange)arg1;
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (BOOL)tswp_isAllWhitespaceInRange:(struct _NSRange)arg1;
- (BOOL)tswp_isHyphenationAtCharacterIndex:(unsigned long long)arg1;
- (BOOL)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;
- (struct _NSRange)tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(BOOL)arg3;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(BOOL)arg3 includeHyphenation:(BOOL)arg4;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (id)tswp_stringByNormalizingParagraphBreaks;
- (id)tswp_stringWithAddedIsolatesBasedOn:(int)arg1;
- (id)tswp_stringWithUnambiguousNeutralEnding;
- (id)tswp_stringWithoutControlCharacters;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1 planeClassification:(long long *)arg2;
@end

