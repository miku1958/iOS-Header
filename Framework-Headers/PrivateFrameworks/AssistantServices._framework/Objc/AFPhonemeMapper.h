//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSRegularExpression, NSString;

@interface AFPhonemeMapper : NSObject
{
    NSString *_languageCode;
    NSDictionary *_phonemeMap;
    NSRegularExpression *_regex;
}

+ (id)_buildRegexMatchingSubstrings:(id)arg1;
+ (id)_mapForLanguageCode:(id)arg1;
- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)arg1;
- (id)stringByReplacingPhonemesInString:(id)arg1;

@end

