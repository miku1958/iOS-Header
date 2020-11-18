//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFTitleView.h>

@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView
{
    BFFPasscodeInputView *_passcodeInputView;
    UIViewController *_passcodeViewController;
    struct CGRect _currentKeyboardFrame;
}

@property (nonatomic) struct CGRect currentKeyboardFrame; // @synthesize currentKeyboardFrame=_currentKeyboardFrame;
@property (weak, nonatomic) UIViewController *passcodeViewController; // @synthesize passcodeViewController=_passcodeViewController;

- (void).cxx_destruct;
- (void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (id)passcodeInputView;
- (void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2;

@end
