//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchTextField.h>

@class NSHashTable, UIImage, UIView;

@interface SBHSearchTextField : UISearchTextField
{
    struct CGRect _placeholderBoundingRect;
    UIView *_backgroundView;
    NSHashTable *_styledViews;
    UIImage *_magnifyingGlassImage;
    UIImage *_cancelButtonImage;
    BOOL _alwaysHideLeadingView;
    long long _alignmentBehavior;
}

@property (nonatomic) long long alignmentBehavior; // @synthesize alignmentBehavior=_alignmentBehavior;

+ (long long)_derivedTextAlignmentForBehavior:(long long)arg1 hasSearchText:(BOOL)arg2 isEditing:(BOOL)arg3;
+ (id)borderColorForUserInterfaceStyle:(long long)arg1;
- (void).cxx_destruct;
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)_calculateEditingRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 isRTL:(BOOL)arg3;
- (double)_calculateHeightWithFont;
- (struct CGRect)_calculatePlaceholderRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 isRTL:(BOOL)arg3;
- (struct CGRect)_calculateTextRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 isRTL:(BOOL)arg3;
- (long long)_derivedTextAlignment;
- (long long)_derivedTextAlignmentIfEditing:(BOOL)arg1;
- (void)_didBeginEditing:(id)arg1;
- (void)_didEndEditing:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGRect)_frameForLeftViewWithinBounds:(struct CGRect)arg1 alignment:(long long)arg2;
- (struct CGRect)_frameForPlaceholderRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 isRTL:(BOOL)arg3 willOverflow:(BOOL *)arg4;
- (struct CGRect)_frameForRightViewWithinBounds:(struct CGRect)arg1 alignment:(long long)arg2;
- (BOOL)_hasSearchText;
- (void)_setContinuousCornerRadius:(double)arg1;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_textDidChange:(id)arg1;
- (void)_updateTextAlignmentForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (void)setAlignmentBehavior:(long long)arg1 animated:(BOOL)arg2;
- (void)setFont:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderVisualStyling;
- (void)updateStyleForClearButton;
- (void)updateStyleForLeftView;
- (void)updateStyleForPlaceholderView;
- (void)updateStyleForRightView;
- (void)updateVisualStyling;

@end

