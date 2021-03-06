//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextReplacementGenerator.h>

@class TIKeyboardCandidate, UITextChecker;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator
{
    BOOL _showRevertingAutocorrectionInPredictionView;
    BOOL _forceHistoryReplacement;
    BOOL _forceAutocorrectionGuesses;
    BOOL _forceSpellingGuesses;
    UITextChecker *_textChecker;
    TIKeyboardCandidate *_autocorrectionRecord;
    unsigned long long _maxEditDistance;
    unsigned long long _maxCountAfterAutocorrectionGuesses;
    unsigned long long _maxCountAfterSpellingGuesses;
}

@property (strong, nonatomic) TIKeyboardCandidate *autocorrectionRecord; // @synthesize autocorrectionRecord=_autocorrectionRecord;
@property (nonatomic) BOOL forceAutocorrectionGuesses; // @synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses;
@property (nonatomic) BOOL forceHistoryReplacement; // @synthesize forceHistoryReplacement=_forceHistoryReplacement;
@property (nonatomic) BOOL forceSpellingGuesses; // @synthesize forceSpellingGuesses=_forceSpellingGuesses;
@property (nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses; // @synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses;
@property (nonatomic) unsigned long long maxCountAfterSpellingGuesses; // @synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses;
@property (nonatomic) unsigned long long maxEditDistance; // @synthesize maxEditDistance=_maxEditDistance;
@property (strong, nonatomic) UITextChecker *textChecker; // @synthesize textChecker=_textChecker;

- (void).cxx_destruct;
- (void)addAutocorrectionGuessesToReplacements:(id)arg1;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;
- (id)init;
- (BOOL)isStringMisspelled:(id)arg1;
- (BOOL)isStringToReplaceMisspelled;
- (id)replacements;

@end

