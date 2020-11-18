//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate-Protocol.h>

@class FBScene, NSMapTable, NSString, UIScenePresentationContext, _UISceneKeyboardProxyLayerForwardingManager, _UIScenePresenterOwner;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver>
{
    _UISceneKeyboardProxyLayerForwardingManager *_keyboardProxyLayerManager;
    FBScene *_scene;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    BOOL _invalidated;
    UIScenePresentationContext *_defaultScenePresentationContext;
    id<UIScenePresentationManagerDelegate> _delegate;
    struct {
        BOOL defaultPriorityBand;
    } _delegateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext; // @synthesize defaultPresentationContext=_defaultScenePresentationContext;
@property (weak, nonatomic) id<UIScenePresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_defaultPresentationPriority;
- (BOOL)_hasPresenterWithIdentifier:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (id)_initWithScene:(id)arg1 keyboardProxyLayerManager:(id)arg2;
- (id)_presenterWithIdentifier:(id)arg1;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (id)createPresenterWithIdentifier:(id)arg1;
- (id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)modifyDefaultPresentationContext:(CDUnknownBlockType)arg1;
- (void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3;
- (void)ownerDidInvalidateLastPresenter:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (id)snapshotContext;
- (id)snapshotPresentationForSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
