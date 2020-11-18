//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>
#import <SpringBoardUI/FBSceneMonitorDelegate-Protocol.h>
#import <SpringBoardUI/FBSceneObserver-Protocol.h>

@class FBSDisplayIdentity, FBSSceneDefinition, FBScene, FBSceneMonitor, NSHashTable, NSMapTable, NSString;

@interface SBSceneHandle : NSObject <FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding>
{
    FBSSceneDefinition *_definition;
    FBScene *_scene;
    long long _contentState;
    FBSDisplayIdentity *_displayIdentity;
    BOOL _manuallyControlsLifecycle;
    FBSceneMonitor *_sceneMonitor;
    NSHashTable *_observers;
    NSMapTable *_observersToObserverBehaviors;
}

@property (readonly, nonatomic, getter=isContentReady) BOOL contentReady;
@property (readonly, nonatomic) long long contentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_definition) FBSSceneDefinition *definition; // @synthesize definition=_definition;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, setter=_setDisplayIdentity:) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:) BOOL manuallyControlsLifecycle; // @synthesize manuallyControlsLifecycle=_manuallyControlsLifecycle;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBScene *sceneIfExists; // @synthesize sceneIfExists=_scene;
@property (strong, nonatomic, getter=_sceneMonitor, setter=_setSceneMonitor:) FBSceneMonitor *sceneMonitor; // @synthesize sceneMonitor=_sceneMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_createMonitor;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_didUpdateContentState:(long long)arg1;
- (void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithDefinition:(id)arg1 displayIdentity:(id)arg2;
- (id)_initWithDefinition:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithScene:(id)arg1 displayIdentity:(id)arg2;
- (void)_noteSceneCreated:(id)arg1;
- (void)_noteSceneDestroyed:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPairedWithExternalSceneWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
