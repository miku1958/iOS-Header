//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBarSwipeAffordanceDelegate-Protocol.h>
#import <SpringBoard/SBBarSwipeAffordanceObserver-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGrabberPointerClickDelegate-Protocol.h>
#import <SpringBoard/SBModalViewControllerStackDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/UIAlertControllerCoordinatedActionPerforming-Protocol.h>
#import <SpringBoard/_SBAlertControllerDelegate-Protocol.h>

@class NSString, SBAlertItem, SBAlertLayoutPresentationVerifier, SBBarSwipeAffordanceView, SBFWindow, SBHomeGestureArbiter, SBHomeGestureParticipant, SBModalViewControllerStack, SBReachabilityManager, SBSystemGestureManager;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver>
{
    id<SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBReachabilityManager *_reachabilityManager;
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBModalViewControllerStack *_modalViewControllerStack;
    SBFWindow *_window;
}

@property (readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack; // @synthesize modalViewControllerStack=_modalViewControllerStack;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;
- (void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1;
- (void)alertControllerDidDisappear:(id)arg1;
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)dealloc;
- (void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleReachabilityYOffsetDidChange;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5 enableGestures:(BOOL)arg6;
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(BOOL)arg3;
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;
- (void)presentAlertItem:(id)arg1 isLocked:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

