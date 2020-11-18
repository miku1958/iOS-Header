//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPRegexToolbox : NSObject
{
}

+ (id)emailSubjectPrefixRegex;
+ (id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3;
+ (BOOL)isRangeInsideQuotationMarks:(struct _NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3;
+ (BOOL)isRangeNearbyExclusionKeyword:(struct _NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3 language:(id)arg4;
+ (id)matchingKeywordResultsForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3;
+ (unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3;
+ (id)regexPatternForLanguageID:(id)arg1 eventVocabularyArray:(id)arg2;
+ (id)regularExpressionWithKey:(id)arg1 generator:(CDUnknownBlockType)arg2;

@end

