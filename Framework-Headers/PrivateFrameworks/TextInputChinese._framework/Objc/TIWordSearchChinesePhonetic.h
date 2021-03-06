//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch
{
    CDUnknownBlockType _contactObserver;
    BOOL _fuzzyPinyinEnabled;
    BOOL _tenKeyPinyinEnabled;
    int _shuangpinType;
    NSArray *_fuzzyPinyinPairs;
}

@property (nonatomic) BOOL fuzzyPinyinEnabled; // @synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled;
@property (strong, nonatomic) NSArray *fuzzyPinyinPairs; // @synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs;
@property (nonatomic) int shuangpinType; // @synthesize shuangpinType=_shuangpinType;
@property (nonatomic) BOOL tenKeyPinyinEnabled; // @synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled;

+ (id)pinyinCharacterSetWithTones;
- (void).cxx_destruct;
- (void)addContact:(id)arg1 toVocabulary:(void *)arg2 toReadingPairs:(id)arg3;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (void)clearCacheForInputString:(id)arg1 keyboardInput:(id)arg2 selectedDisambiguationCandidateIndex:(unsigned long long)arg3;
- (void)clearObservers;
- (void)dealloc;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)arg1 firstSyllableLocked:(BOOL)arg2 reanalysisMode:(BOOL)arg3 hardwareKeyboardMode:(BOOL)arg4 predictionEnabled:(BOOL)arg5;
- (int)mecabraInputMethodType;
- (id)transLiterateReading:(id)arg1 withName:(id)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateAddressBook;
- (void)updateFuzzyPinyinSettings;
- (void)updateMecabraState;
- (void)updateShuangpinTypeWithReanalysisMode:(BOOL)arg1;

@end

