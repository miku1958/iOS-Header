//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, _ICTransientLexicon;

@interface _ICNamedEntityStore : NSObject
{
    NSMutableOrderedSet *_recentNamedEntityQueue;
    _ICTransientLexicon *_wordLexicon;
    _ICTransientLexicon *_phraseLexicon;
    NSArray *_lexicons;
    CDUnknownBlockType _wordFilteringBlock;
    CDUnknownBlockType _filteringBlock;
}

@property (copy, nonatomic) CDUnknownBlockType filteringBlock; // @synthesize filteringBlock=_filteringBlock;
@property (readonly, nonatomic) NSArray *lexicons; // @synthesize lexicons=_lexicons;

+ (id)lexiconViews;
+ (id)tokenize:(id)arg1;
- (void).cxx_destruct;
- (void)addEntity:(id)arg1 isDurable:(BOOL)arg2;
- (void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 source:(unsigned char)arg3 type:(unsigned char)arg4;
- (BOOL)areStringCharactersWhitelisted:(id)arg1;
- (struct USet *)exemplarSetForSupportedLocales;
- (id)filterWord:(id)arg1;
- (id)init;
- (BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2;
- (BOOL)isValidNamedEntity:(id)arg1 explanation:(id *)arg2;
- (void)reloadRecents;
- (void)removeAllEntries;
- (void)removeEntriesBySource:(unsigned char)arg1;
- (void)removeEntry:(id)arg1;
- (void)removeEntry:(id)arg1 source:(unsigned char)arg2;
- (void)updateQueue:(id)arg1 newEntity:(id)arg2;
- (void)updateQueueFromString:(id)arg1 newEntity:(id)arg2;

@end

