//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKSelectionRendering-Protocol.h>

@class CALayer, NSMutableDictionary, NSString, PKSelectionModificationKnob, PKStrokeSelection, UIBezierPath;
@protocol PKSelectionRenderingDelegate;

@interface PKSelectionGlowRenderer : NSObject <PKSelectionRendering>
{
    CALayer *_highlightLayer;
    CALayer *_strokePathsTilesLayer;
    PKSelectionModificationKnob *_leftKnob;
    PKSelectionModificationKnob *_rightKnob;
    long long _knobDragMode;
    BOOL _isDraggingKnob;
    long long _draggedKnobLocation;
    NSMutableDictionary *_tiles;
    PKStrokeSelection *_strokeSelection;
    id<PKSelectionRenderingDelegate> _renderingDelegate;
    UIBezierPath *_lassoPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBezierPath *lassoPath; // @synthesize lassoPath=_lassoPath;
@property (weak, nonatomic) id<PKSelectionRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=_renderingDelegate;
@property (strong, nonatomic) PKStrokeSelection *strokeSelection; // @synthesize strokeSelection=_strokeSelection;
@property (readonly) Class superclass;

+ (id)sharedStrokePathCache;
- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (id)_affordanceForLocationInSelectionView:(struct CGPoint)arg1 inputType:(long long)arg2;
- (void)_brushSelectWithKnob:(long long)arg1 toLocation:(struct CGPoint)arg2 knobDragMode:(long long)arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_createPathAroundStrokes:(id)arg1 inDrawing:(id)arg2 isLive:(BOOL)arg3 liveScrollOffset:(struct CGPoint)arg4;
- (void)_didBeginDraggingSelection;
- (void)_didEndDragKnobLocation:(long long)arg1 knobDragMode:(long long)arg2;
- (void)_didEndDraggingSelection;
- (void)_dragKnob:(long long)arg1 toLocation:(struct CGPoint)arg2 otherKnobLocation:(struct CGPoint)arg3 knobDragMode:(long long)arg4;
- (struct CGColor *)_highlightColor;
- (double)_highlightWidthForStroke:(id)arg1;
- (BOOL)_isBrushSelecting:(long long)arg1;
- (id)_knobForKnobLocation:(long long)arg1;
- (id)_newKnobWithLocation:(long long)arg1;
- (void)_renderLiveSelectionPath:(const struct CGPath *)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(struct CGPoint)arg4;
- (void)_resetKnobAppearance;
- (double)_scaleForSelectionType:(long long)arg1 touchType:(long long)arg2;
- (void)_setupHighlightIfNecessary;
- (void)_setupKnobsIfNecessary;
- (void)_setupSelectionAdornment;
- (struct CGAffineTransform)_transformFromStrokeSpaceToViewInDrawing:(id)arg1 isLive:(BOOL)arg2;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)arg1 point:(struct CGPoint)arg2 knobDragMode:(long long)arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)arg1 point:(struct CGPoint)arg2 otherKnobPoint:(struct CGPoint)arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_updateKnobPositionsForStrokes:(id)arg1 strokeSpaceToViewTransform:(struct CGAffineTransform)arg2;
- (void)_willBeginDragKnobLocation:(long long)arg1 atPoint:(struct CGPoint)arg2 knobDragMode:(long long)arg3;
- (id)adornmentLayer;
- (struct CGPoint)editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
- (id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
- (void)setKnobsVisible:(BOOL)arg1;

@end
