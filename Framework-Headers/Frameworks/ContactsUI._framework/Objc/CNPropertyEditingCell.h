//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyCell.h>

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate>
{
    UIButton *_labelButton;
    CNRepeatingGradientSeparatorView *_vseparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;

+ (BOOL)wantsChevron;
+ (BOOL)wantsStandardConstraints;
- (void).cxx_destruct;
- (id)constantConstraints;
- (void)dealloc;
- (double)effectiveLabelWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
- (id)labelView;
- (double)leftValueMargin;
- (double)minCellHeight;
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)regainFocus;
- (void)setValueTextAttributes:(id)arg1;
- (void)setVseparatorHidden:(BOOL)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)valueString;
- (id)variableConstraints;

@end

