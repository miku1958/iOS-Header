//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, UIFieldEditor, UIGestureRecognizer, UIKeyboardTaskQueue, UILongPressGestureRecognizer, UIPreviewItemController, UIResponder, UIScrollView, UITapGestureRecognizer, UITextChecker, UITextSelectionView, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController;
@protocol UITextInput;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate>
{
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    NSMutableArray *_recognizers;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_highlightGesture;
    UILongPressGestureRecognizer *_tapAndHoldGesture;
    UILongPressGestureRecognizer *_loupeGesture;
    UITapGestureRecognizer *_singleTapGesture;
    UIGestureRecognizer *_doubleTapGesture;
    UIPreviewItemController *_previewItemController;
    UIGestureRecognizer *_previewGesture;
    UIGestureRecognizer *_revealGesture;
    int _autoscrollRamp;
    double _autoscrollFactor;
    struct CGPoint _autoscrollBasePoint;
    struct CGPoint _autoscrollUntransformedExtentPoint;
    struct CGPoint _loupeGestureEndPoint;
    double _lastTapTimestamp;
    UITextChecker *_textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _isTryingToHighlightLink;
    BOOL _willHandoffLoupeMagnifier;
    BOOL _needsGestureUpdate;
    long long _previousRepeatedGranularity;
    BOOL _externalTextInput;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    NSHashTable *_gestureRecognizerViews;
}

@property (nonatomic) struct CGPoint autoscrollUntransformedExtentPoint;
@property (nonatomic) BOOL autoscrolled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIGestureRecognizer *doubleTapGesture;
@property (strong, nonatomic) UIGestureRecognizer *doubleTapGesture; // @dynamic doubleTapGesture;
@property (readonly, nonatomic) BOOL externalTextInput;
@property (readonly, nonatomic) UIFieldEditor *fieldEditor; // @dynamic fieldEditor;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inGesture;
@property (strong, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) struct CGPoint loupeGestureEndPoint;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UITextSelectionView *selectionView;
@property (readonly, strong, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (strong, nonatomic) UITapGestureRecognizer *singleTapGesture; // @dynamic singleTapGesture;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) UIResponder<UITextInput> *textDocument;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (readonly, nonatomic) UIResponder<UITextInput> *view;
@property (readonly, nonatomic) BOOL willHandoffLoupeMagnifier;

+ (long long)_nextGranularityInCycle:(long long)arg1;
- (void).cxx_destruct;
- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (id)_asText;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
- (id)_scrollable;
- (id)_selectionView;
- (void)activateSelection;
- (id)addDragRecognizer;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)addHighlightLinkRecognizerToView:(id)arg1 withHighlightDelay:(BOOL)arg2;
- (void)addKeyboardTextSelectionGestureRecognizersToView:(id)arg1;
- (id)addLoupeGestureRecognizer:(BOOL)arg1 toView:(id)arg2;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerTapRecognizerToView:(id)arg1;
- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;
- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;
- (void)addPreviewGestureRecognizerToView:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addSelectionTapRecognizerToView:(id)arg1;
- (id)addTapAndAHalfRecognizerToView:(id)arg1;
- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;
- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;
- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;
- (void)attach;
- (void)autoscrollWillNotStart;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)canBeginDragCursor:(id)arg1;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (void)clearSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (BOOL)containerAllowsSelection;
- (BOOL)containerAllowsSelectionTintOnly;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsTextField;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(BOOL)arg1;
- (void)didEndGesture;
- (void)didEndScrollingOverflow;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRange:(id)arg2;
- (void)doubleTapInUneditable:(id)arg1;
- (void)endFloatingCursor;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)isInteractingWithLink;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)legacyTwoFingerSingleTap:(id)arg1;
- (id)linkInteractionView;
- (void)longDelayRecognizer:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (id)loupeGestureRecognizer:(BOOL)arg1;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(BOOL *)arg3;
- (void)loupeMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)notifyKeyboardSelectionChanged;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (id)oneFingerTripleTapRecognizer;
- (id)phraseBoundaryGestureRecognizer;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)removeGestureRecognizersFromView:(id)arg1;
- (BOOL)requiresImmediateUpdate;
- (void)resetGestureRecognizersForLinkInteraction;
- (void)resetWillHandoffLoupeMagnifier;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)selectionChanged;
- (BOOL)selectionRectsContainPoint:(struct CGPoint)arg1;
- (id)selectionTapRecognizer:(SEL)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setWillHandoffLoupeMagnifier;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldIgnoreLinkGestures;
- (void)smallDelayRecognizer:(id)arg1;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (BOOL)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint)arg2;
- (void)tapAndAHalf:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (id)textSelectionView;
- (void)toggleSelectionCommands;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (id)twoFingerTapRecognizerWithTapCount:(unsigned long long)arg1 action:(SEL)arg2;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (BOOL)useGesturesForEditableContent;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (void)willBeginGesture;
- (void)willStartScrollingOverflow;

@end
