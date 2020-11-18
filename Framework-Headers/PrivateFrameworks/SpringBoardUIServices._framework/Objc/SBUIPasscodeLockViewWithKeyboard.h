//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate-Protocol.h>

@class NSString, SBPasscodeKeyboardAnimator, SBUIAlphanumericPasscodeEntryField, UIControl, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>
{
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    BOOL _usesLightStyle;
    BOOL _isResigningResponderStatus;
    BOOL _keyboardVisible;
    double _keyboardHeightOffset;
    BOOL _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILabel *statusField; // @synthesize statusField=_statusField;
@property (strong, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_alphanumericPasscodeEntryField;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidRequestDismissalNotification:(id)arg1;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (double)_keyboardToEntryFieldOffset;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (double)_largeTextEmergencyButtonMaxWidth;
- (void)_layoutForMinimizationState:(BOOL)arg1;
- (void)_layoutStatusView;
- (void)_luminanceBoostDidChange;
- (id)_newStatusField;
- (id)_newStatusSubtitleView;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_setKeyboardTracksLockView:(BOOL)arg1;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (double)_statusTitleWidth;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_updateFont;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1;
- (id)_viewForKeyboardTracking;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithLightStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (id)passcode;
- (BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;

@end

