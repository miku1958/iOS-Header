//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/SASBulletinManagerDelegate-Protocol.h>
#import <SiriActivation/SASHeaterDelegate-Protocol.h>
#import <SiriActivation/SASLockStateMonitorDelegate-Protocol.h>
#import <SiriActivation/SASMyriadControllerDelegate-Protocol.h>
#import <SiriActivation/SASPresentationManagerDelegate-Protocol.h>
#import <SiriActivation/SASRequestOptionsBuilderDataSource-Protocol.h>
#import <SiriActivation/SASStateChangeListener-Protocol.h>

@class AFPreferences, AFSiriTether, NSMutableDictionary, NSString, NSTimer, SASBulletinManager, SASHeater, SASLockStateMonitor, SASMyriadController, SASPresentationManager, SASRemoteRequestManager, SASSystemState, SASTestingInputController;
@protocol OS_dispatch_queue;

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate>
{
    CDUnknownBlockType _buttonTrigger;
    NSString *_preheatedPresentation;
    int _voiceTriggerNotifyToken;
    NSObject<OS_dispatch_queue> *_voiceTriggerDispatchQueue;
    NSTimer *_B188ActivationTimer;
    SASMyriadController *_myriadController;
    BOOL _xcTestingActive;
    BOOL _siriTetherIsAttached;
    BOOL _voiceTriggerNotifyTokenIsValid;
    BOOL _buttonDownHasOccurredSinceActivation;
    BOOL _canActivateFromDirectActionSource;
    BOOL _pocketStateFetchingInProgressForHeadsetActivation;
    SASSystemState *_systemState;
    AFPreferences *_afPreferences;
    SASLockStateMonitor *_lockStateMonitor;
    NSMutableDictionary *_sources;
    SASHeater *_heater;
    AFSiriTether *_siriTether;
    double _activationTimestamp;
    SASBulletinManager *_bulletinManager;
    SASRemoteRequestManager *_remoteRequestManager;
    SASTestingInputController *_testingInputController;
    NSMutableDictionary *_avExternalButtonEvents;
    SASPresentationManager *_presentationManager;
}

@property (nonatomic) double activationTimestamp; // @synthesize activationTimestamp=_activationTimestamp;
@property (strong, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
@property (strong, nonatomic) NSMutableDictionary *avExternalButtonEvents; // @synthesize avExternalButtonEvents=_avExternalButtonEvents;
@property (strong, nonatomic) SASBulletinManager *bulletinManager; // @synthesize bulletinManager=_bulletinManager;
@property (nonatomic) BOOL buttonDownHasOccurredSinceActivation; // @synthesize buttonDownHasOccurredSinceActivation=_buttonDownHasOccurredSinceActivation;
@property (nonatomic) BOOL canActivateFromDirectActionSource; // @synthesize canActivateFromDirectActionSource=_canActivateFromDirectActionSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SASHeater *heater; // @synthesize heater=_heater;
@property (strong, nonatomic) SASLockStateMonitor *lockStateMonitor; // @synthesize lockStateMonitor=_lockStateMonitor;
@property (nonatomic, getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:) BOOL pocketStateFetchingInProgressForHeadsetActivation; // @synthesize pocketStateFetchingInProgressForHeadsetActivation=_pocketStateFetchingInProgressForHeadsetActivation;
@property (strong, nonatomic) SASPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property (strong, nonatomic) SASRemoteRequestManager *remoteRequestManager; // @synthesize remoteRequestManager=_remoteRequestManager;
@property (strong, nonatomic) AFSiriTether *siriTether; // @synthesize siriTether=_siriTether;
@property (nonatomic) BOOL siriTetherIsAttached; // @synthesize siriTetherIsAttached=_siriTetherIsAttached;
@property (strong, nonatomic) NSMutableDictionary *sources; // @synthesize sources=_sources;
@property (readonly) Class superclass;
@property (strong, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
@property (strong, nonatomic) SASTestingInputController *testingInputController; // @synthesize testingInputController=_testingInputController;
@property (nonatomic) BOOL voiceTriggerNotifyTokenIsValid; // @synthesize voiceTriggerNotifyTokenIsValid=_voiceTriggerNotifyTokenIsValid;
@property (nonatomic) BOOL xcTestingActive; // @synthesize xcTestingActive=_xcTestingActive;

+ (id)new;
+ (id)service;
- (void).cxx_destruct;
- (void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)_activatePresentationWithIdentifier:(long long)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3;
- (void)_attachToTether;
- (BOOL)_buttonIsAVExternalButton:(long long)arg1;
- (BOOL)_buttonIsTVMicrophoneButton:(long long)arg1;
- (void)_cancelActivationPreparationForSetup;
- (void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1;
- (void)_cancelTTS;
- (void)_defrost;
- (void)_dismissSiri:(id)arg1;
- (void)_handleDesignModeRequest;
- (void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(long long)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3;
- (void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2;
- (id)_init;
- (BOOL)_isInitialRequest;
- (BOOL)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg1;
- (void)_notifySourcesOfActiveChange:(BOOL)arg1;
- (void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(BOOL)arg1;
- (void)_preheatPresentation;
- (void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2;
- (void)_registerForVoiceTrigger;
- (long long)_requestState;
- (BOOL)_shouldRejectNewActivations:(long long)arg1;
- (BOOL)_siriIsEnabled;
- (void)_unregisterForVoiceTrigger;
- (void)_updateCanActivateFromDirectActionSource;
- (id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg1 requestOptions:(id)arg2;
- (void)activationRequestFromBreadcrumb;
- (void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activationRequestFromSimpleActivation:(long long)arg1;
- (void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromTestRunnerWithContext:(id)arg1;
- (void)activationRequestFromTestingWithContext:(id)arg1;
- (void)activationRequestFromVoiceTrigger;
- (void)activationRequestFromVoiceTriggerWithContext:(id)arg1;
- (id)allBulletins;
- (id)bulletinForIdentifier:(id)arg1;
- (void)bulletinManagerDidChangeBulletins:(id)arg1;
- (id)bulletinsOnLockScreen;
- (void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)buttonTapFromButtonIdentifier:(long long)arg1;
- (void)buttonUpFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 timestamp:(double)arg3;
- (void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2;
- (void)cancelPrewarmFromButtonIdentifier:(long long)arg1;
- (void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1;
- (void)dismissSiriWithOptions:(id)arg1;
- (BOOL)handleActivationRequest:(id)arg1;
- (BOOL)handleActivationRequest:(id)arg1 systemState:(id)arg2;
- (void)heaterSuggestsPreheating:(id)arg1;
- (id)init;
- (BOOL)isConnectedTo188;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2;
- (void)pongWithPresentationIdentifier:(long long)arg1;
- (void)presentationManager:(id)arg1 didChangeShouldRejectNewActivationsTo:(BOOL)arg2;
- (void)presentationManager:(id)arg1 didEncounterError:(long long)arg2;
- (BOOL)presentationsAreIdleAndQuiet;
- (void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2;
- (void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2;
- (BOOL)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2;
- (BOOL)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2;
- (BOOL)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3;
- (BOOL)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3;
- (void)shouldAbort:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (void)siriPresentationDismissedWithIdentifier:(long long)arg1;
- (void)siriPresentationDisplayedWithIdentifier:(long long)arg1;
- (void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2;
- (void)siriPresentationWillDismissWithIdentifier:(long long)arg1;
- (void)speechRequestStateDidChange:(long long)arg1;
- (void)unregisterActivationSourceIdentifier:(id)arg1;
- (void)unregisterSiriPresentationIdentifier:(long long)arg1;

@end
