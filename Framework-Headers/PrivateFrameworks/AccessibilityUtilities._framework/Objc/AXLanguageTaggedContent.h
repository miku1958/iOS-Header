//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLinguisticTagger, NSMutableArray, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    BOOL _predictedByTagger;
    BOOL _tagged;
    BOOL _splitContentOnNewlines;
    NSMutableArray *_tags;
    NSLinguisticTagger *_linguisticTagger;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
}

@property (readonly, nonatomic) NSString *content;
@property (strong, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property (strong, nonatomic) NSLinguisticTagger *linguisticTagger; // @synthesize linguisticTagger=_linguisticTagger;
@property (nonatomic) BOOL splitContentOnNewlines; // @synthesize splitContentOnNewlines=_splitContentOnNewlines;
@property (nonatomic, getter=isTagged) BOOL tagged; // @synthesize tagged=_tagged;
@property (strong, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property (strong, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property (copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;

- (void).cxx_destruct;
- (void)_addTag;
- (BOOL)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (id)ambiguousLangMaps;
- (id)description;
- (void)enumeratePredictedTags:(CDUnknownBlockType)arg1;
- (void)enumerateUnpredictedTags:(CDUnknownBlockType)arg1;
- (BOOL)hasOnlyNonWesternLangMaps;
- (BOOL)hasOnlyWesternLangMaps;
- (id)initWithContent:(id)arg1;
- (BOOL)langMapIsSignificant:(id)arg1;
- (id)primaryAmbiguousDialect;
- (id)primaryUnambiguousDialect;
- (id)significantAmbiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (void)tagContent;
- (id)unambiguousLangMaps;
- (void)updateTagsForLocalePrefChange;

@end

