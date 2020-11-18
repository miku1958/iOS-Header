//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyEditingCell.h>

#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)dealloc;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (void)textFieldChanged:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)valueView;
- (id)variableConstraints;

@end
