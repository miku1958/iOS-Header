//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSPersistence)
+ (unsigned long long)numberForString:(id)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (id)regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(BOOL)arg3;
+ (id)stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)tsp_stringForDigest:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsp_stringWithExtensionFieldComponent:(unsigned int)arg1;
- (int)contentsScript;
- (int)contentsScriptInRange:(struct _NSRange)arg1;
- (unsigned long long)findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (BOOL)isAllWhitespaceInRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (struct _NSRange)rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(BOOL)arg3;
- (id)replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (id)stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange)arg2 searchOptions:(unsigned long long)arg3;
- (id)stringByNormalizingParagraphBreaks;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange)arg4 replacementCount:(unsigned long long *)arg5;
- (id)tsp_stringByAppendingExtensionFieldComponent:(unsigned int)arg1;
- (unsigned int)utf32CharacterAtIndex:(unsigned long long)arg1;
@end

