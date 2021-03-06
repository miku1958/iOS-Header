//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class NSMutableArray, UIView;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteLastCharacter;
- (struct CGRect)_entryFieldBoundsWithXOffset:(double)arg1;
- (struct UIEdgeInsets)_entryFieldPaddingOutsideRing;
- (BOOL)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (struct CGSize)_viewSize;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2;
- (void)reset;

@end

