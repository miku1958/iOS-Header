//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSCountedSet, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>
{
    NSLocale *_dominantLocale;
    NSCountedSet *_localeDetectionCount;
    NSCountedSet *_unsupportedLanguageCounts;
}

@property (readonly, copy, nonatomic) NSLocale *dominantLocale; // @synthesize dominantLocale=_dominantLocale;
@property (readonly, copy, nonatomic) NSCountedSet *localeDetectionCount; // @synthesize localeDetectionCount=_localeDetectionCount;
@property (readonly, copy, nonatomic) NSCountedSet *unsupportedLanguageCounts; // @synthesize unsupportedLanguageCounts=_unsupportedLanguageCounts;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedLocales:(id)arg1 unknownLanguages:(id)arg2;
- (id)initWithDetectionCounts:(id)arg1 availableLocales:(id)arg2;

@end

