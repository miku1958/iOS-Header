//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UITableViewCellLayoutManager : NSObject
{
}

+ (id)_externalDetailTextColor;
+ (id)_externalTextColor;
+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;
- (struct CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 rowWidth:(double)arg3;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3;
- (struct CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3;
- (struct CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3;
- (struct CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (struct CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 rowWidth:(double)arg4;
- (double)_contentRectLeadingOffsetForCell:(id)arg1 editingState:(BOOL)arg2 rowWidth:(double)arg3;
- (BOOL)_editControlOnSameSideAsReorderControlForCell:(id)arg1;
- (struct CGRect)_editControlRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect)_editingAccessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (void)_layoutFocusGuidesForCell:(id)arg1;
- (struct CGRect)_reorderControlRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect)_reorderSeparatorRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (void)_updateFocusGuidesForCell:(id)arg1 editing:(BOOL)arg2;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (BOOL)accessoryShouldAppearForCell:(id)arg1;
- (BOOL)accessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (void)applyCarPlayDefaultValuesToDetailTextLabel:(id)arg1 inCell:(id)arg2;
- (void)applyCarPlayDefaultValuesToTextLabel:(id)arg1 inCell:(id)arg2;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (id)badgeForCell:(id)arg1;
- (void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (double)contentIndentationForCell:(id)arg1;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (id)customAccessoryViewForCell:(id)arg1 editing:(BOOL)arg2;
- (id)defaultBadgeForCell:(id)arg1;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)editControlShouldAppearForCell:(id)arg1;
- (BOOL)editControlShouldFadeForCell:(id)arg1;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (id)editableTextFieldForCell:(id)arg1;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (BOOL)editingAccessoryShouldAppearForCell:(id)arg1;
- (BOOL)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(BOOL)arg5;
- (id)imageViewForCell:(id)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (struct CGSize)optimumSizeForLabel:(id)arg1 inTotalTextRect:(struct CGRect)arg2 minimizeWidthOnVerticalOverflow:(BOOL)arg3 preferSingleLineWidth:(BOOL)arg4;
- (struct CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (BOOL)reorderControlShouldAppearForCell:(id)arg1;
- (BOOL)reorderControlShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (struct CGRect)reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (BOOL)reorderSeparatorShouldAppearForCell:(id)arg1;
- (BOOL)reorderSeparatorShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3;
- (struct CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)shouldApplyAccessibilityLargeTextLayoutForCell:(id)arg1;
- (BOOL)shouldIncreaseMarginForImageViewInCell:(id)arg1;
- (BOOL)shouldStackAccessoryViewVerticallyForCell:(id)arg1 editing:(BOOL)arg2;
- (struct CGRect)standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(BOOL)arg2;
- (id)textLabelForCell:(id)arg1;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3;

@end

