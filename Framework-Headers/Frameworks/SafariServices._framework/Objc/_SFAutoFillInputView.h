//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class NSMutableArray, UIButton, UILabel, _SFTextSuggestion;
@protocol _SFAutoFillInputViewDelegate;

@interface _SFAutoFillInputView : UIInputView
{
    _SFTextSuggestion *_suggestion;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
    id<_SFAutoFillInputViewDelegate> _delegate;
}

@property (weak, nonatomic) id<_SFAutoFillInputViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_fillCredential:(id)arg1;
- (void)_showMorePasswords:(id)arg1;
- (void)_showStandardKeyboard:(id)arg1;
- (void)_updateFillCredentialButtonLabelMetrics;
- (id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

