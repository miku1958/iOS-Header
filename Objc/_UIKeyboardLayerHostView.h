//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISceneLayerHostView.h>

#import <UIKitCore/FBSceneObserver-Protocol.h>

@class FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken, FBScene, NSString;
@protocol BSInvalidatable, UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayerHostView : _UISceneLayerHostView <FBSceneObserver>
{
    CDUnknownBlockType _sceneLayerMatchingPredicate;
    FBScene *_owningScene;
    FBScene *_keyboardScene;
    id<BSInvalidatable> _keyboardSceneAvailabilityObserver;
    FBSSceneClientSettingsDiffInspector *_keyboardSceneClientSettingsDiffInspector;
    FBSSceneIdentityToken *_keyboardPreferredHostIdentity;
    BOOL _isPaired;
    id<UIScenePresenter> _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithLayer:(id)arg1 owningScene:(id)arg2 keyboardMatchingPredicate:(CDUnknownBlockType)arg3;
- (void)_setKeyboardScene:(id)arg1;
- (void)_updatePairingState;
- (void)dealloc;
- (id)initWithKeyboardLayer:(id)arg1 owningScene:(id)arg2;
- (id)initWithKeyboardProxyLayer:(id)arg1 owningScene:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setCurrentPresentationContext:(id)arg1;

@end

