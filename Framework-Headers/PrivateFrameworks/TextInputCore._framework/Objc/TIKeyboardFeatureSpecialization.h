//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject
{
    struct USet *m_precomposedCharacterSet;
    struct USet *m_acceptableCharacterSet;
    TIInputMode *_inputMode;
    long long _currentUserInterfaceIdiom;
}

@property (nonatomic) long long currentUserInterfaceIdiom; // @synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom;
@property (readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;

+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;
+ (id)createSpecializationForInputMode:(id)arg1;
- (void).cxx_destruct;
- (id)accentKeyStringForKeyboardState:(id)arg1;
- (BOOL)acceptsCharacter:(unsigned int)arg1;
- (BOOL)allowsAutocorrectionOfValidWords;
- (BOOL)canHandleKeyHitTest;
- (struct USet *)createAcceptableCharacterSet;
- (struct TIInputManager *)createInputManager;
- (void)dealloc;
- (id)dictionaryInputMode;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)doesComposeText;
- (id)externalStringToInternal:(id)arg1;
- (id)initWithInputMode:(id)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)keyboardBehaviors;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)nonstopPunctuationCharacters;
- (const struct USet *)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (id)replacementForDoubleSpace;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)shouldExtendPriorWord;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (void)specializeInputManager:(struct TIInputManager *)arg1 forLayoutState:(id)arg2;
- (BOOL)supportsLearning;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)wordSeparator;

@end

