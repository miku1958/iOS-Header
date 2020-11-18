//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TIExtras)
+ (struct USet *)_bopomofoSet;
+ (struct USet *)_bopomofoToneSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (struct USet *)_fullwidthLettersAndNumbersSet;
+ (struct USet *)_hiraganaSet;
+ (struct USet *)_ideographSet;
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_nonFullwidthLettersAndNumbersSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonHiraganaOrKatakanaSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_nonJapaneseLetterSet;
+ (struct USet *)_nonKatakanaOrKanjiSet;
+ (BOOL)_string:(id)arg1 matchesString:(id)arg2;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)stringWithUnichar:(unsigned int)arg1;
- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange)arg1;
- (BOOL)_containsBopomofoOnly;
- (BOOL)_containsBopomofoToneOnly;
- (BOOL)_containsCJKScriptsOnly;
- (BOOL)_containsCJKSymbolsAndPunctuation;
- (BOOL)_containsCJScripts;
- (BOOL)_containsCJScriptsOnly;
- (BOOL)_containsEmoji;
- (BOOL)_containsFullwidthLettersAndNumbers;
- (BOOL)_containsFullwidthLettersAndNumbersOnly;
- (BOOL)_containsHiraganaKatakanaOrBopomofo;
- (BOOL)_containsHiraganaOnly;
- (BOOL)_containsHiraganaOrKatakana;
- (BOOL)_containsIdeographicCharacters;
- (BOOL)_containsJapanese;
- (BOOL)_containsJapaneseOnly;
- (BOOL)_containsKatakanaOrKanji;
- (BOOL)_containsSubstring:(id)arg1;
- (BOOL)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (BOOL)_endsSentence;
- (void)_enumerateLongCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned short)_firstChar;
- (id)_firstGrapheme;
- (unsigned int)_firstLongCharacter;
- (unsigned long long)_graphemeCount;
- (BOOL)_isDelete;
- (BOOL)_isIdeographicGlyphs;
- (BOOL)_isLeftAssociative;
- (BOOL)_isModifierSymbol;
- (BOOL)_isNaturallyRTL;
- (BOOL)_isNewlineOrReturn;
- (BOOL)_isOnlyIdeographs;
- (BOOL)_isPlainSpace;
- (BOOL)_isSpace;
- (BOOL)_isSpaceOrReturn;
- (BOOL)_isTripledPunctuation;
- (id)_lastGrapheme;
- (BOOL)_looksLikeEmailAddress;
- (BOOL)_looksLikeNumberInput;
- (BOOL)_looksLikeURL;
- (struct _NSRange)_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2;
- (struct _NSRange)_rangeOfLongCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (BOOL)_shouldBePaddedWithSpaces;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByComposingDiacriticsLogicalOrder:(BOOL)arg1 allowedCharacters:(CDUnknownBlockType)arg2;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer *)arg1;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(BOOL)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(BOOL)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (id)_stringByTrimmingLastCharacter;
- (BOOL)containsSubstring:(id)arg1;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (BOOL)endsSentence;
- (BOOL)isDelete;
- (BOOL)isLeftAssociative;
- (BOOL)isNaturallyRTL;
- (BOOL)isNewlineOrReturn;
- (BOOL)isPlainSpace;
- (BOOL)isSpace;
- (BOOL)isSpaceOrReturn;
- (BOOL)isTripledPunctuation;
- (BOOL)looksLikeEmailAddress;
- (BOOL)looksLikeNumberInput;
- (BOOL)looksLikeURL;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (id)stringByTrimmingLastCharacter;
@end

