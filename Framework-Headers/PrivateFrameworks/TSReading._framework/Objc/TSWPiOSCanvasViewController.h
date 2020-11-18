//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDiOSCanvasViewController.h>

#import <TSReading/UIDragInteractionDelegate-Protocol.h>
#import <TSReading/_UINonEditableTextSelectionForceGestureDelegate-Protocol.h>

@class NSMutableArray, NSString, TSUColor, TSWPHardPressGestureRecognizer, TSWPInteractiveCanvasController, TSWPLongPressGestureRecognizer, TSWPSwipeGestureRecognizer, TSWPTwoPartAction, UIGestureRecognizer, UITapGestureRecognizer;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <_UINonEditableTextSelectionForceGestureDelegate, UIDragInteractionDelegate>
{
    UIGestureRecognizer *_hyperlinkGestureRecognizer;
    TSWPSwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    TSWPSwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    TSWPLongPressGestureRecognizer *_longPressGestureRecognizer;
    TSWPTwoPartAction *_delayedTapAction;
    NSMutableArray *_gestureRecognizers;
    UITapGestureRecognizer *_secondarySingleTapGestureRecognizer;
    TSWPHardPressGestureRecognizer *_hardPressGesture;
}

@property (readonly, nonatomic) TSUColor *backgroundColorForMagnifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TSWPHardPressGestureRecognizer *hardPressGesture; // @synthesize hardPressGesture=_hardPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIGestureRecognizer *hyperlinkGestureRecognizer; // @synthesize hyperlinkGestureRecognizer=_hyperlinkGestureRecognizer;
@property (readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) TSWPLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *secondarySingleTapGestureRecognizer; // @synthesize secondarySingleTapGestureRecognizer=_secondarySingleTapGestureRecognizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer; // @synthesize textLeftSwipeGestureRecognizer=_leftSwipeGestureRecognizer;
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer; // @synthesize textRightSwipeGestureRecognizer=_rightSwipeGestureRecognizer;

- (id)_dragItemsForInteraction:(id)arg1 session:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
- (void)addSwipeGestureRecognizers;
- (BOOL)canDisplayHyperlinkUI;
- (void)cancelDelayedTapAction;
- (void)dealloc;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)finishDelayedTapAction;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (BOOL)hasDelayedTapAction;
- (id)hyperlinkUICustomStringForURLString:(id)arg1;
- (void)hyperlinkUIDidHide;
- (BOOL)hyperlinkUIShouldShow;
- (BOOL)hyperlinkUIShouldShowCustomUI;
- (void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2;
- (void)hyperlinkUIWillShow;
- (BOOL)onlyAllowTextSwipesWhenEditing;
- (void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2;
- (void)p_endHardPressGestureRecognizer;
- (void)p_handleHardPressGestureRecognizer:(id)arg1;
- (id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned int)arg2;
- (void)removeSwipeGestureRecognizers;
- (void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1;
- (void)setUpGestureRecognizers;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldHideCanvasLayerInMagnifier;
- (void)startDelayedTapAction:(id)arg1;
- (void)teardown;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginGesture;

@end
