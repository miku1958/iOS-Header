//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

#import <TestFlightCore/UITextFieldDelegate-Protocol.h>

@class NSString, TFFeedbackEntryShortText, UITextField;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell <UITextFieldDelegate>
{
    UITextField *_textField;
    TFFeedbackEntryShortText *_shortTextEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TFFeedbackEntryShortText *shortTextEntry; // @synthesize shortTextEntry=_shortTextEntry;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;

+ (id)_createTextFieldFontWithTraitCollection:(id)arg1;
+ (struct CGSize)_sizeToFitText:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets)_textFieldInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
- (void).cxx_destruct;
- (void)_configureTextFieldForContentType:(unsigned long long)arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayedDataString:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
