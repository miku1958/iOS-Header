//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>
#import <PBBridgeSupport/PBBridgeGizmoProtocol-Protocol.h>

@class NSString, NSTimer;
@protocol PBBridgeConnectionDelegate;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol>
{
    BOOL _canBeginActivation;
    BOOL _readyToCreatePasscode;
    unsigned short _activationState;
    id<PBBridgeConnectionDelegate> _delegate;
    NSString *_languageIdentifer;
    NSString *_regionIdentifer;
    NSTimer *_activationTimeout;
    NSString *_internalLastSendMessageID;
    CDUnknownBlockType _updateLanguageCompletion;
    CDUnknownBlockType _updateRegionCompletion;
    CDUnknownBlockType _sessionCompletion;
    CDUnknownBlockType _activationCompletion;
    CDUnknownBlockType _siriStateCompletion;
    CDUnknownBlockType _enableSiriCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType activationCompletion; // @synthesize activationCompletion=_activationCompletion;
@property (nonatomic) unsigned short activationState; // @synthesize activationState=_activationState;
@property (strong, nonatomic) NSTimer *activationTimeout; // @synthesize activationTimeout=_activationTimeout;
@property (readonly, nonatomic) BOOL canBeginActivation; // @synthesize canBeginActivation=_canBeginActivation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBBridgeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType enableSiriCompletion; // @synthesize enableSiriCompletion=_enableSiriCompletion;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *internalLastSendMessageID; // @synthesize internalLastSendMessageID=_internalLastSendMessageID;
@property (readonly, nonatomic) NSString *languageIdentifer; // @synthesize languageIdentifer=_languageIdentifer;
@property (readonly, nonatomic) BOOL readyToCreatePasscode; // @synthesize readyToCreatePasscode=_readyToCreatePasscode;
@property (readonly, nonatomic) NSString *regionIdentifer; // @synthesize regionIdentifer=_regionIdentifer;
@property (copy, nonatomic) CDUnknownBlockType sessionCompletion; // @synthesize sessionCompletion=_sessionCompletion;
@property (copy, nonatomic) CDUnknownBlockType siriStateCompletion; // @synthesize siriStateCompletion=_siriStateCompletion;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateLanguageCompletion; // @synthesize updateLanguageCompletion=_updateLanguageCompletion;
@property (copy, nonatomic) CDUnknownBlockType updateRegionCompletion; // @synthesize updateRegionCompletion=_updateRegionCompletion;

+ (id)prepareOfflineTermsResponse:(id)arg1;
+ (id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_getActivationData:(BOOL)arg1 forRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_recordThatWatchFinishedActivating;
- (BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (BOOL)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (void)activationTimeout:(id)arg1;
- (void)beganAwaitingAbilityToActivate;
- (void)companionBecameAvailableWantsConfirmation:(id)arg1;
- (void)companionDidSendLanguageAndLocale:(id)arg1;
- (void)companionDidSendTinkerWirelessCredentials:(id)arg1;
- (void)companionDidSendWirelessCredentials:(id)arg1;
- (void)companionTermsResponse:(id)arg1;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)doInitialSyncPrep:(id)arg1;
- (void)enableSiriForGizmoWithCompletion:(CDUnknownBlockType)arg1;
- (void)enabledSiri:(id)arg1;
- (void)endSetupTransaction;
- (void)fetchTermsAndConditions:(id)arg1;
- (BOOL)getActivationDataAndHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)getActivationDataForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)getSessionDataForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSiriStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)gotSiriState:(id)arg1;
- (void)handleActivationData:(id)arg1;
- (void)handleBuysOnWatchIngestion:(id)arg1;
- (void)handleOfflineTermsRequest:(id)arg1;
- (void)handleRenameDeviceRequest:(id)arg1;
- (void)handleWarrantySentinelRequest:(id)arg1;
- (void)ingestTinkerCredentials:(id)arg1;
- (id)init;
- (void)invalidateTimeoutTimer;
- (void)popToControllerType:(id)arg1;
- (void)prepareForForcedWatchSU:(id)arg1;
- (void)pushControllerType:(id)arg1;
- (void)refreshTimeoutTimer;
- (void)remoteRequestToKeepAlive:(id)arg1;
- (BOOL)reportRemoteActivationFailureError:(id)arg1;
- (void)retryActivation:(id)arg1;
- (void)returnProxiedDeviceForDeviceWithData:(id)arg1;
- (BOOL)sendCompanionPerformanceResults;
- (id)serviceIdentifier;
- (void)setCanBeginActivating:(id)arg1;
- (void)setCompanionLanguage:(id)arg1;
- (void)setCompanionRegion:(id)arg1;
- (void)setComputedTimeZone:(id)arg1;
- (void)setCrownOrientationRight:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDiagnosticsEnabled:(id)arg1;
- (void)setFitnessRouteAuthorizationForTinker:(id)arg1;
- (void)setLocationEnabled:(id)arg1;
- (void)setMessagesInCloudEnabledForTinker:(id)arg1;
- (void)setPasscodeRestrictions:(id)arg1;
- (void)setSiriEnabled:(id)arg1;
- (void)setupServiceMessageSelectorMappings;
- (void)showLockedOnAnimation:(id)arg1;
- (BOOL)tellCompanionGizmoBeganActivating;
- (BOOL)tellCompanionGizmoFailedActivating:(id)arg1;
- (BOOL)tellCompanionGizmoFinishedActivating;
- (BOOL)tellCompanionGizmoFinishedActivatingAsDeKOTA;
- (void)tellCompanionGizmoFinishedHealthSharingOptInWithSelection:(BOOL)arg1;
- (void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1;
- (void)tellCompanionThatGizmoFinishedChangingPasscode:(BOOL)arg1 isLong:(BOOL)arg2;
- (void)tellCompanionThatGizmoFinishedSettingPasscode:(BOOL)arg1 isLong:(BOOL)arg2;
- (void)tellCompanionThatGizmoFinishedUnlockPairing:(BOOL)arg1;
- (void)tellCompanionThatGizmoStartedUnlockPairing;
- (BOOL)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)arg1;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (BOOL)updateLanguageIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)updateRegionIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSynchProgress:(id)arg1;
- (void)waitForDynamicActivationEventPresentation:(id)arg1;
- (void)waitForUserResponseToDynamicEventPresentation:(id)arg1;

@end

