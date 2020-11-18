//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUPubliclyAccessibleCopying-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, TUCTCapabilityInfo, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _supportsPrimaryCalling;
    BOOL _supportsBasebandCalling;
    BOOL _supportsCellularData;
    BOOL _supportsDisplayingTelephonyCalls;
    BOOL _supportsDisplayingFaceTimeAudioCalls;
    BOOL _supportsDisplayingFaceTimeVideoCalls;
    BOOL _faceTimeAudioAvailable;
    BOOL _faceTimeVideoAvailable;
    BOOL _ctCapabilitiesValid;
    BOOL _csCallingCurrentlyAvailable;
    BOOL _wiFiCallingCurrentlyAvailable;
    BOOL _wiFiEmergencyCallingAvailable;
    BOOL _wiFiEmergencyCallingSupported;
    BOOL _voLTECallingCurrentlyAvailable;
    BOOL _accountsMatchForSecondaryCalling;
    BOOL _supportsThumperCalling;
    BOOL _thumperCallingCurrentlyAvailable;
    BOOL _thumperCallingAllowedForCurrentDevice;
    BOOL _thumperCallingEnabled;
    BOOL _supportsRelayCalling;
    BOOL _relayCallingEnabled;
    BOOL _supportsTelephonyRelayCalling;
    BOOL _supportsFaceTimeAudioRelayCalling;
    BOOL _supportsFaceTimeVideoRelayCalling;
    BOOL _supportsSimultaneousVoiceAndData;
    BOOL _pairedDeviceExists;
    BOOL _emergencyCallbackModeEnabled;
    BOOL _supportsCarrierServices;
    int _relayCallingAvailability;
    TUCTCapabilityInfo *_wiFiCallingCapabilityInfo;
    TUCTCapabilityInfo *_voLTECallingCapabilityInfo;
    TUCTCapabilityInfo *_thumperCallingCapabilityInfo;
    NSSet *_thumperCallingAllowedSecondaryDeviceIDs;
    NSString *_thumperCallingLocalDeviceID;
    NSDictionary *_relayCallingDisabledForDeviceID;
    NSString *_outgoingRelayCallerID;
    NSArray *_cloudCallingDevices;
}

@property (nonatomic) BOOL accountsMatchForSecondaryCalling; // @synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling;
@property (readonly, nonatomic) BOOL accountsSupportSecondaryCalling;
@property (copy, nonatomic) NSArray *cloudCallingDevices; // @synthesize cloudCallingDevices=_cloudCallingDevices;
@property (nonatomic, getter=isCSCallingCurrentlyAvailable) BOOL csCallingCurrentlyAvailable; // @synthesize csCallingCurrentlyAvailable=_csCallingCurrentlyAvailable;
@property (nonatomic, getter=areCTCapabilitiesValid) BOOL ctCapabilitiesValid; // @synthesize ctCapabilitiesValid=_ctCapabilitiesValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergencyCallbackModeEnabled) BOOL emergencyCallbackModeEnabled; // @synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled;
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable; // @synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable;
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable; // @synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *outgoingRelayCallerID; // @synthesize outgoingRelayCallerID=_outgoingRelayCallerID;
@property (nonatomic) BOOL pairedDeviceExists; // @synthesize pairedDeviceExists=_pairedDeviceExists;
@property (nonatomic) int relayCallingAvailability; // @synthesize relayCallingAvailability=_relayCallingAvailability;
@property (copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID; // @synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID;
@property (nonatomic, getter=isRelayCallingEnabled) BOOL relayCallingEnabled; // @synthesize relayCallingEnabled=_relayCallingEnabled;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBasebandCalling; // @synthesize supportsBasebandCalling=_supportsBasebandCalling;
@property (nonatomic) BOOL supportsCarrierServices; // @synthesize supportsCarrierServices=_supportsCarrierServices;
@property (nonatomic) BOOL supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property (nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls; // @synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls; // @synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic) BOOL supportsDisplayingTelephonyCalls; // @synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls;
@property (nonatomic) BOOL supportsFaceTimeAudioRelayCalling; // @synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling;
@property (nonatomic) BOOL supportsFaceTimeVideoRelayCalling; // @synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling;
@property (nonatomic) BOOL supportsPrimaryCalling; // @synthesize supportsPrimaryCalling=_supportsPrimaryCalling;
@property (nonatomic) BOOL supportsRelayCalling; // @synthesize supportsRelayCalling=_supportsRelayCalling;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndData; // @synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData;
@property (nonatomic) BOOL supportsTelephonyRelayCalling; // @synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling;
@property (nonatomic) BOOL supportsThumperCalling; // @synthesize supportsThumperCalling=_supportsThumperCalling;
@property (nonatomic, getter=isThumperCallingAllowedForCurrentDevice) BOOL thumperCallingAllowedForCurrentDevice; // @synthesize thumperCallingAllowedForCurrentDevice=_thumperCallingAllowedForCurrentDevice;
@property (copy, nonatomic) NSSet *thumperCallingAllowedSecondaryDeviceIDs; // @synthesize thumperCallingAllowedSecondaryDeviceIDs=_thumperCallingAllowedSecondaryDeviceIDs;
@property (copy, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo; // @synthesize thumperCallingCapabilityInfo=_thumperCallingCapabilityInfo;
@property (nonatomic, getter=isThumperCallingCurrentlyAvailable) BOOL thumperCallingCurrentlyAvailable; // @synthesize thumperCallingCurrentlyAvailable=_thumperCallingCurrentlyAvailable;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled; // @synthesize thumperCallingEnabled=_thumperCallingEnabled;
@property (copy, nonatomic) NSString *thumperCallingLocalDeviceID; // @synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID;
@property (copy, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo; // @synthesize voLTECallingCapabilityInfo=_voLTECallingCapabilityInfo;
@property (nonatomic, getter=isVoLTECallingCurrentlyAvailable) BOOL voLTECallingCurrentlyAvailable; // @synthesize voLTECallingCurrentlyAvailable=_voLTECallingCurrentlyAvailable;
@property (copy, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo; // @synthesize wiFiCallingCapabilityInfo=_wiFiCallingCapabilityInfo;
@property (nonatomic, getter=isWiFiCallingCurrentlyAvailable) BOOL wiFiCallingCurrentlyAvailable; // @synthesize wiFiCallingCurrentlyAvailable=_wiFiCallingCurrentlyAvailable;
@property (nonatomic, getter=isWiFiEmergencyCallingAvailable) BOOL wiFiEmergencyCallingAvailable; // @synthesize wiFiEmergencyCallingAvailable=_wiFiEmergencyCallingAvailable;
@property (nonatomic, getter=isWiFiEmergencyCallingSupported) BOOL wiFiEmergencyCallingSupported; // @synthesize wiFiEmergencyCallingSupported=_wiFiEmergencyCallingSupported;

+ (id)allowedCapabilityInformationClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)deviceIDForPhoneNumber:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;

@end

