//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PlatterKit/_UIClickPresentationInteractionDelegate-Protocol.h>

@class NSString, UIGestureRecognizer, UIViewController, _UIClickPresentation, _UIClickPresentationInteraction;
@protocol PLClickPresentationInteractionManagerDelegate, PLClickPresentationInteractionPresentable, PLClickPresentationInteractionPresenting;

@interface PLClickPresentationInteractionManager : NSObject <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate>
{
    BOOL _didPresent;
    UIViewController<PLClickPresentationInteractionPresenting> *_presentingViewController;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    _UIClickPresentation *_clickPresentation;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
    struct {
        unsigned int delegateImplementsContainerView:1;
        unsigned int delegateImplementsTransitioningDelegate:1;
        unsigned int delegateImplementsShouldBeginInteraction:1;
        unsigned int delegateImplementsShouldFinishInteraction:1;
        unsigned int delegateImplementsWillBeginUserInteraction:1;
        unsigned int delegateImplementsDidEndUserInteraction:1;
        unsigned int delegateImplementsWillDismissPresentedContent:1;
        unsigned int delegateImplementsDeclinedDismissingPresentedContent:1;
        unsigned int delegateImplementsShouldAllowLongPressGesture:1;
        unsigned int delegateShouldFinishInteraction:1;
    } _clickPresentationInteractionManagerDelegateFlags;
    BOOL _didInteractionInitiateWithHint;
    BOOL _willPresent;
    id<PLClickPresentationInteractionManagerDelegate> _delegate;
    UIViewController<PLClickPresentationInteractionPresentable> *_presentedViewController;
}

@property (readonly, nonatomic, getter=hasCommittedToPresentation) BOOL committedToPresentation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PLClickPresentationInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDidInteractionInitiateWithHint:) BOOL didInteractionInitiateWithHint; // @synthesize didInteractionInitiateWithHint=_didInteractionInitiateWithHint;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, getter=_willPresent, setter=_setWillPresent:) BOOL willPresent; // @synthesize willPresent=_willPresent;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_clickInteractionDidEnd;
- (void)_clickPresentationTransitionDidDismiss:(BOOL)arg1;
- (void)_clickPresentationTransitionDidPresent:(BOOL)arg1;
- (id)_delegateContainerView;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateDidEndUserInteraction;
- (id)_delegatePresentedViewController;
- (BOOL)_delegateShouldAllowLongPressGesture;
- (BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg1;
- (void)_delegateShouldFinishInteractionThatReachedForceThreshold:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_delegateTransitioningDelegate;
- (void)_delegateWillBeginUserInteraction;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1;
- (BOOL)_dismissIfPossibleWithTrigger:(long long)arg1;
- (id)_presentedViewController;
- (void)_setPresentingViewControllerHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
- (BOOL)clickPresentationInteractionShouldBegin:(id)arg1;
- (BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
- (BOOL)dismissIfPossible:(CDUnknownBlockType)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (BOOL)presentIfPossible:(CDUnknownBlockType)arg1;
- (void)resetForInitialInteraction;

@end

