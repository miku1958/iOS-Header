//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class FBSMutableSceneParameters, NSString, SBApplicationSceneEntity, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest, UIApplicationSceneSettings, UIApplicationSceneTransitionContext;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBApplicationSceneEntity *_applicationSceneEntity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    NSString *_sceneIdentifier;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    BOOL _suspendedActivation;
    BOOL _shouldSendActivationResult;
}

@property (readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // @synthesize applicationSceneEntity=_applicationSceneEntity;
@property (readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) BOOL shouldSendActivationResult; // @synthesize shouldSendActivationResult=_shouldSendActivationResult;

- (void).cxx_destruct;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_sendActivationResultWithError:(id)arg1;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;

@end

