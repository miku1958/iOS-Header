//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUserDefaults;

@interface MRUserSettings : NSObject
{
    NSUserDefaults *_userDefaults;
    BOOL _externalDevicePairingAllowed;
}

@property (readonly, nonatomic) double airPlayOutputContextInitTimeoutDuration;
@property (readonly, nonatomic) double bluetoothDeviceResumeDuration;
@property (readonly, nonatomic) double broadcastCommandWaitDuration;
@property (readonly, nonatomic) BOOL computeNowPlayingApplication;
@property (strong, nonatomic) NSArray *connectedClientPIDs;
@property (readonly, nonatomic) double externalDeviceDisconnectSleepDuration;
@property (readonly, nonatomic) double externalDeviceDisconnectWaitDuration;
@property (readonly, nonatomic) double externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property (readonly, nonatomic) double externalDeviceNowPlayingInfoCoalesceDuration;
@property (nonatomic, getter=isExternalDevicePairingAllowed) BOOL externalDevicePairingAllowed; // @synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed;
@property (readonly, nonatomic) double externalDeviceSleepAssertionOnClientConnectDuration;
@property (readonly, nonatomic) long long externalDeviceSocketQOSLevel;
@property (readonly, nonatomic) double externalDeviceTimeoutDuration;
@property (readonly, nonatomic) BOOL hasExternalDeviceSocketQOSLevelSet;
@property (readonly, nonatomic) long long maxTransactionMemorySize;
@property (readonly, nonatomic) double nowPlayingApplicationTimeout;
@property (readonly, nonatomic) double pauseWhileOnLockScreenTimeout;
@property (readonly, nonatomic) BOOL shouldInitializeGenericBonjourService;
@property (readonly, nonatomic) BOOL shouldInitializeTelevisionBonjourService;
@property (readonly, nonatomic) BOOL shouldLogArtwork;
@property (readonly, nonatomic) BOOL shouldLogPairingSetupCode;
@property (readonly, nonatomic) BOOL takelockScreenAssertion;
@property (readonly, nonatomic) double transactionWaitDurationOnNetworkSend;
@property (readonly, nonatomic) double transactionWaitDurationOnOutOfMemory;
@property (readonly, nonatomic) double transactionWaitDurationOnXpcSend;
@property (readonly, nonatomic) BOOL useDebugAVRouteWithoutVolumeControl;
@property (readonly, nonatomic) BOOL useExternalDeviceSystemPairing;
@property (readonly, nonatomic) BOOL useGenericTransportForHostedEndpoints;
@property (readonly, nonatomic) BOOL useNoDelayOptionForExternalDeviceSockets;
@property (readonly, nonatomic) BOOL usePeerToPeerExternalDeviceConnections;
@property (readonly, nonatomic) BOOL useSystemAudioContextForAirPlayTransport;

+ (id)currentSettings;
- (void).cxx_destruct;
- (BOOL)_boolValueForKey:(id)arg1 usingDefaultValue:(BOOL)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2;
- (long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2;
- (void)_removeValueForKey:(id)arg1;
- (id)init;

@end

