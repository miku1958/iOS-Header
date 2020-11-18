//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSString, UIImageView, UILabel, UIPasscodeField, UITextField;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UILabel *_enterLabel;
    UIPasscodeField *_passcodeField;
    UITextField *_textEntryField;
    UILabel *_failedLabel;
    UIImageView *_failedBackground;
    long long _failedAttemptCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *enterLabel; // @synthesize enterLabel=_enterLabel;
@property (nonatomic) long long failedAttemptCount; // @synthesize failedAttemptCount=_failedAttemptCount;
@property (strong, nonatomic) UIImageView *failedBackground; // @synthesize failedBackground=_failedBackground;
@property (strong, nonatomic) UILabel *failedLabel; // @synthesize failedLabel=_failedLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextField *textEntryField; // @synthesize textEntryField=_textEntryField;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)PIN;
- (void)dealloc;
- (id)initWithPrinterName:(id)arg1;
- (void)layoutSubviews;
- (void)showSuccess:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startPINInput;
- (void)stopPINInput;
- (void)textDidChange:(id)arg1;

@end

