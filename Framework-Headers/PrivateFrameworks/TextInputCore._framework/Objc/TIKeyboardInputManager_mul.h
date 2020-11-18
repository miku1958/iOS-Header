//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager
{
    BOOL _isSuspended;
}

- (void)dealloc;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (void)enumerateInputModesWithBlock:(CDUnknownBlockType)arg1;
- (id)keyboardConfiguration;
- (struct LanguageModelContainer *)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (CDStruct_69b8fb94)lexiconInfoForInputMode:(id)arg1;
- (vector_4dc11a9b)lexiconInformationVector;
- (void)loadDictionaries;
- (id)resourceInputModes;
- (void)resume;
- (BOOL)shouldUpdateDictionary;
- (void)suspend;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (float)weightForInputMode:(id)arg1;

@end

