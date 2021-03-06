//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/HMAccessoryBrowserDelegate-Protocol.h>
#import <Sharing/HMHomeManagerDelegate-Protocol.h>
#import <Sharing/HMHomeManagerDelegatePrivate-Protocol.h>

@class ACAccount, HMAccessory, HMAccessoryBrowser, HMDeviceSetupOperation, HMHome, HMHomeManager, HMMediaSystem, HMRoom, NSDictionary, NSString, TROperationQueue, TRSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationHomeKitSetup : NSObject <HMAccessoryBrowserDelegate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate>
{
    BOOL _active;
    BOOL _paused;
    unsigned long long _startTicks;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    TROperationQueue *_trOperationQueue;
    BOOL _configuredTVAudio;
    HMHomeManager *_homeKitHomeManager;
    BOOL _homeKitHomeManagerReady;
    HMAccessoryBrowser *_homeKitBrowser;
    BOOL _homeAppInstallUserDidChoose;
    HMDeviceSetupOperation *_homeKitDeviceSetupOperation;
    HMAccessory *_homeKitAccessory;
    BOOL _reselectHome;
    HMRoom *_homeKitSelectedRoom;
    BOOL _homeKitAddedAccessory;
    BOOL _homeKitAddedAppData;
    BOOL _configuredStereoPair;
    HMMediaSystem *_homeKitMediaSystem;
    BOOL _personalRequestsDone;
    BOOL _userInteractive;
    BOOL _hasHomePod;
    BOOL _hasMultipleUsers;
    BOOL _keyExchangeOnly;
    BOOL _pauseAfterUserInput;
    BOOL _personalRequestsEnabled;
    int _stereoRole;
    NSDictionary *_appDataSelf;
    HMAccessory *_tvAudioInput;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HMHome *_homeKitSelectedHome;
    NSString *_homeKitSelectedRoomName;
    NSString *_iTunesAccountID;
    ACAccount *_iTunesAccount;
    double _metricNonUserSeconds;
    double _metricUserSeconds;
    CDUnknownBlockType _pauseHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForRoomHandler;
    CDUnknownBlockType _promptToInstallHomeAppHandler;
    HMAccessory *_stereoCounterpart;
    TRSession *_trSession;
    double _timeoutInSeconds;
}

@property (copy, nonatomic) NSDictionary *appDataSelf; // @synthesize appDataSelf=_appDataSelf;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, nonatomic) BOOL hasHomePod; // @synthesize hasHomePod=_hasHomePod;
@property (readonly, nonatomic) BOOL hasMultipleUsers; // @synthesize hasMultipleUsers=_hasMultipleUsers;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *homeKitSelectedHome; // @synthesize homeKitSelectedHome=_homeKitSelectedHome;
@property (readonly, copy, nonatomic) NSString *homeKitSelectedRoomName; // @synthesize homeKitSelectedRoomName=_homeKitSelectedRoomName;
@property (strong, nonatomic) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property (copy, nonatomic) NSString *iTunesAccountID; // @synthesize iTunesAccountID=_iTunesAccountID;
@property (nonatomic) BOOL keyExchangeOnly; // @synthesize keyExchangeOnly=_keyExchangeOnly;
@property (readonly, nonatomic) double metricNonUserSeconds; // @synthesize metricNonUserSeconds=_metricNonUserSeconds;
@property (readonly, nonatomic) double metricUserSeconds; // @synthesize metricUserSeconds=_metricUserSeconds;
@property (nonatomic) BOOL pauseAfterUserInput; // @synthesize pauseAfterUserInput=_pauseAfterUserInput;
@property (copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property (nonatomic) BOOL personalRequestsEnabled; // @synthesize personalRequestsEnabled=_personalRequestsEnabled;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property (copy, nonatomic) CDUnknownBlockType promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property (strong, nonatomic) HMAccessory *stereoCounterpart; // @synthesize stereoCounterpart=_stereoCounterpart;
@property (nonatomic) int stereoRole; // @synthesize stereoRole=_stereoRole;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;
@property (strong, nonatomic) TRSession *trSession; // @synthesize trSession=_trSession;
@property (strong, nonatomic) HMAccessory *tvAudioInput; // @synthesize tvAudioInput=_tvAudioInput;
@property (nonatomic) BOOL userInteractive; // @synthesize userInteractive=_userInteractive;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithError:(id)arg1;
- (BOOL)_isOwnerOfHome:(id)arg1;
- (id)_mediaSystemForAccessory:(id)arg1;
- (id)_normalizedString:(id)arg1;
- (void)_removeSimilarRoomNames:(id)arg1 home:(id)arg2;
- (void)_restoreHomeApp;
- (void)_run;
- (void)_runHomeKitAddAccessory;
- (void)_runHomeKitAddAppData;
- (void)_runHomeKitAddHome;
- (void)_runHomeKitAssignRoom;
- (id)_runHomeKitAutoSelectHome:(BOOL)arg1;
- (BOOL)_runHomeKitConfigureStereoPairAndReturnError:(id *)arg1;
- (void)_runHomeKitDeviceSetup;
- (void)_runHomeKitSelectRoom;
- (void)_runHomeKitSetupRoom;
- (void)_runHomeKitUpdateAppleTVAudioDestination;
- (void)_runInit;
- (void)_runPersonalRequestsStart;
- (void)_startTimeout:(double)arg1;
- (void)_updateAccount;
- (void)_updateHomeStats;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)activate;
- (id)findStereoCounterpartsWithSupportedVersions:(unsigned long long)arg1;
- (id)findTVs;
- (void)homeAppInstallChoice:(BOOL)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)reselectHome;
- (void)resume;
- (void)selectHome:(id)arg1;
- (void)selectRoom:(id)arg1;

@end

