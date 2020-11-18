//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UITableConstantsCellProviding-Protocol.h>
#import <UIKitCore/_UICollectionViewListCellReorderControlDelegate-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UICellAccessoryManager, UILayoutGuide, UIView, _UICollectionViewListCellVisualProvider;
@protocol UITableConstants;

@interface UICollectionViewListCell : UICollectionViewCell <_UICollectionViewListCellReorderControlDelegate, UITableConstantsCellProviding>
{
    struct {
        unsigned int style:3;
        unsigned int isStyledAsHeader:1;
        unsigned int forceHeaderStylingDueToSPIOutlineDisclosureAccessory:1;
        unsigned int selectionStyle:1;
        unsigned int expanded:1;
        unsigned int needsUpdateAccessories:1;
        unsigned int hasCustomIndentationLevel:1;
        unsigned int hasCustomIndentationWidth:1;
        unsigned int cellSelectionTogglesExpansionState:1;
        unsigned int indentsAccessories:1;
        unsigned int separatorLayoutGuideLeadingReferencesPrimaryText:1;
    } _listCellFlags;
    _UICollectionViewListCellVisualProvider *_visualProvider;
    NSDictionary *_accessoriesByIdentifier;
    double _extraLeadingLayoutMarginForIndentation;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_separatorLayoutGuideHeightConstraint;
    NSLayoutConstraint *_separatorLayoutGuideLeadingConstraint;
    NSLayoutConstraint *_separatorLayoutGuideTrailingConstraint;
    UILayoutGuide *_separatorLayoutGuide;
    NSArray *_accessories;
    NSArray *_leadingAccessoryConfigurations;
    NSArray *_trailingAccessoryConfigurations;
    NSArray *_leadingEditingAccessoryConfigurations;
    NSArray *_trailingEditingAccessoryConfigurations;
    long long _indentationLevel;
    double _indentationWidth;
    id<UITableConstants> _constants;
    UICellAccessoryManager *_accessoryManager;
    long long _defaultIndentationLevel;
    id _itemIdentifier;
    CDUnknownBlockType _disclosureWasTappedHandler;
}

@property (nonatomic, getter=_expanded, setter=_setExpanded:) BOOL _expanded;
@property (copy, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;
@property (readonly, nonatomic, getter=_accessoryManager) UICellAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property (readonly, nonatomic, getter=_cellStyle) long long cellStyle;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants; // @synthesize constants=_constants;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_defaultIndentationLevel, setter=_setDefaultIndentationLevel:) long long defaultIndentationLevel; // @synthesize defaultIndentationLevel=_defaultIndentationLevel;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType disclosureWasTappedHandler; // @synthesize disclosureWasTappedHandler=_disclosureWasTappedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property (nonatomic) double indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property (nonatomic) BOOL indentsAccessories;
@property (strong, nonatomic, getter=_itemIdentifier, setter=_setItemIdentifier:) id itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations; // @synthesize leadingAccessoryConfigurations=_leadingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations; // @synthesize leadingEditingAccessoryConfigurations=_leadingEditingAccessoryConfigurations;
@property (readonly, nonatomic, getter=_minimumCellAccessoryMargin) double minimumCellAccessoryMargin;
@property (readonly, nonatomic, getter=_owningViewForSeparatorLayoutGuide) UIView *owningViewForSeparatorLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *separatorLayoutGuide;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations; // @synthesize trailingAccessoryConfigurations=_trailingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations; // @synthesize trailingEditingAccessoryConfigurations=_trailingEditingAccessoryConfigurations;

+ (id)_createDefaultContentViewWithFrame:(struct CGRect)arg1;
+ (id)_createVisualProviderForCell:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_adjustedRawLayoutMargins:(struct UIEdgeInsets)arg1 withLeadingLayoutMarginAdjustment:(double)arg2;
- (void)_applyCellAccessoriesToNormalConfiguration:(id)arg1 editingConfiguration:(id)arg2;
- (BOOL)_canFocusProgrammatically;
- (id)_cellAccessoriesForConfigurations:(id)arg1 isLeadingEdge:(BOOL)arg2;
- (id)_cellAccessoryForConfiguration:(id)arg1 isLeadingEdge:(BOOL)arg2 usingState:(id)arg3;
- (BOOL)_cellSelectionTogglesExpansionState;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (void)_constantsDidChange;
- (struct UIEdgeInsets)_contentViewInset;
- (BOOL)_contentViewShouldBeIndented;
- (void)_createAccessoryManager;
- (id)_createSystemTypeAccessoryViewWithCellAccessory:(id)arg1 orConfiguration:(id)arg2;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultBackgroundView;
- (long long)_defaultFocusStyle;
- (id)_defaultSelectedBackgroundView;
- (void)_deleteAccessoryTriggered;
- (id)_editingControlTintColorForStyle:(long long)arg1;
- (BOOL)_hasCustomSelectionAction;
- (id)_internalAccessoriesForCellAccessories:(id)arg1;
- (BOOL)_isAccompaniedSidebar;
- (BOOL)_isFocusableWhenStyledAsHeader;
- (void)_layoutAccessoriesAndContentView;
- (double)_leadingIndentation;
- (BOOL)_performCustomSelectionAction;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (BOOL)_removesHighlightedAndSelectedStatesForBackground;
- (void)_reorderControl:(id)arg1 didUpdateWithOffset:(struct CGPoint)arg2;
- (void)_reorderControlDidBeginReordering:(id)arg1;
- (void)_reorderControlDidEndReordering:(id)arg1 cancelled:(BOOL)arg2;
- (BOOL)_reorderControlShouldBeginReordering:(id)arg1;
- (void)_resetRawLayoutMargins;
- (struct NSDirectionalEdgeInsets)_sectionSeparatorInsetsFromLayoutAttributes:(id)arg1;
- (struct NSDirectionalEdgeInsets)_separatorInsetsFromLayoutGuide;
- (void)_setContentView:(id)arg1 addToHierarchy:(BOOL)arg2;
- (void)_setIndentationLevel:(long long)arg1;
- (void)_setIndentationWidth:(double)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setNeedsUpdateAccessories;
- (void)_setRawLayoutMargins:(struct UIEdgeInsets)arg1;
- (BOOL)_shouldIncreaseCellLeadingLayoutMarginForIndentation;
- (long long)_styleFromLayoutAttributes:(id)arg1;
- (long long)_tableStyle;
- (void)_toggleExpansionState;
- (void)_updateAccessoriesIfNeeded;
- (void)_updateAccessoryLayoutMetrics;
- (void)_updateCellSelectionTogglesExpansionState;
- (void)_updateConfigurationUsingState:(id)arg1;
- (void)_updateConstants;
- (void)_updateContentViewConstraintsIfNeeded;
- (void)_updateCurrentSystemTypeAccessoryViewsUsingState:(id)arg1;
- (void)_updateDefaultIndentationWidth;
- (void)_updateLeadingLayoutMarginForIndentation;
- (void)_updateSeparatorLayoutGuideForSectionSeparatorInsets:(struct NSDirectionalEdgeInsets)arg1;
- (void)_updateSeparatorLayoutGuideHeight;
- (void)_updateSystemTypeAccessoryView:(id)arg1 withCellAccessory:(id)arg2 orConfiguration:(id)arg3 usingState:(id)arg4;
- (id)_viewForMultiSelectAccessory;
- (BOOL)canBeEdited;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)safeAreaInsetsDidChange;
- (long long)selectionStyle;
- (void)setEditing:(BOOL)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
