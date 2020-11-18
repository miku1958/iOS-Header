//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPTextHostRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/UITextFieldDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSSet, NSString, TSDCanvasView, TSDEditorController, TSDKnobTracker, TSDTilingLayer, TSTAnimation, TSTCellRegion, TSTEditingState, TSTLayout, TSTMasterLayout, TSTSearchReference, TSTSelectionDragController, TSTTableCellTextEditingRep, TSTTableInfo, TSTTableModel, TSTTableReferences, TSTTableSelection, TSWPHyperlinkField, TSWPStorage, TSWPTextEditing;
@protocol TSTCanvasReferenceController, TSTTableAnimationController, TSTTableChromeProvider, TSTTableKnobTrackerVisitorProtocol, TSTTableRepDelegate;

@interface TSTTableRep : TSWPTextHostRep <TSDTilingLayerDelegate, UITextFieldDelegate>
{
    struct CGRect mCanvasVisibleRect;
    struct CGRect mSearchSelectionBounds;
    TSDTilingLayer *mOverlayTableName;
    TSDTilingLayer *mOverlayFrozenHeaderCorner;
    TSDTilingLayer *mOverlayFrozenHeaderRows;
    TSDTilingLayer *mOverlayFrozenHeaderColumns;
    CALayer *mOverlayFrozenHeaderRowsMask;
    CALayer *mOverlayFrozenHeaderColumnsMask;
    CALayer *mOverlayFrozenHeaderTableBodyMask;
    CALayer *mOverlayFrozenHeaderTableNameMask;
    double mCurrentScreenScale;
    CDStruct_5f1f7aa9 mDirtyCellRange;
    BOOL mRecursivelyDrawingInContext;
    NSMutableArray *mAnimationStack;
    id<TSTTableAnimationController> mAnimationController;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    TSWPTextEditing *mTableNameTextEditing;
    CDStruct_0441cfb5 mControlCellID;
    CDStruct_0441cfb5 mRatingsDragCellID;
    id<TSTTableChromeProvider> mTableChrome;
    TSTTableReferences *mReferences;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    BOOL mIsAspectOperationInProgress;
    BOOL mIsZoomOperationInProgress;
    BOOL mIsZoomToEditOperationInProgress;
    CDStruct_5f1f7aa9 mZoomToEditVisibleCellRange;
    CAShapeLayer *mFindSelectionHighlightLayer;
    TSTTableSelection *mSourceFillSelection;
    TSTTableSelection *mTargetFillSelection;
    BOOL mWPEndedTableNameEditing;
    BOOL _settingSelection;
    TSTSelectionDragController *mCellDragController;
    BOOL mDragByHandleOnly;
    BOOL mSelectionUsesBezierPath;
    BOOL mSelectsCellOnInitialTap;
    BOOL mUsesWholeChromeResizer;
    id<TSTCanvasReferenceController> mCanvasReferenceController;
    id<TSTTableRepDelegate> mDelegate;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    NSSet *mVisibleFillKnobs;
    CDStruct_0441cfb5 mEditingHyperlinkCellID;
    TSWPStorage *mHyperlinkParentStorage;
    BOOL mHyperlinkModified;
    BOOL mInspectingHyperlinkInEditingStorage;
    TSWPHyperlinkField *mHyperlinkField;
    CAShapeLayer *mCellEditingMaskLayer;
}

@property (strong, nonatomic) TSTSearchReference *activeSearchReference; // @dynamic activeSearchReference;
@property (nonatomic) id<TSTTableAnimationController> animationController; // @synthesize animationController=mAnimationController;
@property (readonly, nonatomic) id<TSTCanvasReferenceController> canvasReferenceController; // @synthesize canvasReferenceController=mCanvasReferenceController;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) struct CGRect canvasVisibleRect;
@property (nonatomic) TSTSelectionDragController *cellDragController; // @synthesize cellDragController=mCellDragController;
@property (readonly, nonatomic) TSTAnimation *currentAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TSTTableRepDelegate> delegate; // @synthesize delegate=mDelegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTEditingState *editingState;
@property (readonly, nonatomic) TSDEditorController *editorController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isZoomToEditOperationInProgress; // @synthesize isZoomToEditOperationInProgress=mIsZoomToEditOperationInProgress;
@property (readonly, nonatomic) CALayer *layerForRep;
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (nonatomic) CDStruct_0441cfb5 ratingsDragCellID; // @synthesize ratingsDragCellID=mRatingsDragCellID;
@property (readonly, nonatomic) TSTCellRegion *selectionRegion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<TSTTableChromeProvider> tableChrome; // @synthesize tableChrome=mTableChrome;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTLayout *tableLayout;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) struct CGAffineTransform transformFromCanvas;
@property (readonly, nonatomic) struct CGAffineTransform transformToCanvas;
@property (readonly, nonatomic) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *visitorKnobTracker; // @synthesize visitorKnobTracker=mVisitorKnobTracker;

+ (Class)tableRepDelegateClass;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)asyncPostTextChangedInRange:(CDStruct_5f1f7aa9)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;
- (void)beginDragInsertFromPalette;
- (struct CGRect)boundsForCellSelection:(CDStruct_0441cfb5)arg1;
- (struct CGRect)boundsForResizeGuideUI;
- (BOOL)canDrawInBackgroundDuringScroll;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawTilingLayerInBackground:(id)arg1;
- (struct CGRect)canvasBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)contentsRectForCellRangeAcrossSpaces:(CDStruct_5f1f7aa9)arg1 contentsCenterInfo:(CDStruct_7bd98050 *)arg2 canvasFrame:(struct CGRect *)arg3 contentsRect:(struct CGRect *)arg4;
- (void)dealloc;
- (struct CGRect)deviceBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)dirtyCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)editorSelection;
- (void)endDragInsertFromPalette;
- (BOOL)handlesEditMenu;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(BOOL)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1 fittingRange:(CDStruct_5f1f7aa9)arg2 invalidateSize:(BOOL)arg3;
- (void)invalidateComments;
- (void)invalidateEditingCell;
- (void)invalidateFrozenHeaders;
- (void)invalidateSelection;
- (void)invalidateTableName;
- (BOOL)isDraggable;
- (BOOL)isFullyVisibleWithBorder:(int)arg1;
- (struct CGRect)layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (id)overlayLayers;
- (struct CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)p_editingDidEnd;
- (id)p_frozenHeaderOverlayLayers;
- (void)p_hideSelectionLayers;
- (void)p_invalidateCellCommentBadges;
- (struct CGPath *)p_newPathForSearchReference:(id)arg1;
- (id)p_tableNameOverlayLayers;
- (id)p_textImageForPath:(struct CGPath *)arg1 shouldPulsate:(BOOL)arg2;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (id)repForDragging;
- (void)screenScaleDidChange;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)shouldCommitPendingTextEdit;
- (BOOL)shouldRestartTextEditing;
- (int)tilingMode;
- (void)updateChildrenFromLayout;
- (void)updateDynamicModeForEditingSpillText;
- (void)updateFromLayout;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderCorner;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderTableBodyMask;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)validateTableName;
- (void)validateVisibleRect;
- (void)viewScaleDidChange;
- (void)willBeRemoved;

@end

