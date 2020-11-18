//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/FBApplicationUpdateScenesTransactionObserver-Protocol.h>
#import <AssistantUI/FBSceneObserver-Protocol.h>

@class AFUISceneConfiguration, BKSProcessAssertion, FBApplicationUpdateScenesTransaction, FBScene, NSString;
@protocol AFUISceneControllerDelegate;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver>
{
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    BOOL _sceneForeground;
    unsigned long long _invalidationReason;
    id<AFUISceneControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFUISceneControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentConfiguration;
- (void)_recordSceneCreateBegin;
- (void)_recordSceneCreateEnd;
- (void)cancelSceneLoadingTimeOut;
- (void)dealloc;
- (void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneLoadingTimeOutDidOccur;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)updateSceneViewWithConfiguration:(id)arg1;

@end
