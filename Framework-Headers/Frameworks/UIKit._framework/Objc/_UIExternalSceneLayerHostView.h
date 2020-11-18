//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISceneLayerHostView.h>

#import <UIKitCore/UIExternalScenePairingObserverDelegate-Protocol.h>

@class FBScene, NSString, UIExternalScenePairingObserver, UIScenePresentationManager;
@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate>
{
    FBScene *_parentScene;
    FBScene *_targetScene;
    NSString *_targetSceneID;
    UIExternalScenePairingObserver *_pairingObserver;
    UIScenePresentationManager *_presentationManager;
    id<UIScenePresenter> _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FBScene *targetScene; // @synthesize targetScene=_targetScene;

- (void).cxx_destruct;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (void)dealloc;
- (void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;
- (void)setCurrentPresentationContext:(id)arg1;

@end
