//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/AVAudioPlayerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, AVAudioPlayer, AVAudioSession, HMAccessory, HMHome, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, RPCompanionLinkClient, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, SSAccount, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>
{
    BOOL _activateCalled;
    RPCompanionLinkClient *_companionLinkClient;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _proxSetupActiveToken;
    BOOL _audioProgress;
    AVAudioSession *_audioSession;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    CDUnknownBlockType _audioPlayerCompletion;
    BOOL _preflightEnabled;
    int _preflightWiFiState;
    int _preflightiCloudState;
    BOOL _preventAppleWiFi;
    ACAccountStore *_iCloudAccountStore;
    ACAccount *_iCloudAccount;
    NSString *_iCloudUserID;
    int _iCloudAccountState;
    BOOL _homeiCloudEnabled;
    int _preflightiTunesState;
    SSAccount *_iTunesAccount;
    BOOL _iTunesSignInSkip;
    NSString *_iTunesUserID;
    BOOL _appleMusicEnabled;
    int _appleMusicState;
    BOOL _appleMusicForce;
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _preflightMiscState;
    BOOL _locationEnabled;
    BOOL _locationDecided;
    BOOL _siriEnabled;
    BOOL _prefStereoPairEnabled;
    BOOL _prefStereoWait;
    NSArray *_potentialStereoCounterparts;
    HMAccessory *_stereoCounterpartAccessory;
    int _stereoPairUserInputState;
    int _stereoPairRole;
    SFSession *_sfSession;
    BOOL _sfSessionSecured;
    int _sfSessionState;
    int _preAuthState;
    BOOL _preAuthStartedProgress;
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    long long _siriLanguageIndex;
    BOOL _siriLanguagePicked;
    int _siriLanguageState;
    NSString *_siriPreferredLanguage;
    BOOL _siriPasscodeEnabled;
    BOOL _siriPasscodeInitDone;
    BOOL _siriPasscodeSecured;
    int _siriPasscodeState;
    unsigned int _pairSetupFlags;
    int _pairSetupState;
    double _pairSetupSecs;
    int _personalRequestsState;
    int _personalRequestsChoice;
    int _termsState;
    BOOL _termsAgreed;
    int _shareSettingsState;
    BOOL _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    unsigned long long _basicConfigStartTicks;
    double _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    unsigned long long _trSetupConfigurationStartTicks;
    double _trSetupConfigurationSecs;
    BOOL _trNeedsNetwork;
    NSSet *_trUnauthServices;
    int _trActivationState;
    unsigned long long _trActivationStartTicks;
    double _trActivationSecs;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    double _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    BOOL _hasExistingHomePod;
    int _finishState;
    unsigned long long _finishStartTicks;
    double _finishSecs;
    double _iTunesWaitSecs;
    double _mediaSystemWaitSecs;
    double _totalSecs;
    BOOL _prefBonjourTest;
    BOOL _prefForceSiriGreeting;
    BOOL _liveOn;
    BOOL _pauseAfterPreAuth;
    unsigned char _stereoCounterpartColor;
    BOOL _touchRemoteEnabled;
    int _bonjourTestState;
    NSDictionary *_additionalMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    unsigned long long _peerFeatureFlags;
    NSDictionary *_preAuthResponse;
    UIViewController *_presentingViewController;
    unsigned long long _testFlags;
    CDUnknownBlockType _preAuthHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForAppleMusicHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForHomeiCloudHandler;
    CDUnknownBlockType _promptForiTunesSignInHandler;
    CDUnknownBlockType _promptForLocationEnableHandler;
    CDUnknownBlockType _promptForPersonalRequestsHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
    CDUnknownBlockType _promptForSiriEnableHandler;
    CDUnknownBlockType _promptForTermsHandler;
    CDUnknownBlockType _promptToInstallHomeAppHandler;
    CDUnknownBlockType _promptToShareSettingsHandler;
    CDUnknownBlockType _promptForSiriLanguageHandler;
    CDUnknownBlockType _promptForStereoRoleHandler;
    CDUnknownBlockType _promptForStereoMultipleHandler;
}

@property (copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property (readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL liveOn; // @synthesize liveOn=_liveOn;
@property (nonatomic) BOOL pauseAfterPreAuth; // @synthesize pauseAfterPreAuth=_pauseAfterPreAuth;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags; // @synthesize peerFeatureFlags=_peerFeatureFlags;
@property (copy, nonatomic) CDUnknownBlockType preAuthHandler; // @synthesize preAuthHandler=_preAuthHandler;
@property (strong, nonatomic) NSDictionary *preAuthResponse; // @synthesize preAuthResponse=_preAuthResponse;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForAppleMusicHandler; // @synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeiCloudHandler; // @synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForLocationEnableHandler; // @synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPersonalRequestsHandler; // @synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForSiriEnableHandler; // @synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForSiriLanguageHandler; // @synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForStereoMultipleHandler; // @synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForStereoRoleHandler; // @synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForTermsHandler; // @synthesize promptForTermsHandler=_promptForTermsHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForiTunesSignInHandler; // @synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler;
@property (copy, nonatomic) CDUnknownBlockType promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property (copy, nonatomic) CDUnknownBlockType promptToShareSettingsHandler; // @synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler;
@property (readonly, nonatomic) HMHome *selectedHome;
@property (readonly, nonatomic) NSString *selectedSiriLanguage;
@property (readonly, nonatomic) unsigned char stereoCounterpartColor; // @synthesize stereoCounterpartColor=_stereoCounterpartColor;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property (nonatomic) BOOL touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_cleanupSession;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_homeKitUpdateiCloudSwitchState:(BOOL)arg1;
- (void)_invalidate;
- (void)_logMetrics;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preflightAppleMusic;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)_run;
- (int)_runAppleMusic;
- (int)_runAuthKitTrustFinish;
- (void)_runAuthKitTrustStartIfNeeded;
- (int)_runBasicConfig;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runCDPSetup;
- (int)_runCheckAccount;
- (void)_runFinishRequest;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (int)_runFinishStart;
- (int)_runHomeKitSetup;
- (int)_runHomeKitUserInput;
- (int)_runPairSetup;
- (int)_runPersonalRequests;
- (int)_runPreAuth;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (int)_runPreflightMisc;
- (int)_runPreflightWiFi;
- (int)_runPreflightiCloud;
- (int)_runPreflightiTunes;
- (int)_runSFSessionStart;
- (int)_runShareSettings;
- (int)_runSiriLanguage;
- (int)_runSiriPasscode;
- (void)_runSiriPasscodeInitRequest;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeStartPairSetup;
- (int)_runStereoPairUserInput;
- (void)_runStereoPairUserInputPickColors:(BOOL)arg1;
- (int)_runTRActivation;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (int)_runTerms;
- (int)_runWiFiSetup;
- (void)_setupAudio;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activate;
- (void)appleMusicNext;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (void)homeAppInstallChoice:(BOOL)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeiCloudEnable;
- (id)init;
- (void)invalidate;
- (void)locationEnable:(BOOL)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)personalRequestsEnabled:(BOOL)arg1;
- (void)playAudioPasscodeAgain;
- (void)preflight;
- (void)shareSettingsAgreed;
- (void)siriEnable;
- (void)siriLanguagePicked:(long long)arg1;
- (void)skipAudioPasscode;
- (void)skipiTunesSignIn;
- (void)speakPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)termsAgreed;

@end

