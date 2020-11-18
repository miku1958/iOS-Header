//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinating-Protocol.h>

@class NSMutableDictionary, NSString, SBMainDisplaySceneLayoutViewController, SBSceneLayoutLiveContentOverlay;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBMainFluidSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>
{
    BOOL _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
    NSMutableDictionary *_animationWrapperViewOverlays;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBSceneLayoutLiveContentOverlay *_sceneLayoutLiveContentOverlay;
}

@property (strong, nonatomic) NSMutableDictionary *animationWrapperViewOverlays; // @synthesize animationWrapperViewOverlays=_animationWrapperViewOverlays;
@property (nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended; // @synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended;
@property (strong, nonatomic) SBSceneLayoutLiveContentOverlay *sceneLayoutLiveContentOverlay; // @synthesize sceneLayoutLiveContentOverlay=_sceneLayoutLiveContentOverlay;
@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg1;
- (BOOL)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;

@end
