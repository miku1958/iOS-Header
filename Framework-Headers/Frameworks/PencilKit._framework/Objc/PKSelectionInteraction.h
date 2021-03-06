//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIInteraction-Protocol.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString, PKDrawing, PKDrawingAdjustmentKnob, PKSelectionController, PKSelectionGlowRenderer, UIBezierPath, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapAndAHalfRecognizer, UITapGestureRecognizer, UIView;
@protocol PKSelectionInteractionDelegate, PKSelectionRendering;

@interface PKSelectionInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate>
{
    id<PKSelectionRendering> _lassoRenderer;
    PKSelectionGlowRenderer *_glowRenderer;
    UIBezierPath *_lassoPath;
    BOOL _editMenuVisible;
    struct CGPoint _lastTapLocation;
    double _lastTapTimestamp;
    long long _currentTapCount;
    struct CGPoint _lastDoubleTapAndDragLocation;
    double _lastDoubleTapAndDragTimestamp;
    NSMutableArray *_tapAndDragVelocityArray;
    long long _tapAndDragVelocityCount;
    long long _currentlyDraggedKnob;
    long long _knobDragMode;
    double _knobDragInitialTimestamp;
    struct CGPoint _knobDragInitialLocation;
    struct CGPoint _undraggedKnobLocationInStrokeSpace;
    struct CGPoint _currentScrollOffset;
    NSArray *_firstStrokesInInitialStrokes;
    NSArray *_lastStrokesInInitialStrokes;
    long long _modificationType;
    NSMutableArray *_selectionViewGestures;
    PKDrawingAdjustmentKnob *_insertSpaceAffordance;
    UIPanGestureRecognizer *_insertSpaceAffordanceGesture;
    BOOL _enabled;
    BOOL __didCancelSelection;
    BOOL _insertSpaceEnabled;
    id<PKSelectionInteractionDelegate> _delegate;
    UIView *_view;
    UIPanGestureRecognizer *_lassoGestureRecognizer;
    UITapGestureRecognizer *_noOpTapGestureRecognizer;
    UITapGestureRecognizer *_progressiveTapGestureRecognizer;
    UILongPressGestureRecognizer *_tapAndHoldToSelectLongPressGestureRecognizer;
    UITapAndAHalfRecognizer *_modifySelectionRecognizer;
    UILongPressGestureRecognizer *_knobBrushGestureRecognizer;
    UIPanGestureRecognizer *_knobDragGestureRecognizer;
    PKSelectionController *_selectionController;
    PKDrawing *_currentDrawing;
    NSMutableOrderedSet *_smartSelectedStrokes;
    NSOrderedSet *_initialStrokeSelectionBeforeModification;
    struct CGPoint __drawingBeganLocation;
}

@property (nonatomic) BOOL _didCancelSelection; // @synthesize _didCancelSelection=__didCancelSelection;
@property (nonatomic) struct CGPoint _drawingBeganLocation; // @synthesize _drawingBeganLocation=__drawingBeganLocation;
@property (strong, nonatomic) PKDrawing *currentDrawing; // @synthesize currentDrawing=_currentDrawing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKSelectionInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) BOOL hasCurrentSelection;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSOrderedSet *initialStrokeSelectionBeforeModification; // @synthesize initialStrokeSelectionBeforeModification=_initialStrokeSelectionBeforeModification;
@property (nonatomic) BOOL insertSpaceEnabled; // @synthesize insertSpaceEnabled=_insertSpaceEnabled;
@property (strong, nonatomic) UILongPressGestureRecognizer *knobBrushGestureRecognizer; // @synthesize knobBrushGestureRecognizer=_knobBrushGestureRecognizer;
@property (strong, nonatomic) UIPanGestureRecognizer *knobDragGestureRecognizer; // @synthesize knobDragGestureRecognizer=_knobDragGestureRecognizer;
@property (strong, nonatomic) UIPanGestureRecognizer *lassoGestureRecognizer; // @synthesize lassoGestureRecognizer=_lassoGestureRecognizer;
@property (strong, nonatomic) UITapAndAHalfRecognizer *modifySelectionRecognizer; // @synthesize modifySelectionRecognizer=_modifySelectionRecognizer;
@property (strong, nonatomic) UITapGestureRecognizer *noOpTapGestureRecognizer; // @synthesize noOpTapGestureRecognizer=_noOpTapGestureRecognizer;
@property (strong, nonatomic) UITapGestureRecognizer *progressiveTapGestureRecognizer; // @synthesize progressiveTapGestureRecognizer=_progressiveTapGestureRecognizer;
@property (weak, nonatomic) PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property (strong, nonatomic) NSMutableOrderedSet *smartSelectedStrokes; // @synthesize smartSelectedStrokes=_smartSelectedStrokes;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILongPressGestureRecognizer *tapAndHoldToSelectLongPressGestureRecognizer; // @synthesize tapAndHoldToSelectLongPressGestureRecognizer=_tapAndHoldToSelectLongPressGestureRecognizer;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_addInsertSpaceAffordance;
- (void)_addInsertSpaceAffordanceGestureIfNecessary;
- (id)_adornmentLayers;
- (void)_calculateFirstAndLastStrokeForKnobPlacement;
- (void)_cancelDeferredPasteFromTappingAction;
- (void)_cleanupInsertSpaceAffordance;
- (void)_clearLiveSelectionPath;
- (id)_closestStrokesToCorner:(unsigned long long)arg1 fromStrokes:(id)arg2;
- (void)_didAddSelectionView:(id)arg1;
- (void)_didBeginDraggingSelection:(id)arg1;
- (void)_didBeginSelection:(id)arg1;
- (void)_didBrushWithKnob:(id)arg1;
- (void)_didDragKnob:(id)arg1;
- (void)_didEndDraggingSelection:(id)arg1;
- (void)_didEndLassoAddingSpaceAtLocation:(struct CGPoint)arg1;
- (void)_didEndLassoSelectionWithPath:(id)arg1;
- (void)_didGrabInsertSpaceAffordance:(id)arg1;
- (void)_didSmartSelectTap:(id)arg1;
- (void)_didTapAndDrag:(id)arg1;
- (void)_dismissEditMenuIfNecessary;
- (BOOL)_dragShouldBeginForSession:(id)arg1;
- (id)_drawingForLocation:(struct CGPoint)arg1;
- (void)_eatGesture:(id)arg1;
- (id)_firstStrokesInStrokes:(id)arg1;
- (id)_gestures;
- (id)_gesturesForLiveSelection;
- (void)_handleSingleTap:(id)arg1;
- (BOOL)_insertSpaceAffordanceEnabled;
- (void)_intersectedStrokesInDrawing:(id)arg1 forSelectionInput:(id)arg2 existingSelection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_isLassoAddingSpace:(struct CGPoint)arg1;
- (BOOL)_isRepeatedTap:(id)arg1;
- (BOOL)_isWithinRepeatedTapTimeForGesture:(id)arg1;
- (id)_knobForLocation:(struct CGPoint)arg1;
- (id)_knobForLocation:(struct CGPoint)arg1 forInputType:(long long)arg2;
- (id)_lastStrokesInStrokes:(id)arg1;
- (BOOL)_liveSelectionGestureStillActive;
- (BOOL)_locationShouldFlipOverLeftKnob:(struct CGPoint)arg1;
- (BOOL)_locationShouldFlipOverLeftKnob_LTR:(struct CGPoint)arg1;
- (BOOL)_locationShouldFlipOverLeftKnob_RTL:(struct CGPoint)arg1;
- (BOOL)_locationShouldFlipOverRightKnob:(struct CGPoint)arg1;
- (BOOL)_locationShouldFlipOverRightKnob_LTR:(struct CGPoint)arg1;
- (BOOL)_locationShouldFlipOverRightKnob_RTL:(struct CGPoint)arg1;
- (struct CGPoint)_pointFromViewToStrokeSpace:(struct CGPoint)arg1 inDrawing:(id)arg2;
- (void)_pressAndHoldLinearExpand:(id)arg1;
- (void)_resetVelocityWindow;
- (void)_selectViaContinuousTapWithInput:(id)arg1;
- (id)_selectionModifierGestures;
- (BOOL)_selectionShouldReceiveTouchForPoint:(struct CGPoint)arg1;
- (long long)_selectionTypeForTapCount:(long long)arg1;
- (long long)_selectionTypeForVelocity:(double)arg1;
- (void)_setupGestures;
- (double)_timestampForGestureRecognizer:(id)arg1;
- (double)_timestampForTouch:(id)arg1;
- (void)_toolPickerDidShowHide:(id)arg1;
- (struct CGPoint)_undraggedKnobLocation:(long long)arg1 forInitialStrokeBounds:(struct CGRect)arg2;
- (void)_updateAllowedTouchTypesForLassoGR;
- (void)_updateAllowedTouchTypesForSelectedInk:(id)arg1;
- (void)_updateAllowedTouchTypesForSelectedInk:(id)arg1 hasCurrentSelection:(BOOL)arg2;
- (void)_updateInsertSpaceAffordancePosition;
- (void)_updateLiveLassoPath:(struct CGPath *)arg1;
- (void)_updateProgressiveTapSelectionWithSelectionInput:(id)arg1 existingSelection:(id)arg2;
- (void)_updateSmartSelectionWithDragToLocation:(struct CGPoint)arg1 liveScrollOffset:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateSmartSelectionWithDragToLocation:(struct CGPoint)arg1 liveScrollOffset:(struct CGPoint)arg2 initialSelectedWord:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2;
- (long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2 liveScrollOffset:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateStateIfNecessaryWithOldModificationType:(long long)arg1 newModificationType:(long long)arg2;
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1 gesture:(id)arg2;
- (void)_updateUndraggedKnobLocationForKnobDrag;
- (double)_updateVelocityWindowWithTimestamp:(double)arg1 location:(struct CGPoint)arg2;
- (double)_updateVelocityWindowWithTouch:(id)arg1 location:(struct CGPoint)arg2;
- (id)_visibleOnscreenStrokesForDrawing:(id)arg1;
- (void)_willRemoveSelectionView:(id)arg1;
- (struct CGPoint)clampInputPointForSelection:(struct CGPoint)arg1 forDrawing:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)dismissEditMenuIfNecessary;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSelectionController:(id)arg1;
- (BOOL)isLTR;
- (BOOL)knobsContainPoint:(struct CGPoint)arg1 forInputType:(long long)arg2;
- (void)willMoveToView:(id)arg1;

@end

