//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinating-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, SBMainDisplaySceneLayoutViewController, SBSceneLayoutLiveContentOverlay;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>
{
    BOOL _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
    NSMutableDictionary *_appLayoutToLiveContentOverlayContext;
    NSMutableArray *_visibleAlwaysLiveAppLayouts;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBSceneLayoutLiveContentOverlay *_sceneLayoutLiveContentOverlay;
}

@property (strong, nonatomic) NSMutableDictionary *appLayoutToLiveContentOverlayContext; // @synthesize appLayoutToLiveContentOverlayContext=_appLayoutToLiveContentOverlayContext;
@property (nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended; // @synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended;
@property (strong, nonatomic) SBSceneLayoutLiveContentOverlay *sceneLayoutLiveContentOverlay; // @synthesize sceneLayoutLiveContentOverlay=_sceneLayoutLiveContentOverlay;
@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *visibleAlwaysLiveAppLayouts; // @synthesize visibleAlwaysLiveAppLayouts=_visibleAlwaysLiveAppLayouts;

- (void).cxx_destruct;
- (void)_addOverlay:(id)arg1 withType:(long long)arg2 forAppLayout:(id)arg3 animated:(BOOL)arg4;
- (BOOL)_canTransitionToOverlayType:(long long)arg1 forAppLayout:(id)arg2;
- (long long)_existingOverlayTypeForAppLayout:(id)arg1;
- (BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg1;
- (void)_removeOverlayForAppLayout:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)arg1;
- (void)_updateAlwaysLiveSceneContentOverlays;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)appLayoutDidBecomeHidden:(id)arg1;
- (void)appLayoutWillBecomeVisible:(id)arg1;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;

@end

