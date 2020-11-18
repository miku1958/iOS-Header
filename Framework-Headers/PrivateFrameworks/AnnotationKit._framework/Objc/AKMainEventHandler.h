//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <AnnotationKit/AKFormFeatureDetectorDelegate-Protocol.h>

@class AKAlignmentGuideController, AKAnnotation, AKAnnotationEventHandler, AKController, AKPageController, NSString, UIEvent;

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate>
{
    BOOL _mainEventHandlerIsInTrackingLoop;
    BOOL _mainEventHandlerIsInRotationLoop;
    BOOL _shouldEatNextLeftMouseUp;
    BOOL _shouldEatNextRightMouseUp;
    BOOL _dragDidCopySelectedAnnotations;
    BOOL _undoManagerWasGroupingByEvent;
    BOOL _wasSelectedByLongPressRecognizer;
    AKAnnotationEventHandler *_annotationEventHandler;
    unsigned long long _currentModifierFlags;
    AKController *_controller;
    AKPageController *_dragPageController;
    AKAlignmentGuideController *_dragAlignmentGuideController;
    UIEvent *_lastEventWithValidLocationForAutoscroll;
    UIEvent *_lastLeftMouseDownEvent;
    AKAnnotation *_annotationToBeginEditingOnDragEnd;
    struct CGPoint _firstDragPoint;
    struct CGPoint _panGestureStartPointInWindow;
    struct CGPoint _leftMouseDownPoint;
    struct CGPoint _lastDragPoint;
    struct CGPoint _lastDragActualLocation;
    struct CGPoint _lastDragActualLocationInWindow;
}

@property (strong) AKAnnotationEventHandler *annotationEventHandler; // @synthesize annotationEventHandler=_annotationEventHandler;
@property (weak) AKAnnotation *annotationToBeginEditingOnDragEnd; // @synthesize annotationToBeginEditingOnDragEnd=_annotationToBeginEditingOnDragEnd;
@property (weak) AKController *controller; // @synthesize controller=_controller;
@property unsigned long long currentModifierFlags; // @synthesize currentModifierFlags=_currentModifierFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) AKAlignmentGuideController *dragAlignmentGuideController; // @synthesize dragAlignmentGuideController=_dragAlignmentGuideController;
@property BOOL dragDidCopySelectedAnnotations; // @synthesize dragDidCopySelectedAnnotations=_dragDidCopySelectedAnnotations;
@property (strong) AKPageController *dragPageController; // @synthesize dragPageController=_dragPageController;
@property struct CGPoint firstDragPoint; // @synthesize firstDragPoint=_firstDragPoint;
@property (readonly) unsigned long long hash;
@property struct CGPoint lastDragActualLocation; // @synthesize lastDragActualLocation=_lastDragActualLocation;
@property struct CGPoint lastDragActualLocationInWindow; // @synthesize lastDragActualLocationInWindow=_lastDragActualLocationInWindow;
@property struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property (strong) UIEvent *lastEventWithValidLocationForAutoscroll; // @synthesize lastEventWithValidLocationForAutoscroll=_lastEventWithValidLocationForAutoscroll;
@property (strong) UIEvent *lastLeftMouseDownEvent; // @synthesize lastLeftMouseDownEvent=_lastLeftMouseDownEvent;
@property struct CGPoint leftMouseDownPoint; // @synthesize leftMouseDownPoint=_leftMouseDownPoint;
@property BOOL mainEventHandlerIsInRotationLoop; // @synthesize mainEventHandlerIsInRotationLoop=_mainEventHandlerIsInRotationLoop;
@property BOOL mainEventHandlerIsInTrackingLoop; // @synthesize mainEventHandlerIsInTrackingLoop=_mainEventHandlerIsInTrackingLoop;
@property struct CGPoint panGestureStartPointInWindow; // @synthesize panGestureStartPointInWindow=_panGestureStartPointInWindow;
@property BOOL shouldEatNextLeftMouseUp; // @synthesize shouldEatNextLeftMouseUp=_shouldEatNextLeftMouseUp;
@property BOOL shouldEatNextRightMouseUp; // @synthesize shouldEatNextRightMouseUp=_shouldEatNextRightMouseUp;
@property (readonly) Class superclass;
@property BOOL undoManagerWasGroupingByEvent; // @synthesize undoManagerWasGroupingByEvent=_undoManagerWasGroupingByEvent;
@property BOOL wasSelectedByLongPressRecognizer; // @synthesize wasSelectedByLongPressRecognizer=_wasSelectedByLongPressRecognizer;

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1;
- (void).cxx_destruct;
- (struct CGPoint)_alignedAnnotationDragPointForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1;
- (BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1 withStartingPoint:(struct CGPoint)arg2;
- (BOOL)_didNotHandleEventSoDeselect;
- (void)_setCurrentPageBasedOnPageController:(id)arg1;
- (void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint)arg1 onPageController:(id)arg2;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint)arg1;
- (BOOL)continueDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)continueRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)enterDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)enterRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)handleDoubleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)handleKeyboardEvent:(id)arg1;
- (BOOL)handleRightDownEvent:(id)arg1;
- (BOOL)handleRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)hitTestPointsOfInterestsAtPoint:(struct CGPoint)arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 recognizer:(id)arg5 cursorUpdateOnly:(BOOL)arg6;
- (id)initWithController:(id)arg1;
- (BOOL)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)modelPointFromEvent:(id)arg1 orRecognizer:(id)arg2 onPageController:(id *)arg3;
- (struct CGPoint)modelPointFromWindowPoint:(struct CGPoint)arg1 foundOnPageController:(id *)arg2;
- (void)teardown;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint)arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(BOOL *)arg4 wasOnText:(BOOL *)arg5;
- (void)updateCropHandleVisibilityForEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;

@end

