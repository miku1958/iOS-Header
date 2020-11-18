//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextHostLayout.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSMutableDictionary, NSString, TSTInfo, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableModel, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTLayout : TSWPTextHostLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>
{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    struct CGRect mCanvasVisibleRect;
    struct CGRect mCanvasSafeRect;
    struct CGRect mPreviousVisibleStrokeFrame;
    BOOL mProcessChangesFiltering;
    BOOL mTabsVisible;
    BOOL mTableNameVisibilityIsValid;
    BOOL mTableNameVisible;
    BOOL mNewCanvasRevealedHorizontally;
    BOOL mNewCanvasRevealedVertically;
    BOOL mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        struct CGSize scaleToFitParent;
        struct CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    struct CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    NSMutableDictionary *mAttachmentCellLayouts;
    struct UIEdgeInsets mCachedPaddingForEditingCell;
    struct CGRect mComputedEditingCellContentFrame;
    int mCachedVerticalAlignmentForEditingCell;
    struct CGSize mAdjustableTableSize;
    struct CGSize mFixedTableSize;
    struct CGSize mCapturedStrokeFrameSizeForInline;
    struct TSUCellRect mEditingSpillingTextRange;
    struct TSUCellRect mPrevEditingSpillingTextRange;
    int mContainedTextEditorParagraphAlignment;
    BOOL mContainedTextEditorTextWraps;
    BOOL mRemovingContainedTextEditorLayout;
    BOOL mContainedTextEditorSpills;
    struct CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
    BOOL mShouldUpdateAttachmentChildren;
    unsigned long long mPageCount;
    unsigned long long mPageNumber;
}

@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) struct CGRect computedEditingCellContentFrame;
@property (strong, nonatomic) TSWPLayout *containedTextEditingLayout; // @synthesize containedTextEditingLayout=mContainedTextEditingLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct TSUCellRect editingSpillingTextRange; // @synthesize editingSpillingTextRange=mEditingSpillingTextRange;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property (strong, nonatomic) TSTLayoutHint *layoutHint; // @synthesize layoutHint=mLayoutHint;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (strong, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=mMasterLayout;
@property (nonatomic) BOOL newCanvasRevealedHorizontally; // @synthesize newCanvasRevealedHorizontally=mNewCanvasRevealedHorizontally;
@property (nonatomic) BOOL newCanvasRevealedVertically; // @synthesize newCanvasRevealedVertically=mNewCanvasRevealedVertically;
@property (readonly, nonatomic) struct UIEdgeInsets paddingForEditingCell; // @synthesize paddingForEditingCell=mCachedPaddingForEditingCell;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageNumber;
@property (nonatomic) struct TSUCellRect prevEditingSpillingTextRange; // @synthesize prevEditingSpillingTextRange=mPrevEditingSpillingTextRange;
@property (nonatomic) BOOL processChangesFiltering; // @synthesize processChangesFiltering=mProcessChangesFiltering;
@property (nonatomic) struct CGSize scaleToFit;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (strong, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // @synthesize spaceBundle=mSpaceBundle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) double textScaleFactor;

- (struct CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forScrollingToSelectionPath:(id)arg2 forZoom:(BOOL)arg3;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (struct CGRect)alignmentFrame;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned int)arg2 transform:(struct CGAffineTransform)arg3 viewScale:(double)arg4 inset:(double)arg5 clipToVisibleRect:(BOOL)arg6 block:(CDUnknownBlockType)arg7;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canRotateChildLayout:(id)arg1;
- (BOOL)canvasShouldScrollForSelectionPath:(id)arg1;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)children;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (BOOL)inFindReplaceMode;
- (BOOL)inPrintPreviewMode;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
- (id)initialInfoGeometry;
- (struct CGSize)initialTextSize;
- (id)inspectorGeometry;
- (void)invalidate;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateLayoutSpaceCoordinates;
- (void)invalidateLayoutSpaceCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateLayoutSpaceCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateLayoutSpaceTableOffsets;
- (void)invalidatePosition;
- (void)invalidateSize;
- (void)invalidateTableNameVisibility;
- (BOOL)isBeingManipulated;
- (BOOL)isDraggable;
- (BOOL)isStrokeEditing;
- (BOOL)isZoomedEditing;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)iterateCellsInRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)layoutGeometryFromInfo;
- (struct CGRect)maskRectForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (int)naturalAlignmentForCellID:(struct TSUCellCoord)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (BOOL)orderedBefore:(id)arg1;
- (struct CGRect)p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct TSUCellCoord)p_cellIDForWPLayout:(id)arg1;
- (struct CGRect)p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(struct CGSize)arg2 editingSpillRange:(struct TSUCellRect *)arg3;
- (int)p_defaultAlignmentForTableWritingDirection;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (BOOL)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
- (struct CGRect)p_maskRectForRichTextLayout:(id)arg1;
- (struct CGRect)p_maskRectForTextEditingLayout:(id)arg1;
- (struct TSUCellRect)p_maximumSpillRangeForCellID:(struct TSUCellCoord)arg1;
- (struct CGRect)p_nonAutosizedFrameForRichTextLayout:(id)arg1;
- (struct CGRect)p_nonAutosizedFrameForTextEditingLayout:(id)arg1;
- (void)p_prepareAttachmentCells;
- (struct CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (struct TSUCellRect)p_spillRangeForMaskingRichTextLayout:(id)arg1;
- (struct TSUCellRect)p_spillRangeToRightForCellID:(struct TSUCellCoord)arg1;
- (struct CGRect)p_textFrameForWrappingCell:(struct TSUCellCoord)arg1 defaultRowHeight:(BOOL *)arg2;
- (void)p_updateCachedStyleInformationFromCellID:(struct TSUCellCoord)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (int)reapCoordinatesChangedMaskForChrome;
- (void)removeAttachmentCellLayouts;
- (void)removeContainedTextEditingLayout;
- (Class)repClassForTextLayout:(id)arg1;
- (BOOL)resizeMayChangeAspectRatio;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setupContainedTextEditingLayout:(struct TSUCellCoord)arg1;
- (BOOL)supportsRotation;
- (BOOL)textIsVertical;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validatePageNumberCount;
- (void)validateTableNameVisibility;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (int)wrapFitType;

@end

