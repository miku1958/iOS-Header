//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableConstants-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_TV : NSObject <UITableConstants>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConstants;
- (id)_defaultCheckmarkImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (id)_defaultDisclosureImageForCell:(id)arg1;
- (id)_defaultInsertImageForUserInterfaceStyle:(long long)arg1;
- (struct UIEdgeInsets)_defaultLayoutMargins;
- (id)_defaultMultiSelectNotSelectedImageForUserInterfaceStyle:(long long)arg1;
- (id)_defaultMultiSelectSelectedImageForUserInterfaceStyle:(long long)arg1;
- (double)_defaultNeighborPadding;
- (id)_defaultReorderControlImageForUserInterfaceStyle:(long long)arg1;
- (id)_kitImageNamed:(id)arg1 withTint:(id)arg2 flippedForRightToLeftLayoutDirection:(BOOL)arg3;
- (double)_symbolImageLayoutSizeForTraitCollection:(id)arg1;
- (id)_symbolImageNamed:(id)arg1 font:(id)arg2 cell:(id)arg3;
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(BOOL)arg2 sidebarStyle:(BOOL)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(BOOL)arg2 sidebarStyle:(BOOL)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultAlphaForReorderingCell;
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (double)defaultBackgroundPaddingForTableViewStyle:(long long)arg1;
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;
- (double)defaultCellContentLeadingPaddingForOutline:(BOOL)arg1;
- (double)defaultCellContentTrailingPadding;
- (double)defaultCellCornerRadius;
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;
- (id)defaultCheckmarkImageForCell:(id)arg1;
- (double)defaultContentAccessoryPadding;
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDeleteImageForCell:(id)arg1;
- (id)defaultDeleteImageForUserInterfaceStyle:(long long)arg1;
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(unsigned long long)arg3;
- (id)defaultDetailTextColorForUserInterfaceStyle:(long long)arg1;
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;
- (double)defaultEditAndUpdateAnimationDuration;
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;
- (id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;
- (id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(BOOL)arg2;
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderFooterBackgroundColorForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floatingHeaderFooter:(BOOL)arg3;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(BOOL)arg2;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;
- (id)defaultImageTintColorForState:(unsigned long long)arg1;
- (double)defaultImageToTextPaddingForOutline:(BOOL)arg1;
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(BOOL)arg1 traitCollection:(id)arg2;
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;
- (double)defaultIndentationWidthForSidebarStyle:(BOOL)arg1;
- (id)defaultInsertImageForCell:(id)arg1;
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(BOOL)arg2;
- (BOOL)defaultLabelAllowsTighteningForTruncationForSidebar:(BOOL)arg1 traitCollection:(id)arg2;
- (double)defaultLabelMinimumScaleFactorForSidebar:(BOOL)arg1 traitCollection:(id)arg2;
- (long long)defaultLabelNumberOfLinesForSidebar:(BOOL)arg1 traitCollection:(id)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
- (double)defaultMarginWidthForTableView:(id)arg1;
- (double)defaultMaskGradientHeightForTableView:(id)arg1;
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;
- (double)defaultPaddingBetweenHeaderAndRows;
- (double)defaultPaddingBetweenRows;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(BOOL)arg4;
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;
- (BOOL)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id)arg1;
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;
- (double)defaultSectionFooterHeightForTableView:(id)arg1;
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
- (BOOL)defaultSelectionFollowsFocus;
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(unsigned long long)arg4;
- (id)defaultTextColorForUserInterfaceStyle:(long long)arg1;
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
- (BOOL)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(BOOL)arg4;
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;
- (BOOL)reorderingCellWantsShadows;
- (BOOL)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(BOOL)arg2;
- (BOOL)shouldUseDefaultTableLayoutMarginsAsContentInsets;
- (id)sidebarVariant;
- (BOOL)supportsUserInterfaceStyles;
- (id)variantForActive:(BOOL)arg1;

@end

