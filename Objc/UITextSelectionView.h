//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView, UITextSelection;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView
{
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UIView *m_floatingCaretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_caretAnimating;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver *m_observer;
    BOOL m_activeCaret;
    BOOL m_isSuspended;
    int m_showingCommandsCounterForRotate;
    BOOL m_forceRangeView;
}

@property (nonatomic) BOOL caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
@property (readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
@property (readonly, nonatomic) UIView *floatingCaretView; // @synthesize floatingCaretView=m_floatingCaretView;
@property (nonatomic) BOOL forceRangeView; // @synthesize forceRangeView=m_forceRangeView;
@property (readonly, weak, nonatomic) UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
@property (readonly, nonatomic) UITextRangeView *rangeView;
@property (strong, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property (readonly, nonatomic) UITextSelection *selection;
@property (readonly, nonatomic) BOOL selectionCommandsShowing;
@property (nonatomic) BOOL visible; // @synthesize visible=m_visible;

- (void).cxx_destruct;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(BOOL)arg2;
- (void)_showSelectionCommandsForContextMenu:(BOOL)arg1;
- (void)activate;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (void)animateBoxShrinkOn:(id)arg1;
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;
- (void)animateExpanderOn:(id)arg1;
- (void)animatePulsingCaret:(id)arg1;
- (void)appearOrFadeIfNecessary;
- (void)beginFloatingCaretView;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)cancelDelayedCommandRequests;
- (void)caretBlinkTimerFired:(id)arg1;
- (id)caretViewColor;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRangeAnimated:(BOOL)arg1;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;
- (void)configureForHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForRevealHighlightMode;
- (void)configureForSelectionMode;
- (void)deactivate;
- (void)dealloc;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)detach;
- (void)didRotate:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)doneMagnifying;
- (id)dynamicCaret;
- (id)dynamicCaretList;
- (void)endFloatingCaretView;
- (void)endFloatingCursor;
- (id)floatingCaretViewColor;
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1;
- (void)hideCaret:(int)arg1;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewDidChange;
- (void)inputViewDidMove;
- (void)inputViewWillAnimate;
- (void)inputViewWillChange;
- (void)inputViewWillMove:(id)arg1;
- (void)installIfNecessary;
- (void)invalidate;
- (BOOL)isValid;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)prepareForMagnification;
- (void)removeFromSuperview;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (id)scrollView;
- (struct CGRect)selectionBoundingBox;
- (void)selectionChanged;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionDidTranslateForReachability:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)selectionWillTranslateForReachability:(id)arg1;
- (BOOL)shouldBeVisible;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)showCaret:(int)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)showInitialCaret;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)textSelectionViewActivated:(id)arg1;
- (void)tintColorDidChange;
- (void)touchCaretBlinkTimer;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (void)updateDocumentHasContent:(BOOL)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateSelectionCommands;
- (void)updateSelectionDots;
- (void)updateSelectionRects;
- (void)updateSelectionRectsIfNeeded;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)validateWithInteractionAssistant:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (void)wilLResume:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)windowDidResignOrBecomeKey;

@end

