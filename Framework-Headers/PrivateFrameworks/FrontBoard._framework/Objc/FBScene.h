//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneHost-Protocol.h>
#import <FrontBoard/FBUISceneUpdater-Protocol.h>

@class FBProcess, FBSDisplayConfiguration, FBSMutableSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSceneHostManager, FBSceneLayerManager, NSHashTable, NSString;
@protocol BSInvalidatable, FBSceneClient, FBSceneClientProvider, FBSceneDelegate;

@interface FBScene : NSObject <BSDescriptionProviding, FBUISceneUpdater, FBSceneHost>
{
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_hostManager;
    BOOL _valid;
    id<FBSceneDelegate> _delegate;
    id<FBSceneClient> _client;
    id<FBSceneClientProvider> _clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    NSString *_workspaceIdentifier;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    FBSSceneDefinition *_definition;
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
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition; // @synthesize definition=_definition;
@property (weak, nonatomic) id<FBSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) FBSDisplayConfiguration *display;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) FBSceneHostManager *hostManager; // @synthesize hostManager=_hostManager;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) FBSceneLayerManager *layerManager; // @synthesize layerManager=_layerManager;
@property (strong, nonatomic) FBSMutableSceneSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (readonly, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;

- (void).cxx_destruct;
- (void)_addSceneGeometryObserver:(id)arg1;
- (void)_applyUpdateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_beginTransaction;
- (void)_dispatchClientMessageWithBlock:(CDUnknownBlockType)arg1;
- (void)_endTransaction:(unsigned long long)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (void)clientWillInvalidate:(id)arg1;
- (id)contentView;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
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

