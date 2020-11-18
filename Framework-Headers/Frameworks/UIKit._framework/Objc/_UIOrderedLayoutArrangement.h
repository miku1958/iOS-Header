//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UILayoutArrangement.h>

#import <UIKit/_UIOLAPropertySource-Protocol.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource>
{
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraints;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    double _proportionalFillDenominator;
    BOOL _itemOrderingChanged;
    BOOL _itemFittingSizeChanged;
    BOOL _baselineRelativeArrangement;
    double _spacing;
    long long _distribution;
}

@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged; // @synthesize _itemOrderingChanged;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) double spacing; // @synthesize spacing=_spacing;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;
- (void).cxx_destruct;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (void)_adjustConstraintConstantsIfPossible;
- (id)_baselineViewVendTallest:(BOOL)arg1 forFirstBaseline:(BOOL)arg2;
- (double)_calculatedIntrinsicHeight;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_cleanUpGuides;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_clearAllConstraintsArrays;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (double)_expectedEdgeToEdgeSpacingForFirstItem:(id)arg1 secondItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (id)_firstVisibleItem;
- (BOOL)_hasStaleConfiguration;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (BOOL)_itemCountChanged;
- (id)_lastVisibleItem;
- (long long)_minAttributeForGapConstraint;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (id)_orderedConfigurationHistory;
- (id)_orderedPropertySource;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (id)_tallestItem;
- (void)_trackChangesAffectingExternalBaselineConstraints:(CDUnknownBlockType)arg1;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;
- (void)_updateArrangementConstraints;
- (void)_updateConfigurationHistory;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;
- (BOOL)_wantsProportionalDistribution;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItem:(id)arg1;

@end

