//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKInkOverlayViewDelegate-Protocol.h>
#import <AnnotationKit/AKShapeDetectionControllerDelegate-Protocol.h>

@class AKInkOverlayView, AKPageController, AKShapeDetectionController, NSString;
@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>
{
    BOOL _ignoreAnnotationAndSelectionKVO;
    BOOL _onlyPencilDraws;
    AKInkOverlayView *_inkOverlayView;
    AKPageController *_pageController;
    AKShapeDetectionController *_shapeDetectionController;
    id<PKRulerHostingDelegate> _rulerHostingDelegate;
    CDUnknownBlockType _delayedShapeDetectionBlock;
    double _lastStrokeEndTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy) CDUnknownBlockType delayedShapeDetectionBlock; // @synthesize delayedShapeDetectionBlock=_delayedShapeDetectionBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property (strong) AKInkOverlayView *inkOverlayView; // @synthesize inkOverlayView=_inkOverlayView;
@property double lastStrokeEndTime; // @synthesize lastStrokeEndTime=_lastStrokeEndTime;
@property BOOL onlyPencilDraws; // @synthesize onlyPencilDraws=_onlyPencilDraws;
@property (weak) AKPageController *pageController; // @synthesize pageController=_pageController;
@property (weak, nonatomic) id<PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property (strong) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property (readonly) Class superclass;

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;
- (void).cxx_destruct;
- (void)_controllerWillSave:(id)arg1;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;
- (struct CGRect)_convertRect:(struct CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;
- (void)_enclosingScrollViewDidScroll:(id)arg1;
- (void)_fullSetup;
- (void)_inkCanvasAnnotationUpdated:(id)arg1;
- (void)_inkDidChangeNotification:(id)arg1;
- (void)_partialTeardown;
- (void)_performDelayedShapeDetection;
- (void)_setupGestureDependencies;
- (void)_tearDownGestureDependencies;
- (void)_toolStatusUpdated:(id)arg1;
- (void)_updateAllowedTouchTypesAllEnabled:(BOOL)arg1 pencilEnabled:(BOOL)arg2;
- (void)_updateGestureDependencyPriority;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)didToggleRuler;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (id)initWithPageController:(id)arg1;
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;
- (BOOL)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;
- (void)inputViewDidBeginStroke:(id)arg1;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (BOOL)isWaitingToCoalesceStrokes;
- (id)overlayView:(id)arg1;
- (struct CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2;
- (void)setup;
- (BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2;
- (void)teardown;

@end

