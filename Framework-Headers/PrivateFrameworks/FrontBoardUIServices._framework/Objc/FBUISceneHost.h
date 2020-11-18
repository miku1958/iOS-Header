//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUISceneHost-Protocol.h>
#import <FrontBoardUIServices/FBUISceneUpdater-Protocol.h>

@class FBUISceneIdentity, NSString;
@protocol FBUISceneClientProxy;

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater>
{
    FBUISceneIdentity *_identity;
    id<FBUISceneClientProxy> _sceneClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) Class superclass;

- (id)contentView;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)invalidateSceneClient;
- (void)registerSceneClient:(id)arg1;
- (id)sceneClient;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (void)sendActions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
