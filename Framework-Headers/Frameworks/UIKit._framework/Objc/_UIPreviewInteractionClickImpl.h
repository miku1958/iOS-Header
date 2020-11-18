//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Private-Protocol.h>
#import <UIKitCore/_UIClickInteractionDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionImpl-Protocol.h>

@class NSString, UIDragInteraction, UIPreviewInteraction, UIView, _UIClickInteraction, _UIPreviewInteractionHighlighter, _UIPreviewInteractionPresentationAssistant, _UIRelationshipGestureRecognizer, _UIStateMachine;
@protocol UIInteractionEffect, UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction>
{
    struct {
        BOOL shouldBegin;
        BOOL didUpdateCommitTransition;
        BOOL highlighterForPreviewTransition;
        BOOL viewControllerPresentationForPresentingViewController;
        BOOL shouldFinishTransitionToPreview;
        BOOL targetedPreviewForPreviewingAtLocation;
        BOOL overrideViewForCommitPhase;
    } _delegateImplements;
    id<UIPreviewInteractionDelegate> _delegate;
    id<UIPreviewInteractionDelegatePrivate> _privateDelegate;
    UIView *_view;
    id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    UIPreviewInteraction *_previewInteraction;
    id<UIInteractionEffect> _interactionEffect;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIClickInteraction *_commitClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIPreviewInteractionPresentationAssistant *_presentationAssistant;
    _UIPreviewInteractionHighlighter *_highlighter;
    UIDragInteraction *_associatedDragInteraction;
}

@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction; // @synthesize associatedDragInteraction=_associatedDragInteraction;
@property (strong, nonatomic) _UIClickInteraction *commitClickInteraction; // @synthesize commitClickInteraction=_commitClickInteraction;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // @synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property (strong, nonatomic) id<UIInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property (strong, nonatomic) _UIPreviewInteractionPresentationAssistant *presentationAssistant; // @synthesize presentationAssistant=_presentationAssistant;
@property (strong, nonatomic) _UIClickInteraction *previewClickInteraction; // @synthesize previewClickInteraction=_previewClickInteraction;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property (readonly, weak, nonatomic) id<UIPreviewInteractionDelegatePrivate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property (strong, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; // @synthesize touchForceProvider=_touchForceProvider;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (BOOL)_canPerformPresentation;
- (void)_delegateUpdateCommitTransitionWithProgress:(double)arg1 ended:(BOOL)arg2;
- (void)_delegateUpdatePreviewTransitionWithProgress:(double)arg1 ended:(BOOL)arg2;
- (void)_endInteractionDidComplete:(BOOL)arg1 wasCancelledByClient:(BOOL)arg2;
- (void)_endInteractionEffectIfNeeded;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_handleDidTransitionToPreview;
- (unsigned long long)_handleTransitionToActive;
- (unsigned long long)_handleTransitionToHighlight;
- (unsigned long long)_handleTransitionToPossibleByCommitting;
- (unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (unsigned long long)_handleTransitionToPreview;
- (BOOL)_isPaused;
- (BOOL)_performPresentationIfPossible;
- (void)_prepareInteractionEffect;
- (void)_prepareStateMachine;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_toBeRemoved_CallHighlighterCompletion;
- (void)_toBeRemoved_CreateHighlighterIfPossible;
- (void)cancelInteraction;
- (void)clickInteractionDidClickDown:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (BOOL)clickInteractionShouldBegin:(id)arg1;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end
