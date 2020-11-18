//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSZeroingWeakReference.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneManagerDelegate-Protocol.h>
#import <FrontBoard/FBSceneManagerInternalObserver-Protocol.h>

@class NSString;

@interface FBSceneManagerObserver : BSZeroingWeakReference <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerDelegate>
{
    BOOL _delegate;
    BOOL _internalObserver;
    BOOL _didCreate;
    BOOL _willDestroy;
    BOOL _didDestroy;
    BOOL _updatePrepared;
    BOOL _updateApplied;
    BOOL _updateCompleted;
    BOOL _didCreateSceneDEPRECATED;
    BOOL _willUpdateSceneDEPRECATED;
    BOOL _willCommitDEPRECATED;
    BOOL _didCommitDEPRECATED;
    BOOL _didCommitDEPRECATED2;
    BOOL _willSynchronize;
    BOOL _didSynchronize;
    BOOL _amendSettings;
    BOOL _didUpdateClientSettings;
    BOOL _didReceiveActions;
    BOOL _hostingPolicyForDisplay;
    BOOL _hostingPolicyForScene;
    BOOL _createDefaultTransitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDelegate) BOOL delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInternalObserver) BOOL internalObserver; // @synthesize internalObserver=_internalObserver;
@property (readonly, weak, nonatomic) id observer;
@property (readonly) Class superclass;

+ (id)observerWithObserver:(id)arg1;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

