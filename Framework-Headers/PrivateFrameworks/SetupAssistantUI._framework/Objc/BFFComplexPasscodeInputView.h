//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFPasscodeInputView.h>

#import <SetupAssistantUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate>
{
    UITextField *_passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layout;
- (id)initWithFrame:(struct CGRect)arg1 numericOnly:(BOOL)arg2;
- (void)layoutSubviews;
- (id)passcode;
- (id)passcodeDisplayView;
- (void)setPasscode:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
