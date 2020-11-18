//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <UIKit/UICollectionViewTableAttributes-Protocol.h>
#import <UIKit/UICollectionViewTableLayoutSwipeActionPullViewDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UITable_Internal-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSSet, NSString, UICollectionViewTableCell, UICollectionViewTableLayoutSwipeActionPullView, UIColor, UIGobblerGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITableViewRowData, UIView, UIVisualEffect, _UIFeedbackStatesBehavior, _UISwipableTableViewCellDeleteScanlineView;
@protocol UICollectionViewDataSourceTableLayout, UICollectionViewDelegateTableLayout, UITableConstants;

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableLayoutSwipeActionPullViewDelegate, UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal>
{
    NSSet *_floatingElementKinds;
    BOOL _dontResetSwipedRow;
    UIGobblerGestureRecognizer *_swipeActionsGobblerGestureRecognizer;
    struct {
        unsigned int navigationGestureWasEnabledBeforeSwipeActions:1;
        unsigned int didDisableNavigationGesture:1;
        unsigned int deleteCancelationAnimationInProgress:1;
        unsigned int editingForSwipeDelete:1;
    } _tableLayoutFlags;
    BOOL _usesVariableMargins;
    BOOL _overlapsSectionHeaderViews;
    BOOL _showingIndex;
    BOOL _sectionContentInsetFollowsLayoutMargins;
    BOOL _cellLayoutMarginsFollowReadableWidth;
    double _rowHeight;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedRowHeight;
    double _estimatedSectionHeaderHeight;
    double _estimatedSectionFooterHeight;
    double _backgroundInset;
    double _topPadding;
    double _bottomPadding;
    double _sectionBorderWidth;
    double _sectionCornerRadius;
    UIColor *_accessoryBaseColor;
    UIColor *_multiselectCheckmarkColor;
    id<UITableConstants> _constants;
    double _rowSpacing;
    long long _separatorStyle;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UITableViewRowData *_rowData;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    NSIndexPath *_swipedIndexPath;
    UIPanGestureRecognizer *_swipeActionPanRecognizer;
    double _initialTranslation;
    double _initialDistance;
    double _confirmationTranslationAdjustment;
    UICollectionViewTableLayoutSwipeActionPullView *_leftSwipeView;
    UICollectionViewTableLayoutSwipeActionPullView *_rightSwipeView;
    _UISwipableTableViewCellDeleteScanlineView *_deleteScanLineView;
    UICollectionViewTableCell *_swipeToDeleteCell;
    _UIFeedbackStatesBehavior *_swipeActionFeedbackBehavior;
    struct CGRect _indexFrame;
    struct UIEdgeInsets _sectionContentInset;
    struct UIEdgeInsets _separatorInset;
}

@property (readonly, nonatomic, getter=_contentInset) struct UIEdgeInsets _contentInset;
@property (readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor; // @synthesize accessoryBaseColor=_accessoryBaseColor;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic, getter=_backgroundInset) double backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property (readonly, nonatomic, getter=_bottomPadding) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (nonatomic) BOOL cellLayoutMarginsFollowReadableWidth; // @synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth;
@property (nonatomic) double confirmationTranslationAdjustment; // @synthesize confirmationTranslationAdjustment=_confirmationTranslationAdjustment;
@property (strong, nonatomic, getter=_constants) id<UITableConstants> constants; // @synthesize constants=_constants;
@property (readonly, nonatomic, getter=_dataSource) id<UICollectionViewDataSourceTableLayout> dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_defaultSectionFooterHeight) double defaultSectionFooterHeight;
@property (readonly, nonatomic, getter=_defaultSectionHeaderHeight) double defaultSectionHeaderHeight;
@property (readonly, nonatomic, getter=_delegate) id<UICollectionViewDelegateTableLayout> delegate;
@property (strong, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property (strong, nonatomic) _UISwipableTableViewCellDeleteScanlineView *deleteScanLineView; // @synthesize deleteScanLineView=_deleteScanLineView;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property (readonly, nonatomic) double estimatedSectionFooterHeight; // @synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight;
@property (readonly, nonatomic) double estimatedSectionHeaderHeight; // @synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight;
@property (readonly, nonatomic, getter=_estimatesRowHeights) BOOL estimatesRowHeights;
@property (readonly, nonatomic, getter=_estimatesSectionFooterHeights) BOOL estimatesSectionFooterHeights;
@property (readonly, nonatomic, getter=_estimatesSectionHeaderHeights) BOOL estimatesSectionHeaderHeights;
@property (strong, nonatomic, getter=_floatingElementKinds, setter=_setFloatingElementKinds:) NSArray *floatingElementKinds;
@property (readonly, nonatomic, getter=_footerMarginWidth) double footerMarginWidth;
@property (readonly, nonatomic, getter=_footerRightMarginWidth) double footerRightMarginWidth;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_headerMarginWidth) double headerMarginWidth;
@property (readonly, nonatomic, getter=_headerRightMarginWidth) double headerRightMarginWidth;
@property (readonly, nonatomic, getter=_heightForTableFooter) double heightForTableFooter;
@property (readonly, nonatomic, getter=_heightForTableHeader) double heightForTableHeader;
@property (readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame; // @synthesize indexFrame=_indexFrame;
@property (nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property (nonatomic) double initialTranslation; // @synthesize initialTranslation=_initialTranslation;
@property (strong, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property (readonly, nonatomic, getter=_isTableHeaderAutohiding) BOOL isTableHeaderAutohiding;
@property (strong, nonatomic) UICollectionViewTableLayoutSwipeActionPullView *leftSwipeView; // @synthesize leftSwipeView=_leftSwipeView;
@property (readonly, nonatomic, getter=_marginWidth) double marginWidth;
@property (readonly, nonatomic) UIColor *multiselectCheckmarkColor; // @synthesize multiselectCheckmarkColor=_multiselectCheckmarkColor;
@property (readonly, nonatomic, getter=_numberOfSections) long long numberOfSections;
@property (readonly, nonatomic) BOOL overlapsSectionHeaderViews; // @synthesize overlapsSectionHeaderViews=_overlapsSectionHeaderViews;
@property (readonly, nonatomic, getter=_providesRowHeights) BOOL providesRowHeights;
@property (readonly, nonatomic, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property (strong, nonatomic) UICollectionViewTableLayoutSwipeActionPullView *rightSwipeView; // @synthesize rightSwipeView=_rightSwipeView;
@property (strong, nonatomic) UITableViewRowData *rowData; // @synthesize rowData=_rowData;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (readonly, nonatomic, getter=_rowSpacing) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property (readonly, nonatomic, getter=_sectionBorderWidth) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
@property (readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset; // @synthesize sectionContentInset=_sectionContentInset;
@property (readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) BOOL sectionContentInsetFollowsLayoutMargins; // @synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins;
@property (readonly, nonatomic, getter=_sectionCornerRadius) double sectionCornerRadius; // @synthesize sectionCornerRadius=_sectionCornerRadius;
@property (nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property (copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (strong, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property (nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property (nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly, nonatomic, getter=_shouldUseNewHeaderFooterBehavior) BOOL shouldUseNewHeaderFooterBehavior;
@property (readonly, nonatomic, getter=_shouldUseSearchBarHeaderBehavior) BOOL shouldUseSearchBarHeaderBehavior;
@property (readonly, nonatomic, getter=_isShowingIndex) BOOL showingIndex; // @synthesize showingIndex=_showingIndex;
@property (readonly, nonatomic, getter=_sidePadding) double sidePadding;
@property (readonly, nonatomic, getter=_style) long long style;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UIFeedbackStatesBehavior *swipeActionFeedbackBehavior; // @synthesize swipeActionFeedbackBehavior=_swipeActionFeedbackBehavior;
@property (strong, nonatomic) UIPanGestureRecognizer *swipeActionPanRecognizer; // @synthesize swipeActionPanRecognizer=_swipeActionPanRecognizer;
@property (strong, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UICollectionViewTableCell *swipeToDeleteCell; // @synthesize swipeToDeleteCell=_swipeToDeleteCell;
@property (strong, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
@property (readonly, nonatomic, getter=_tableContentInset) struct UIEdgeInsets tableContentInset;
@property (readonly, nonatomic, getter=_tableFooterView) UIView *tableFooterView;
@property (readonly, nonatomic, getter=_tableHeaderView) UIView *tableHeaderView;
@property (readonly, nonatomic, getter=_topPadding) double topPadding; // @synthesize topPadding=_topPadding;
@property (readonly, nonatomic) BOOL usesVariableMargins; // @synthesize usesVariableMargins=_usesVariableMargins;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_activePullView;
- (double)_adjustedXOffsetForInputOffset:(double)arg1;
- (void)_animateSwipeCancelation;
- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1;
- (void)_cleanupStateFromDeleteConfirmation;
- (void)_cleanupStateFromDeleteConfirmationForPendingAnimatedDelete:(BOOL)arg1;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
- (double)_destructiveConfirmationPoint;
- (id)_detailTextForHeaderInSection:(long long)arg1;
- (long long)_editingStyleForRowAtIndexPath:(id)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(id)arg1;
- (struct CGRect)_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2;
- (struct CGRect)_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(struct CGRect)arg3 floating:(BOOL *)arg4;
- (void)_handleSwipeActionsGobbler:(id)arg1;
- (BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (long long)_indentationLevelForRowAtIndexPath:(id)arg1;
- (void)_installSwipeActionsGobblerWithExcludedView:(id)arg1;
- (id)_layoutAttributesForCellWithIndexPath:(id)arg1;
- (id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2;
- (id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1;
- (id)_layoutAttributesForViewElementKind:(id)arg1;
- (BOOL)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 usingSpringWithStiffnessFactor:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1;
- (void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (void)_performAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4;
- (void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4;
- (struct UIEdgeInsets)_preferredLayoutMargins;
- (void)_removeSwipeActionsGobbler;
- (void)_resetSwipeViewPositionsImmediately;
- (void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2;
- (double)_rubberBandOffsetForOffset:(double)arg1 usingSwipeView:(id)arg2;
- (struct _NSRange)_sectionRangeForBounds:(struct CGRect)arg1;
- (void)_setSwipedIndexPath:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(double *)arg1;
- (BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(long long)arg2;
- (BOOL)_shouldHaveFooterViewForSection:(long long)arg1;
- (BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg1;
- (BOOL)_shouldHaveHeaderViewForSection:(long long)arg1;
- (BOOL)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (double)_spacingForExtraSeparators;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(BOOL)arg2;
- (double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2;
- (id)_swipedCell;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (id)_titleForFooterInSection:(long long)arg1;
- (id)_titleForHeaderInSection:(long long)arg1;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (struct CGRect)_visibleRect;
- (struct CGSize)collectionViewContentSize;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (id)deleteConfirmationIndexPath;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)resetSwipedRowWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 view:(id)arg3;
- (void)swipeRecognizerDidRecognize:(id)arg1;

@end

