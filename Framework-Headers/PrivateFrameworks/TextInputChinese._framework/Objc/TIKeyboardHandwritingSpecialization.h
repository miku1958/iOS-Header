//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization
{
}

- (BOOL)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (id)replacementForDoubleSpace;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsLearning;
- (id)wordSeparator;

@end

