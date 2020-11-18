//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : NSObject
{
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer *_tokenizer;
}

@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSArray *sectionTitles;

+ (id)collationWithDictionary:(id)arg1;
+ (id)currentCollation;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (struct __CFStringTokenizer *)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;

@end

