//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisibilityPropagationView.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/BSInvalidatable-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>
#import <UIKitCore/UIScenePresentation-Protocol.h>
#import <UIKitCore/_UISceneLayerHostContainerViewDataSource-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiffInspector, FBScene, NSHashTable, NSString, UIScenePresentationContext, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIScenePresentationView : _UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable>
{
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
    UIScenePresentationContext *_currentPresentationContext;
    _UISceneLayerHostContainerView *_hostContainerView;
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;
    NSHashTable *_observers;
    BOOL _invalidated;
}

@property (strong, nonatomic) UIScenePresentationContext *currentPresentationContext; // @synthesize currentPresentationContext=_currentPresentationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UISceneLayerHostContainerView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property (readonly, weak, nonatomic) id<UIScenePresenter> presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_geometryDidUpdateWithTransitionContext:(id)arg1;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_updateBackgroundColor;
- (void)_updateFrameAndTransform;
- (void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithPresenter:(id)arg1;
- (void)invalidate;
- (id)presentationContextForSceneLayerHostContainerView;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

