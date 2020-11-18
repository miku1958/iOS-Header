//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKTableViewCell.h>

#import <PassKit/PKDatePickerDelegate-Protocol.h>
#import <PassKit/UITextFieldDelegate-Protocol.h>

@class NSString, PKDatePicker, PKPaymentSetupField, UIColor;
@protocol PKPaymentSetupFieldCellDelegate;

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate>
{
    PKDatePicker *_dateInputView;
    BOOL _ignoreCurrentValueChangedNotifications;
    BOOL _enabled;
    BOOL _shouldDrawSeperator;
    BOOL _shouldDrawFullWidthSeperator;
    BOOL _canResignFirstResponder;
    id<PKPaymentSetupFieldCellDelegate> _delegate;
    PKPaymentSetupField *_paymentSetupField;
    double _minimumTextLabelWidth;
    UIColor *_editableTextFieldTextColor;
    UIColor *_editableTextFieldDisabledTextColor;
    UIColor *_editableTextFieldCameraCapturedTextColor;
}

@property (nonatomic) BOOL canResignFirstResponder; // @synthesize canResignFirstResponder=_canResignFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPaymentSetupFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIColor *editableTextFieldCameraCapturedTextColor; // @synthesize editableTextFieldCameraCapturedTextColor=_editableTextFieldCameraCapturedTextColor;
@property (copy, nonatomic) UIColor *editableTextFieldDisabledTextColor; // @synthesize editableTextFieldDisabledTextColor=_editableTextFieldDisabledTextColor;
@property (copy, nonatomic) UIColor *editableTextFieldTextColor; // @synthesize editableTextFieldTextColor=_editableTextFieldTextColor;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property (strong, nonatomic) PKPaymentSetupField *paymentSetupField; // @synthesize paymentSetupField=_paymentSetupField;
@property (nonatomic) BOOL shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property (nonatomic) BOOL shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
@property (readonly) Class superclass;

+ (double)minimumCellHeight;
+ (id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2;
+ (id)reuseIdentifier;
+ (long long)tableViewCellStyle;
- (void)_applyDefaultValues;
- (void)_editableTextFieldDidBeginEditing:(id)arg1;
- (void)_editableTextFieldValueChanged:(id)arg1;
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1;
- (void)_pullCurrentValueFromField;
- (void)_pushCurrentValueToField;
- (struct CGRect)_separatorFrame;
- (void)_updateDisplay:(BOOL)arg1;
- (void)_updateDisplayForFieldTypeDate:(id)arg1;
- (void)_updateDisplayForFieldTypeText:(id)arg1;
- (void)datePicker:(id)arg1 didChangeDate:(id)arg2;
- (void)dealloc;
- (double)heightForWidth:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupField:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier *)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updatePaymentSetupFieldWithCurrentCellValue;

@end

