//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIRecentInputTableCell : UITableViewCell
{
    UILabel *_floatingLabel;
    long long _blurEffectStyle;
    UITextInputTraits *_textInputTraits;
}

@property (nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property (strong, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
@property (strong, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property (readonly, nonatomic) _UIFloatingContentView *tvFloatingView;

+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;
+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_tvIsDarkMode;
- (void)_updateAppearance;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

