//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UISelectionInteractionAssistant-Protocol.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UIView, UIWebSelection, UIWebSelectionView, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant>
{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UILongPressGestureRecognizer *_forcePressGestureRecognizer;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    BOOL _enabled;
    UIWebSelectionView *_selectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (strong, nonatomic) UILongPressGestureRecognizer *forcePressGestureRecognizer; // @synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (readonly, nonatomic) UIWebSelection *selection;
@property (readonly, nonatomic) struct CGRect selectionFrame;
@property (strong, nonatomic) UIWebSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;

- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)addSelectionViewIfNeeded;
- (void)clearSelection;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)didRotate:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (void)hideCallout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (id)initWithView:(id)arg1;
- (void)initializeSelectionView;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)makeWebSelection:(id)arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (void)scrollSelectionToVisible;
- (id)scrollView;
- (void)selectionChanged;
- (void)setGestureRecognizers;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (void)tap:(id)arg1;
- (void)updateSelectionRects:(BOOL)arg1;
- (void)willRotate:(id)arg1;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end
