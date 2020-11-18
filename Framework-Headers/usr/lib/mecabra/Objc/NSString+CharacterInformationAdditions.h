//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CharacterInformationAdditions)
- (id)componentsByLanguage:(int)arg1;
- (id)firstCharacter;
- (id)pinyinStringFromPinyinWithToneNumber;
- (long long)simplifiedChineseCompare:(id)arg1;
- (id)stringByApplyingPinyinToneMarkToFirstSyllableWithToneNumber:(unsigned long long)arg1;
- (id)stringByStrippingDiacritics;
- (id)strokeStringFromNumberString;
- (id)toneFromPinyinSyllableWithNumber;
- (long long)traditionalChinesePinyinCompare:(id)arg1;
- (long long)traditionalChineseZhuyinCompare:(id)arg1;
- (id)zhuyinSyllableFromPinyinSyllable;
@end
