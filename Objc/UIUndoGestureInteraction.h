//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIEditingOverlayInteractionWithView-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteractiveUndoHUDActionDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIDelayedAction, UIKBProductibityDoubleTapGesture, UIKBProductibitySingleTapGesture, UIKBProductivityLongPressGestureRecognizer, UIKBProductivityPanGestureRecognizer, UIKBProductivityPinchGestureRecognizer, UIKBTextEditingTraits, UIKBUndoInteractionHUD, UIKBUndoStateHUD, UILayoutGuide, UIUndoGestureObserver, UIView;

__attribute__((visibility("hidden")))
@interface UIUndoGestureInteraction : NSObject <UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction>
{
    BOOL _interactiveHUDIsVisible;
    BOOL _undoStateHUDIsAnimating;
    BOOL _multiPinchTimerOn;
    UIView *_view;
    UIUndoGestureObserver *_observerGesture;
    UIKBProductibitySingleTapGesture *_threeFingerSingleTap;
    UIKBProductibityDoubleTapGesture *_threeFingerDoubleTap;
    UIKBProductivityPanGestureRecognizer *_threeFingerSlide;
    UIKBProductivityLongPressGestureRecognizer *_threeFingerLongPress;
    UIKBProductivityPinchGestureRecognizer *_threeFingerPinch;
    UIKBUndoInteractionHUD *_undoInteractiveHUD;
    UIKBUndoStateHUD *_undoStateHUD;
    NSLayoutConstraint *_undoStateHUDTopConstraint;
    NSLayoutConstraint *_undoStateHUDCenterConstraint;
    NSLayoutConstraint *_undoHUDContainerWidthConstraint;
    NSLayoutConstraint *_undoHUDContainerHeightConstraint;
    UIDelayedAction *_undoStateHUDDismissTimer;
    long long _currentAppearance;
    UILayoutGuide *_layoutGuide;
    long long _previousRecognizedPanDirection;
    UIDelayedAction *_multiPansTimer;
    double _remainingDistanceToTravel;
    long long _beginPanDirection;
    unsigned long long _panDownStateChangedCounter;
    double _lastTapTimestamp;
    double _initPinchableDistance;
    double _previousPinchPerimeter;
    long long _potentialPinchDirection;
    UIKBTextEditingTraits *_editingTraits;
    struct CGPoint _previousPanLocation;
    struct CGPoint _beginPanLocation;
    struct CGRect _currentActuallSceneBounds;
}

@property (nonatomic) long long beginPanDirection; // @synthesize beginPanDirection=_beginPanDirection;
@property (nonatomic) struct CGPoint beginPanLocation; // @synthesize beginPanLocation=_beginPanLocation;
@property (nonatomic) struct CGRect currentActuallSceneBounds; // @synthesize currentActuallSceneBounds=_currentActuallSceneBounds;
@property (nonatomic) long long currentAppearance; // @synthesize currentAppearance=_currentAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIKBTextEditingTraits *editingTraits; // @synthesize editingTraits=_editingTraits;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initPinchableDistance; // @synthesize initPinchableDistance=_initPinchableDistance;
@property (nonatomic) BOOL interactiveHUDIsVisible; // @synthesize interactiveHUDIsVisible=_interactiveHUDIsVisible;
@property (nonatomic) double lastTapTimestamp; // @synthesize lastTapTimestamp=_lastTapTimestamp;
@property (strong, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property (strong, nonatomic) UIDelayedAction *multiPansTimer; // @synthesize multiPansTimer=_multiPansTimer;
@property (nonatomic) BOOL multiPinchTimerOn; // @synthesize multiPinchTimerOn=_multiPinchTimerOn;
@property (strong, nonatomic) UIUndoGestureObserver *observerGesture; // @synthesize observerGesture=_observerGesture;
@property (nonatomic) unsigned long long panDownStateChangedCounter; // @synthesize panDownStateChangedCounter=_panDownStateChangedCounter;
@property (nonatomic) long long potentialPinchDirection; // @synthesize potentialPinchDirection=_potentialPinchDirection;
@property (nonatomic) struct CGPoint previousPanLocation; // @synthesize previousPanLocation=_previousPanLocation;
@property (nonatomic) double previousPinchPerimeter; // @synthesize previousPinchPerimeter=_previousPinchPerimeter;
@property (nonatomic) long long previousRecognizedPanDirection; // @synthesize previousRecognizedPanDirection=_previousRecognizedPanDirection;
@property (nonatomic) double remainingDistanceToTravel; // @synthesize remainingDistanceToTravel=_remainingDistanceToTravel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIKBProductibityDoubleTapGesture *threeFingerDoubleTap; // @synthesize threeFingerDoubleTap=_threeFingerDoubleTap;
@property (strong, nonatomic) UIKBProductivityLongPressGestureRecognizer *threeFingerLongPress; // @synthesize threeFingerLongPress=_threeFingerLongPress;
@property (strong, nonatomic) UIKBProductivityPinchGestureRecognizer *threeFingerPinch; // @synthesize threeFingerPinch=_threeFingerPinch;
@property (strong, nonatomic) UIKBProductibitySingleTapGesture *threeFingerSingleTap; // @synthesize threeFingerSingleTap=_threeFingerSingleTap;
@property (strong, nonatomic) UIKBProductivityPanGestureRecognizer *threeFingerSlide; // @synthesize threeFingerSlide=_threeFingerSlide;
@property (strong, nonatomic) NSLayoutConstraint *undoHUDContainerHeightConstraint; // @synthesize undoHUDContainerHeightConstraint=_undoHUDContainerHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *undoHUDContainerWidthConstraint; // @synthesize undoHUDContainerWidthConstraint=_undoHUDContainerWidthConstraint;
@property (strong, nonatomic) UIKBUndoInteractionHUD *undoInteractiveHUD; // @synthesize undoInteractiveHUD=_undoInteractiveHUD;
@property (strong, nonatomic) UIKBUndoStateHUD *undoStateHUD; // @synthesize undoStateHUD=_undoStateHUD;
@property (strong, nonatomic) NSLayoutConstraint *undoStateHUDCenterConstraint; // @synthesize undoStateHUDCenterConstraint=_undoStateHUDCenterConstraint;
@property (strong, nonatomic) UIDelayedAction *undoStateHUDDismissTimer; // @synthesize undoStateHUDDismissTimer=_undoStateHUDDismissTimer;
@property (nonatomic) BOOL undoStateHUDIsAnimating; // @synthesize undoStateHUDIsAnimating=_undoStateHUDIsAnimating;
@property (strong, nonatomic) NSLayoutConstraint *undoStateHUDTopConstraint; // @synthesize undoStateHUDTopConstraint=_undoStateHUDTopConstraint;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)iWorkFamily;
+ (void)presentProductivityGestureTutorialIfNeededWithCompletion:(CDUnknownBlockType)arg1;
+ (void)presentProductivityGestureTutorialInlineWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_cancelPinch:(id)arg1;
- (void)_createAndUpdateUndoInteractiveHUDIfNecessary;
- (void)_createAndUpdateUndoStateHUDIfNecessary;
- (void)_createGestureRecognizersIfNecessary;
- (void)_endPan:(id)arg1;
- (void)_endPinch:(id)arg1;
- (void)_removeGestureRecognizers;
- (void)_startPinch:(id)arg1;
- (void)_startUndoPan:(id)arg1;
- (id)_undoManager;
- (id)_undoManagerFlattenedGroupingInfo;
- (void)_updatePinch:(id)arg1;
- (void)_updateUndoPan:(id)arg1;
- (struct CGRect)actualSceneBounds;
- (void)animateDisplayingStateHUD;
- (void)animateInStateHUD;
- (void)animateSpringCoverWithSuccess:(BOOL)arg1 direction:(long long)arg2 remainingDistanceToTravel:(double)arg3;
- (void)applicationWillSuspend;
- (BOOL)bundleIniWorkFamily:(id)arg1;
- (BOOL)canCopy;
- (BOOL)canCut;
- (BOOL)canPaste;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)clearHUDViews;
- (void)clearMultiPansTimer;
- (void)clearMultiPinchTimer;
- (void)clearUndoStateHUDDismissTimer;
- (void)copyOperation;
- (BOOL)currentInteractiveHUDVisible;
- (id)currentResponder;
- (BOOL)currentStateHUDVisible;
- (double)currentTime;
- (void)cutOperation;
- (void)deactiveActiveKeysIfNeeded:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)disableEnclosingScrollViewScrolling;
- (BOOL)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg1;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect)arg1;
- (void)fullyCloseCoverWithComplete:(CDUnknownBlockType)arg1;
- (void)fullyOpenAndCloseCoverWithBeginDirection:(long long)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)interactiveHUDButtonForDirection:(long long)arg1;
- (BOOL)isRTLMode;
- (long long)keyboardAppearance;
- (void)layoutUndoHUDSliderDetails;
- (void)layoutUndoInteractiveHUD;
- (void)layoutUndoStateHUD;
- (void)multiPansTimerElaspsed:(id)arg1;
- (BOOL)needUpdateHUDForContainerChange;
- (void)observerGestureHandler:(id)arg1;
- (void)pasteOperation;
- (BOOL)performActionWithDirection:(long long)arg1;
- (unsigned long long)privateEditingInteractionOptions;
- (void)redo:(BOOL)arg1;
- (void)removeAllHUDOnContainerChange;
- (id)responderForOperation:(SEL)arg1 withSender:(id)arg2;
- (id)scrollViewForInputDelegate;
- (void)setUndoHUDType:(long long)arg1 visibility:(BOOL)arg2;
- (void)setUndoInteractiveHUDVisibility:(BOOL)arg1;
- (void)setUndoStateHUDVisibility:(BOOL)arg1 withType:(long long)arg2 available:(BOOL)arg3;
- (long long)slideDirectionWithGesture:(id)arg1;
- (void)startMultiPinchTimer:(double)arg1;
- (BOOL)textEditingOperationsAvailableWithGestureRecognizer:(id)arg1;
- (void)threeFingerDoubleTap:(id)arg1;
- (void)threeFingerDoubleTapUndoAction;
- (void)threeFingerLongPress:(id)arg1;
- (void)threeFingerPinch:(id)arg1;
- (void)threeFingerSingleTap:(id)arg1;
- (void)threeFingerSlide:(id)arg1;
- (void)tooSlow:(id)arg1;
- (void)touchMultiPansTimer;
- (void)touchUndoStateHUDDismissTimer;
- (void)undo:(BOOL)arg1;
- (long long)undoControlTypeWithDirection:(long long)arg1;
- (BOOL)undoGestureIsMoving:(id)arg1;
- (BOOL)undoManagerOperationsCutCopyPasteAvailable;
- (BOOL)undoManagerOperationsUndoRedoAvailable;
- (void)undoStateHUDDismissTimerElaspsed:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end

