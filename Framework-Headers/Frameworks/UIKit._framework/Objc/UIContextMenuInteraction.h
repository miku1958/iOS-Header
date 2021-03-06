//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDeferredMenuElementDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/_UIClickPresentationInteractionDelegateInternal-Protocol.h>
#import <UIKitCore/_UIContextMenuPresentationAnimationDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewPlatterPresentationControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIContextMenuConfiguration, UIGestureRecognizer, UITargetedPreview, UIView, _UIClickPresentationInteraction, _UIContextMenuAnimator;
@protocol UIContextMenuInteractionDelegate;

@interface UIContextMenuInteraction : NSObject <_UIClickPresentationInteractionDelegateInternal, _UIPreviewPlatterPresentationControllerDelegate, _UIContextMenuPresentationAnimationDelegate, UIDeferredMenuElementDelegate, UIInteraction>
{
    struct {
        BOOL previewForHighlighting;
        BOOL previewForDismissing;
        BOOL willPerformPreviewActionForMenuWithConfiguration;
        BOOL willDisplayMenuForConfiguration;
        BOOL willEndForConfiguration;
        BOOL styleForMenuWithConfiguration;
        BOOL accessoriesForMenuWithConfiguration;
        BOOL failedToBeginForSecondaryClickAtLocation;
        BOOL asyncConfigurationForMenuAtLocation;
        BOOL overrideSuggestedActions;
        BOOL shouldAllowDragAfterDismiss;
        BOOL interactionEffectForTargetedPreview;
        BOOL shouldAttemptToPresentConfiguration;
        BOOL willCommit;
        BOOL willPresent;
        BOOL didEnd;
    } _delegateImplements;
    UIView *_view;
    id<UIContextMenuInteractionDelegate> _delegate;
    UIContextMenuConfiguration *_pendingConfiguration;
    NSMutableDictionary *_configurationsByIdentifier;
    NSMutableDictionary *_presentationsByIdentifier;
    _UIClickPresentationInteraction *_presentationInteraction;
    UITargetedPreview *_stashedPreview;
    _UIContextMenuAnimator *_pendingCommitAnimator;
}

@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (nonatomic) BOOL allowSimultaneousRecognition;
@property (strong, nonatomic) NSMutableDictionary *configurationsByIdentifier; // @synthesize configurationsByIdentifier=_configurationsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<UIContextMenuInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long menuAppearance;
@property (strong, nonatomic) _UIContextMenuAnimator *pendingCommitAnimator; // @synthesize pendingCommitAnimator=_pendingCommitAnimator;
@property (strong, nonatomic) UIContextMenuConfiguration *pendingConfiguration; // @synthesize pendingConfiguration=_pendingConfiguration;
@property (strong, nonatomic) _UIClickPresentationInteraction *presentationInteraction; // @synthesize presentationInteraction=_presentationInteraction;
@property (strong, nonatomic) NSMutableDictionary *presentationsByIdentifier; // @synthesize presentationsByIdentifier=_presentationsByIdentifier;
@property (copy, nonatomic) UITargetedPreview *stashedPreview; // @synthesize stashedPreview=_stashedPreview;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)_deferredMenuPlaceholder;
- (void).cxx_destruct;
- (id)_accessoryViewsForPreviewPlatterPresentationController:(id)arg1;
- (unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2;
- (id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (id)_clickPresentationInteraction:(id)arg1 liveDragPreviewForPresentation:(id)arg2;
- (id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;
- (void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3;
- (BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1;
- (BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1;
- (unsigned long long)_currentActivationMode;
- (id)_delegate_configurationForMenuAtLocation:(struct CGPoint)arg1;
- (id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)arg1;
- (id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)arg1 presentation:(id)arg2;
- (BOOL)_delegate_failedToBeginForSecondaryClickAtLocation:(struct CGPoint)arg1;
- (id)_delegate_previewForDismissingForConfiguration:(id)arg1 clientReturnedPreview:(BOOL *)arg2;
- (id)_delegate_previewForHighlightingForConfiguration:(id)arg1;
- (void)_delegate_tappedPreviewForConfiguration:(id)arg1 withAnimator:(id)arg2;
- (void)_dragMorphDidCompleteForConfiguration:(id)arg1;
- (id)_fulfilledConfigurationForConfiguration:(id)arg1 activationMode:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 inCoordinateSpace:(id)arg4;
- (id)_interactionDrivers;
- (void)_interactionShouldBeginAtLocation:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_liveDragPreviewForConfiguration:(id)arg1 dragItem:(id)arg2;
- (id)_menuPreparedForDisplayWithMenu:(id)arg1;
- (id)_overrideTargetedPreviewForCompactStyle:(id)arg1;
- (void)_performCleanupForConfigurationWithIdentifier:(id)arg1;
- (void)_presentMenuAtLocation:(struct CGPoint)arg1;
- (void)_previewPlatterPresentationController:(id)arg1 beginDragWithTouch:(id)arg2;
- (void)_previewPlatterPresentationController:(id)arg1 didSelectMenuLeaf:(id)arg2;
- (id)_previewPlatterPresentationController:(id)arg1 willDisplayMenu:(id)arg2;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidTapPreview:(id)arg1;
- (BOOL)_previewPlatterPresentationControllerShouldHandlePreviewAction:(id)arg1;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(id)arg1 withReason:(unsigned long long)arg2 alongsideActions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_proxySender;
- (BOOL)_shouldKeepInputViewVisibleForLayout:(unsigned long long)arg1;
- (id)_suggestedMenuForConfiguration:(id)arg1 atLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;
- (void)_updateInteractionDrivers;
- (void)_updateVisibleMenuWithBlock:(CDUnknownBlockType)arg1;
- (void)_willBeginWithConfiguration:(id)arg1;
- (id)actualPlatterContainerViewForPresentationController:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)dealloc;
- (void)deferredMenuElementWasFulfilled:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)dismissMenu;
- (id)initWithDelegate:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (id)targetedPreviewForAnimator:(id)arg1 dismissingWithStyle:(unsigned long long)arg2 clientReturnedPreview:(BOOL *)arg3;
- (void)updateVisibleMenuWithBlock:(CDUnknownBlockType)arg1;
- (void)willMoveToView:(id)arg1;

@end

