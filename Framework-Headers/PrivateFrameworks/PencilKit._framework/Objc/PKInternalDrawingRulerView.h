//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKInternalDrawingView.h>

#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, CATextLayer, NSString, NSTimer, PKRulerGestureRecognizer, PKRulerLayer, UIImpactFeedbackGenerator;

@interface PKInternalDrawingRulerView : PKInternalDrawingView <UIGestureRecognizerDelegate>
{
    BOOL _isInteractingWithRuler;
    BOOL _isInlineResizing;
    BOOL _isExpandedInline;
    BOOL _rulerWasShownViaGesture;
    BOOL _rulerIsRotating;
    BOOL _canRulerSnapToAngle;
    BOOL _isRulerDrawingMovingToEndOfRuler;
    BOOL _lastTouchWasMaskedByRuler;
    BOOL _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    PKRulerLayer *_rulerLayer;
    CALayer *_rulerAngleMarker;
    CALayer *_rulerAngleTick;
    CATextLayer *_rulerAngleText;
    CALayer *_rulerDistanceHUD;
    CATextLayer *_rulerDistanceText;
    double _currentTValueForSnappedDrawing;
    double _minTValueForSnappedDrawing;
    double _maxTValueForSnappedDrawing;
    double _originTValueForSnappedDrawing;
    double _rulerZoomStartCenterTValueOnScreen;
    double _rulerZoomStartScale;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    UIImpactFeedbackGenerator *_unsnapImpactBehavior;
    CDStruct_cfd08fee _rulerState;
    CDStruct_cfd08fee _previousRulerState;
    struct CGAffineTransform _rulerTransform;
    struct CGAffineTransform _rulerStartTransform;
    struct CGAffineTransform _rulerZoomStartTransform;
}

@property (nonatomic) BOOL canRulerSnapToAngle; // @synthesize canRulerSnapToAngle=_canRulerSnapToAngle;
@property (nonatomic) double currentTValueForSnappedDrawing; // @synthesize currentTValueForSnappedDrawing=_currentTValueForSnappedDrawing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
@property (nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property (nonatomic) BOOL isExpandedInline; // @synthesize isExpandedInline=_isExpandedInline;
@property (nonatomic) BOOL isInlineResizing; // @synthesize isInlineResizing=_isInlineResizing;
@property (nonatomic) BOOL isInteractingWithRuler; // @synthesize isInteractingWithRuler=_isInteractingWithRuler;
@property (nonatomic) BOOL isRulerDrawingMovingToEndOfRuler; // @synthesize isRulerDrawingMovingToEndOfRuler=_isRulerDrawingMovingToEndOfRuler;
@property (nonatomic) BOOL lastTouchWasMaskedByRuler; // @synthesize lastTouchWasMaskedByRuler=_lastTouchWasMaskedByRuler;
@property (nonatomic) double maxTValueForSnappedDrawing; // @synthesize maxTValueForSnappedDrawing=_maxTValueForSnappedDrawing;
@property (nonatomic) double minTValueForSnappedDrawing; // @synthesize minTValueForSnappedDrawing=_minTValueForSnappedDrawing;
@property (nonatomic) double originTValueForSnappedDrawing; // @synthesize originTValueForSnappedDrawing=_originTValueForSnappedDrawing;
@property (nonatomic) CDStruct_cfd08fee previousRulerState; // @synthesize previousRulerState=_previousRulerState;
@property (strong, nonatomic) CALayer *rulerAngleMarker; // @synthesize rulerAngleMarker=_rulerAngleMarker;
@property (strong, nonatomic) CATextLayer *rulerAngleText; // @synthesize rulerAngleText=_rulerAngleText;
@property (strong, nonatomic) CALayer *rulerAngleTick; // @synthesize rulerAngleTick=_rulerAngleTick;
@property (strong, nonatomic) CALayer *rulerDistanceHUD; // @synthesize rulerDistanceHUD=_rulerDistanceHUD;
@property (strong, nonatomic) CATextLayer *rulerDistanceText; // @synthesize rulerDistanceText=_rulerDistanceText;
@property (strong, nonatomic) PKRulerGestureRecognizer *rulerGestureRecognizer; // @synthesize rulerGestureRecognizer=_rulerGestureRecognizer;
@property (nonatomic) BOOL rulerIsRotating; // @synthesize rulerIsRotating=_rulerIsRotating;
@property (strong, nonatomic) PKRulerLayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
@property (nonatomic) BOOL rulerSnappedToAngle; // @synthesize rulerSnappedToAngle=_rulerSnappedToAngle;
@property (nonatomic) struct CGAffineTransform rulerStartTransform; // @synthesize rulerStartTransform=_rulerStartTransform;
@property (nonatomic) CDStruct_cfd08fee rulerState; // @synthesize rulerState=_rulerState;
@property (nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property (nonatomic) BOOL rulerWasShownViaGesture; // @synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture;
@property (nonatomic) double rulerZoomStartCenterTValueOnScreen; // @synthesize rulerZoomStartCenterTValueOnScreen=_rulerZoomStartCenterTValueOnScreen;
@property (nonatomic) double rulerZoomStartScale; // @synthesize rulerZoomStartScale=_rulerZoomStartScale;
@property (nonatomic) struct CGAffineTransform rulerZoomStartTransform; // @synthesize rulerZoomStartTransform=_rulerZoomStartTransform;
@property (strong, nonatomic) UIImpactFeedbackGenerator *snapImpactBehavior; // @synthesize snapImpactBehavior=_snapImpactBehavior;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImpactFeedbackGenerator *unsnapImpactBehavior; // @synthesize unsnapImpactBehavior=_unsnapImpactBehavior;

- (void).cxx_destruct;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityElements;
- (id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(double)arg3;
- (void)addScaleAndOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4 fromAlpha:(double)arg5 toAlpha:(double)arg6;
- (id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4;
- (struct CGAffineTransform)angleSnapRulerTransform:(struct CGAffineTransform)arg1 aroundOrigin:(struct CGPoint)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)cancelNonDrawingGestures;
- (struct CGAffineTransform)canvasTransform;
- (BOOL)compactRuler;
- (struct CGAffineTransform)defaultRulerTransfrom;
- (void)drawingBegan:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)endRulerDrawing;
- (struct CGAffineTransform)ensureRulerFullyOnscreen:(struct CGAffineTransform)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGPoint)getRulerCenterLineOriginAndTangent:(struct CGPoint *)arg1;
- (double)getRulerCenterTValueOnScreenForTransfrom:(struct CGAffineTransform)arg1;
- (void)hideRuler;
- (void)hideRulerAnimated:(BOOL)arg1;
- (void)hideUI;
- (void)incrementRulerAngleBy:(double)arg1;
- (void)makeRulerHorizontal;
- (void)makeRulerVertical;
- (struct CGAffineTransform)pixelSnapRulerTransform:(struct CGAffineTransform)arg1;
- (void)removeRulerMarkers;
- (void)resetRuler;
- (void)resetRulerTouches;
- (void)resetRulerTransform;
- (double)rulerAlignInset;
- (id)rulerBackgroundImage;
- (id)rulerDialImage;
- (id)rulerDialLevelImage;
- (void)rulerMoveGesture:(id)arg1;
- (double)rulerTickMarkInset;
- (double)rulerWidth;
- (void)setImageTransformFrom:(struct CGAffineTransform)arg1 toTransform:(struct CGAffineTransform)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)setZooming:(BOOL)arg1;
- (void)setupGestures;
- (BOOL)shouldUseLargestRulerTextFontSize;
- (void)showRuler;
- (void)startRulerDrawing;
- (void)updateAngle:(id)arg1;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint)arg1;
- (void)updateDistanceMarkerWithSpacing:(double)arg1;
- (void)updateImageTransform:(id)arg1;
- (void)updateRuler:(id)arg1;
- (void)updateRulerMarkerForLocation:(struct CGPoint)arg1 firstTouch:(BOOL)arg2;
- (void)updateRulerTickMarkImage;
- (BOOL)viewPointInRuler:(struct CGPoint)arg1;

@end
