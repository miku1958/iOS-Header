//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

#import <TestFlightCore/UITextViewDelegate-Protocol.h>

@class NSString, TFFeedbackEntryLongText, UITextView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate>
{
    UITextView *_textView;
    TFFeedbackEntryLongText *_longTextEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TFFeedbackEntryLongText *longTextEntry; // @synthesize longTextEntry=_longTextEntry;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;

+ (double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2;
+ (id)_createTextViewFontForTraitCollection:(id)arg1;
+ (struct CGSize)_sizeToFitText:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets)_textViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
- (void).cxx_destruct;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateCellHeightForTextIfNecessary;
- (void)_updateCellHeightForTextUpdatesInTableView:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayedDataString:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
