//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIResponderStandardEditActions-Protocol.h>
#import <UIKit/UITextInputAdditions-Protocol.h>
#import <UIKit/UITextInput_Internal-Protocol.h>
#import <UIKit/_UIStateRestorationContinuation-Protocol.h>
#import <UIKit/_UITouchable-Protocol.h>

@class NSArray, NSString, NSUndoManager, NSUserActivity, UIInputViewController, UITextInputAssistantItem, UITextInputMode, UIView;
@protocol UITextInput, UITextInputPrivate;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation, _UITouchable, UIResponderStandardEditActions>
{
    unsigned int _hasOverrideClient:1;
    unsigned int _hasOverrideHost:1;
    unsigned int _hasInputAssistantItem:1;
}

@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIResponder *_editingDelegate;
@property (readonly, nonatomic) UIResponder *_responderForEditing;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (readonly, nonatomic) BOOL canBecomeFirstResponder;
@property (readonly, nonatomic) BOOL canResignFirstResponder;
@property (readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *inputAccessoryView;
@property (readonly, nonatomic) UIInputViewController *inputAccessoryViewController;
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (readonly, nonatomic) UIView *inputView;
@property (readonly, nonatomic) UIInputViewController *inputViewController;
@property (readonly, nonatomic) BOOL isFirstResponder;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) UIResponder *nextResponder;
@property (copy, nonatomic) NSString *restorationIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textInputContextIdentifier;
@property (readonly, nonatomic) UITextInputMode *textInputMode;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (strong, nonatomic) NSUserActivity *userActivity;

+ (void)_cleanupAllStateRestorationTables;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_finishStateRestoration;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)clearTextInputContextIdentifier:(id)arg1;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;
- (id)_asTextSelection;
- (void)_becomeFirstResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_beginPinningInputViews;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)_canBecomeFirstResponderWhenPossible;
- (BOOL)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (BOOL)_canResignIfContainsFirstResponder;
- (BOOL)_canShowTextServices;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearOverrideHost;
- (void)_clearOverrideNextResponder;
- (void)_clearRestorableResponderStatus;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)_containsResponder:(id)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (id)_currentOverrideClient;
- (id)_currentOverrideHost;
- (id)_deepestUnambiguousResponder;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_didChangeDeepestUnambiguousResponder;
- (void)_didChangeToFirstResponder:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (BOOL)_disableAutomaticKeyboardUI;
- (long long)_dragDataOwner;
- (long long)_dropDataOwner;
- (id)_effectivePasteConfiguration;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (void)_endPinningInputViews;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (BOOL)_finishResignFirstResponder;
- (id)_firstResponder;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long *)arg2 visibilityTest:(CDUnknownBlockType)arg3 passingTest:(CDUnknownBlockType)arg4;
- (void)_handleGameControllerEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (BOOL)_isEmptySelection;
- (BOOL)_isPinningInputViews;
- (BOOL)_isRootForKeyResponderCycle;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (BOOL)_isViewController;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommandForEvent:(id)arg1 target:(id *)arg2;
- (id)_keyCommands;
- (id)_keyCommandsInChainPassingTest:(CDUnknownBlockType)arg1;
- (id)_keyInput;
- (id)_keyboardResponder;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_nextKeyResponder;
- (id)_nextResponderOverride;
- (void)_nonDestructivelyResignFirstResponder;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_overrideHost;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;
- (BOOL)_ownsInputAccessoryView;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)_preserveResponderOverridesWhilePerforming:(CDUnknownBlockType)arg1;
- (id)_previousKeyResponder;
- (id)_primaryContentResponder;
- (BOOL)_range:(id)arg1 containsRange:(id)arg2;
- (BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (void)_rebuildStateRestorationIdentifierPath;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_resignFirstResponder;
- (BOOL)_resignIfContainsFirstResponder;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderSelectionImage;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (id)_responderWindow;
- (id)_restorationIdentifierPath;
- (BOOL)_restoreFirstResponder;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange)_selectedNSRange;
- (struct _NSRange)_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect)_selectionClipRect;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setDragDataOwner:(long long)arg1;
- (void)_setDropDataOwner:(long long)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_tagAsRestorableResponder;
- (id)_targetCanPerformBlock:(CDUnknownBlockType)arg1;
- (id)_textColorForCaretSelection;
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_userActivity;
- (BOOL)_usesAsynchronousProtocol;
- (BOOL)_usesDeemphasizedTextAppearance;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_willChangeToFirstResponder:(id)arg1;
- (id)_window;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)_wordContainingCaretSelection;
- (BOOL)becomeFirstResponder;
- (void)beginSelectionChange;
- (BOOL)canPasteItemProviders:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endSelectionChange;
- (id)firstResponder;
- (void)gestureChanged:(struct __GSEvent *)arg1;
- (void)gestureEnded:(struct __GSEvent *)arg1;
- (void)gestureStarted:(struct __GSEvent *)arg1;
- (id)interactionAssistant;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)nextFirstResponder;
- (id)pasteConfiguration;
- (void)pasteItemProviders:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsAccessoryView;
- (void)reloadInputViews;
- (void)reloadInputViewsWithoutReset;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollWheel:(struct __GSEvent *)arg1;
- (long long)selectionAffinity;
- (void)setPasteConfiguration:(id)arg1;
- (BOOL)shouldReloadInputViews;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputSuggestionDelegate;
- (id)textInputView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateUserActivityState:(id)arg1;

@end

