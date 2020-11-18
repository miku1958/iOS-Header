//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleEditingCell.h>

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UIDatePicker, UIViewController;

__attribute__((visibility("hidden")))
@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate>
{
    UIDatePicker *_datePicker;
    UIViewController *_contentViewController;
}

@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (strong, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)dateChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)prepareForReuse;
- (void)regainFocus;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end

