//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, TIInputMode;

@interface CIMCandidateData : NSObject
{
    int _sortingMethod;
    TIInputMode *_inputMode;
    NSArray *_storedCandidates;
    NSMutableDictionary *_candidateInfoCache;
}

@property (strong, nonatomic) NSMutableDictionary *candidateInfoCache; // @synthesize candidateInfoCache=_candidateInfoCache;
@property (readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property (nonatomic) int sortingMethod; // @synthesize sortingMethod=_sortingMethod;
@property (strong, nonatomic) NSArray *storedCandidates; // @synthesize storedCandidates=_storedCandidates;

+ (BOOL)shouldShowZhuyinSortingMethod;
+ (id)sortTitleFromSortingMethod:(int)arg1;
- (void).cxx_destruct;
- (void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(BOOL)arg4;
- (id)candidateGroupsFromDictionary:(id)arg1 sortedKeys:(id)arg2;
- (id)candidatesSortedByEmoji:(id)arg1;
- (id)candidatesSortedByFrequency:(id)arg1 omittingEmoji:(BOOL)arg2;
- (id)candidatesSortedByMethod:(int)arg1 omittingEmoji:(BOOL)arg2;
- (id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(BOOL)arg2 zhuyin:(BOOL)arg3;
- (id)candidatesSortedByRadical:(id)arg1 simplified:(BOOL)arg2 collationLocale:(id)arg3;
- (id)candidatesSortedByStrokes:(id)arg1 simplified:(BOOL)arg2;
- (id)candidatesSortedByWubi:(id)arg1 omittingEmoji:(BOOL)arg2;
- (void)clearCache;
- (id)init;
- (id)initWithInputMode:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2;
- (id)wordPropertyDictionaryForCandidates:(id)arg1 isSimplified:(BOOL)arg2;

@end

