//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NCNotificationAction, UIButton, UIStackView, UITextField;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView
{
    id<NCNotificationTextInputViewDelegate> _delegate;
    NCNotificationAction *_action;
    UIStackView *_horizontalStack;
    UITextField *_textField;
    UIButton *_button;
}

@property (strong, nonatomic) NCNotificationAction *action; // @synthesize action=_action;
@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (weak, nonatomic) id<NCNotificationTextInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIStackView *horizontalStack; // @synthesize horizontalStack=_horizontalStack;
@property (strong, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setButtonTitle:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

