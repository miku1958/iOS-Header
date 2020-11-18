//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneHost-Protocol.h>

@class FBProcess, FBSDisplayConfiguration, FBSMutableSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, FBSSceneIdentityToken, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSceneHostManager, FBSceneLayerManager, FBSceneObserver, NSArray, NSHashTable, NSMutableOrderedSet, NSString;
@protocol BSInvalidatable, FBSceneClient, FBSceneClientProvider, FBSceneDelegate, FBSceneManagerSceneDelegate;

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost>
{
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_hostManager;
    id<FBSceneManagerSceneDelegate> _sceneManagerSceneDelegate;
    FBSceneObserver *_delegateProxy;
    NSMutableOrderedSet *_observerProxies;
    BOOL _valid;
    id<FBSceneClient> _client;
    id<FBSceneClientProvider> _clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    NSString *_workspaceIdentifier;
    FBSSceneIdentityToken *_identityToken;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    FBSSceneDefinition *_definition;
    long long _contentState;
    BOOL _contentStateIsChanging;
    NSHashTable *_geometryObservers;
    unsigned long long _transactionID;
    BOOL _inTransaction;
    id<BSInvalidatable> _stateCaptureAssertion;
    unsigned long long _lastForegroundingTransitionID;
}

@property (readonly, nonatomic, getter=_isInTransaction) BOOL _inTransaction; // @synthesize _inTransaction;
@property (readonly, nonatomic) unsigned long long _transactionID; // @synthesize _transactionID;
@property (readonly, nonatomic) id<FBSceneClient> client; // @synthesize client=_client;
@property (readonly, nonatomic) FBProcess *clientProcess; // @synthesize clientProcess=_clientProcess;
@property (readonly, nonatomic) id<FBSceneClientProvider> clientProvider; // @synthesize clientProvider=_clientProvider;
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property (readonly, nonatomic) long long contentState; // @synthesize contentState=_contentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition; // @synthesize definition=_definition;
@property (weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly, nonatomic) FBSceneObserver *delegateProxy;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) FBSDisplayConfiguration *display;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) FBSceneHostManager *hostManager;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *identityToken; // @synthesize identityToken=_identityToken;
@property (readonly, nonatomic) FBSceneLayerManager *layerManager; // @synthesize layerManager=_layerManager;
@property (strong, nonatomic) FBSMutableSceneSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
@property (readonly, copy, nonatomic) NSArray *observerProxies;
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (weak, nonatomic) id<FBSceneManagerSceneDelegate> sceneManagerSceneDelegate; // @synthesize sceneManagerSceneDelegate=_sceneManagerSceneDelegate;
@property (readonly, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;

- (void).cxx_destruct;
- (void)_addSceneGeometryObserver:(id)arg1;
- (void)_adjustInitialSettings:(id)arg1;
- (void)_applyUpdateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_beginTransaction;
- (void)_dispatchClientMessageWithBlock:(CDUnknownBlockType)arg1;
- (void)_endTransaction:(unsigned long long)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)_setContentState:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)clientWillInvalidate:(id)arg1;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)snapshotContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithTransitionBlock:(CDUnknownBlockType)arg1;

@end
