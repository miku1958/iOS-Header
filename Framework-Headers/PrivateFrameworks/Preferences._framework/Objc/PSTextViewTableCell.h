//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import <Preferences/UITextContentViewDelegate-Protocol.h>

@class NSString, PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate>
{
    PSTextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PSTextView *textView;

- (void).cxx_destruct;
- (void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)cellRemovedFromView;
- (void)drawTitleInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setValue:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (void)textContentViewDidEndEditing:(id)arg1;

@end

