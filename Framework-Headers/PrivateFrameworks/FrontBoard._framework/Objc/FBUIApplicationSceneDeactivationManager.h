//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneManagerInternalObserver-Protocol.h>
#import <FrontBoard/FBSceneManagerObserver-Protocol.h>

@class FBScene, NSMutableArray, NSMutableSet, NSString;

@interface FBUIApplicationSceneDeactivationManager : NSObject <FBSceneManagerObserver, FBSceneManagerInternalObserver, BSDescriptionProviding>
{
    NSMutableSet *_eligibleScenes;
    NSMutableArray *_activeBands;
    FBScene *_updatingScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (BOOL)_areEligibleSceneSettings:(id)arg1 forProcess:(id)arg2;
- (id)_bandForSceneLevel:(double)arg1 createIfNeeded:(BOOL)arg2;
- (id)_deactivationBandsForLevel:(double)arg1;
- (unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (BOOL)_isEligibleDisplay:(id)arg1;
- (BOOL)_isEligibleProcess:(id)arg1;
- (BOOL)_isEligibleScene:(id)arg1;
- (BOOL)_isEligibleScene:(id)arg1 forSettings:(id)arg2;
- (void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3;
- (void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3;
- (void)_trackScene:(id)arg1;
- (void)_untrackScene:(id)arg1;
- (void)_updateAllScenesForBand:(id)arg1 withTransitionContext:(id)arg2;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)removeAssertion:(id)arg1;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

