//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/SBMultiplexedSpotlightDelegate-Protocol.h>
#import <SpringBoard/SBScrollToTopSceneProxyViewDelegate-Protocol.h>

@class NSString, SBMedusaHostedKeyboardWindowLevelAssertion, SBScrollToTopSceneProxyView, _UILegibilitySettings;
@protocol SPUIRemoteSearchViewDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate>
{
    SBScrollToTopSceneProxyView *_scrollToTopView;
    BOOL _activeDelegate;
    _UILegibilitySettings *_legibilitySettings;
    id<SPUIRemoteSearchViewDelegate> _spotlightDelegate;
    SBMedusaHostedKeyboardWindowLevelAssertion *_medusaHostedKeyboardWindowLevelAssertion;
}

@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate; // @synthesize activeDelegate=_activeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly, nonatomic) unsigned long long level;
@property (strong, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion; // @synthesize medusaHostedKeyboardWindowLevelAssertion=_medusaHostedKeyboardWindowLevelAssertion;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate; // @synthesize spotlightDelegate=_spotlightDelegate;
@property (readonly) Class superclass;

+ (id)sharedRemoteSearchViewController;
+ (id)sharedRemoteSearchViewControllerIfExists;
- (void).cxx_destruct;
- (void)_configureStatusBarScrollToTopView;
- (void)_registerStatusBarScrollToTopView;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1;
- (id)_sceneHandle;
- (id)_spotlightSceneIdentifier;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1;
- (void)dealloc;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate;
- (void)dismissSearchView;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

