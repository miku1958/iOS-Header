//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <PhotoLibrary/UITextFieldDelegate-Protocol.h>
#import <PhotoLibrary/UITextViewDelegate-Protocol.h>

@class NSString, PLTextView, UILabel, UITextField;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    BOOL _forceFirstResponder;
    int _cellStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int style; // @synthesize style=_cellStyle;
@property (readonly) Class superclass;

+ (id)posterCellIdentifier;
- (void)_textFieldChanged;
- (BOOL)becomeFirstResponder;
- (struct CGSize)contentSize;
- (void)dealloc;
- (void)forceFirstResponder:(BOOL)arg1;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect)arg1 cellStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 multiLine:(BOOL)arg2;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setValue:(id)arg1;
- (id)sizeTextLabel;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (id)value;

@end
