//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/FBSceneObserver-Protocol.h>
#import <SpringBoard/SBSceneManagerObserver-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, SBAlertItemsController, SBApplicationController;

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable>
{
    NSSet *_launchAlertEvaluators;
    SBApplicationController *_applicationController;
    SBAlertItemsController *_alertItemsController;
    NSSet *_sceneManagers;
    NSMutableSet *_foregroundingScenes;
    NSMutableDictionary *_mapBundleIDToLaunchAlertInfo;
    BOOL _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3;
- (void)_sceneDidBecomeForeground:(id)arg1;
- (void)_sceneDidResignForeground:(id)arg1;
- (void)_sceneWillBecomeForeground:(id)arg1;
- (void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4;
- (void)invalidate;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
