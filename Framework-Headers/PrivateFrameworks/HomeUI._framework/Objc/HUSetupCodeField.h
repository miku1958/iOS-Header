//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/UITextFieldDelegate-Protocol.h>

@class HUSetupCodeFieldItem, NSArray, NSString, UIStackView, UITextField;
@protocol HUSetupCodeFieldDelegate;

@interface HUSetupCodeField : UIView <UITextFieldDelegate>
{
    id<HUSetupCodeFieldDelegate> _delegate;
    NSArray *_items;
    HUSetupCodeFieldItem *_activeItem;
    double _itemSpacing;
    UITextField *_hiddenInputField;
    UIStackView *_codeFieldItemsView;
}

@property (weak, nonatomic) HUSetupCodeFieldItem *activeItem; // @synthesize activeItem=_activeItem;
@property (strong, nonatomic) UIStackView *codeFieldItemsView; // @synthesize codeFieldItemsView=_codeFieldItemsView;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUSetupCodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UITextField *hiddenInputField; // @synthesize hiddenInputField=_hiddenInputField;
@property (nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSString *setupCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateLast;
- (void)_activateNext;
- (void)_setupCodeFieldItems;
- (void)_updateInterfaceForCurrentTraitCollection;
- (void)clear;
- (void)fieldTapped:(id)arg1;
- (void)hideKeypad;
- (id)init;
- (id)initWithCodeDigits:(unsigned long long)arg1;
- (void)showKeypad;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

