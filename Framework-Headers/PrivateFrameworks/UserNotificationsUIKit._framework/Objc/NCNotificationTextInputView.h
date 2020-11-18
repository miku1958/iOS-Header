//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/UITextViewDelegate-Protocol.h>

@class NCNotificationAction, NSString, UIButton, UIStackView, UITextView;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate>
{
    id<NCNotificationTextInputViewDelegate> _delegate;
    NCNotificationAction *_action;
    UIStackView *_horizontalStack;
    UITextView *_textView;
    UIButton *_button;
}

@property (strong, nonatomic) NCNotificationAction *action; // @synthesize action=_action;
@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationTextInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIStackView *horizontalStack; // @synthesize horizontalStack=_horizontalStack;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (double)_maximumTextViewHeight;
- (double)_textViewWidth;
- (void)_updateForTextChange;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void)setButtonTitle:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
