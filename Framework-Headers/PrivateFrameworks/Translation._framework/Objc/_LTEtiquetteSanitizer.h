//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale;

__attribute__((visibility("hidden")))
@interface _LTEtiquetteSanitizer : NSObject
{
    NSDictionary *_replacementTree;
    NSLocale *_locale;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)arg1 language:(id)arg2;
- (id)initWithReplacementTokenDictionary:(id)arg1 language:(id)arg2;
- (id)matchesForString:(id)arg1;
- (id)replacementStringForString:(id)arg1 forToken:(id)arg2;
- (id)sanitizedStringForString:(id)arg1;
- (id)stringByReplacingMatches:(id)arg1 inString:(id)arg2;
- (id)treeForReplacementTokens:(id)arg1;

@end

