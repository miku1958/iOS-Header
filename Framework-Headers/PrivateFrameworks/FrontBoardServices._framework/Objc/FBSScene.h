//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneLayerDelegate-Protocol.h>
#import <FrontBoardServices/FBSSceneUpdaterDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, NSArray, NSString;
@protocol FBSSceneDelegate;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, FBSSceneLayerDelegate, BSDescriptionProviding>
{
}

@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSSceneDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly) Class superclass;

- (void)_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_hasAgent;
- (id)_init;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)contexts;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (id)fbsDisplay;
- (id)init;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)invalidate;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (BOOL)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)snapshotRequest;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

