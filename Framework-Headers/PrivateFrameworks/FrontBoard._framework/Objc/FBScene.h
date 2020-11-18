//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneHost-Protocol.h>

@class FBProcess, FBSDisplay, FBSMutableSceneSettings, FBSSceneClientSettings, FBSSceneSettings, FBSceneHostManager, FBSceneLayerManager, FBWindowContextHostManager, FBWindowContextManager, NSHashTable, NSString;
@protocol FBSceneClient, FBSceneClientProvider, FBSceneDelegate;

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost>
{
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_hostManager;
    BOOL _valid;
    id<FBSceneDelegate> _delegate;
    id<FBSceneClient> _client;
    id<FBSceneClientProvider> _clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    FBSDisplay *_display;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    NSHashTable *_geometryObservers;
    unsigned long long _transactionID;
    BOOL _lockedForMutation;
}

@property (nonatomic, setter=_setLockedForMutation:) BOOL _lockedForMutation; // @synthesize _lockedForMutation;
@property (readonly, nonatomic) unsigned long long _transactionID; // @synthesize _transactionID;
@property (readonly, strong, nonatomic) id<FBSceneClient> client; // @synthesize client=_client;
@property (readonly, strong, nonatomic) FBProcess *clientProcess; // @synthesize clientProcess=_clientProcess;
@property (readonly, strong, nonatomic) id<FBSceneClientProvider> clientProvider; // @synthesize clientProvider=_clientProvider;
@property (readonly, strong, nonatomic) FBSSceneClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property (readonly, strong, nonatomic) FBWindowContextHostManager *contextHostManager;
@property (readonly, strong, nonatomic) FBWindowContextManager *contextManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<FBSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) FBSceneHostManager *hostManager; // @synthesize hostManager=_hostManager;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, strong, nonatomic) FBSceneLayerManager *layerManager; // @synthesize layerManager=_layerManager;
@property (readonly, strong, nonatomic) FBSMutableSceneSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
@property (readonly, strong, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void)_addSceneGeometryObserver:(id)arg1;
- (void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleSceneClientMessage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_incrementTransactionID;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4;
- (void)sendActions:(id)arg1;
- (id)snapshotContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithTransitionBlock:(CDUnknownBlockType)arg1;

@end

