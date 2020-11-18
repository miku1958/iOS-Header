//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCellLayoutManager.h>

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (void)_textValueChanged:(id)arg1;
- (double)defaultTextFieldFontSizeForCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

