//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    SBUIButton *_okButton;
    BOOL _showsOkButton;
    UILabel *_promptLabel;
    BOOL _showsPromptLabel;
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property (readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property (nonatomic) BOOL showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property (nonatomic) BOOL showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;

+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+ (BOOL)_usesTextFieldForFirstResponder;
- (void).cxx_destruct;
- (void)_autofillForMesaWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getPasscodeFieldSize:(struct CGSize *)arg1 okButtonSize:(struct CGSize *)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_okButtonHit;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (struct CGSize)_viewSize;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end

