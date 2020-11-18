//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell
{
    CNPostalAddressEditorView *_addressEditor;
}

@property (strong, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void).cxx_destruct;
- (id)firstResponderItem;
- (void)layoutChanged:(id)arg1;
- (void)layoutMarginsDidChange;
- (double)leftValueMargin;
- (void)setBackgroundColor:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)valueChanged:(id)arg1;
- (id)valueView;
- (id)variableConstraints;

@end
