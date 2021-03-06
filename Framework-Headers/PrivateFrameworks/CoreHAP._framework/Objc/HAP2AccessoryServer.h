//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2AccessoryServer-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverDelegate-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAP2PairedAccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAP2UnpairedAccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAPAccessoryReachabilityDelegate-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, HAPDeviceID, HMFVersion, NSArray, NSBackgroundActivityScheduler, NSData, NSString;
@protocol HAP2Accessory, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerDelegate, HAP2AccessoryServerMetadata, HAP2AccessoryServerPairingDriver, HAP2Cancelable, HAP2UnpairedAccessoryServerPairDelegate, HAPAccessoryReachabilityClient, HAPAccessoryReachabilityProfile;

@interface HAP2AccessoryServer : HAP2LoggingObject <HAP2PairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate, HAP2UnpairedAccessoryServerPrivate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2AccessoryServer>
{
    BOOL _internallyPaired;
    BOOL _hasDiscoveryAdvertisement;
    id<HAP2AccessoryServerDelegate> _delegate;
    unsigned long long _connectionState;
    HAP2SerializedOperationQueue *_operationQueue;
    NSString *_setupID;
    id<HAP2AccessoryServerControllerPrivate> _controller;
    id<HAP2AccessoryServerBrowserPrivate> _browser;
    id<HAP2AccessoryServerMetadata> _currentMetadata;
    NSString *_productData;
    NSArray *_privateAccessories;
    NSString *_pairedName;
    HMFVersion *_pairedProtocolVersion;
    id<HAP2Cancelable> _outstandingUpdateAccessoriesRequest;
    id<HAP2AccessoryServerPairingDriver> _internalPairingDriver;
    id<HAP2UnpairedAccessoryServerPairDelegate> _pairDelegate;
    id<HAPAccessoryReachabilityClient> _reachability;
    id<HAPAccessoryReachabilityProfile> _reachabilityProfile;
    NSBackgroundActivityScheduler *_backgroundScheduler;
    HAP2PropertyLock *_propertyLock;
}

@property (readonly, nonatomic) NSArray *accessories;
@property (readonly, weak, nonatomic) id<HAP2AccessoryServerBrowserPrivate> browser;
@property (readonly, weak, nonatomic) id<HAP2AccessoryServerBrowserPrivate> browser;
@property (readonly, weak, nonatomic) id<HAP2AccessoryServerBrowserPrivate> browser; // @synthesize browser=_browser;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, nonatomic) id<HAP2AccessoryServerControllerPrivate> controller;
@property (readonly, nonatomic) id<HAP2AccessoryServerControllerPrivate> controller;
@property (readonly, nonatomic) id<HAP2AccessoryServerControllerPrivate> controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAP2AccessoryServerDelegate> delegate;
@property (weak, nonatomic) id<HAP2AccessoryServerDelegate> delegate;
@property (weak, nonatomic) id<HAP2AccessoryServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) id<HAP2AccessoryServerPairingDriver> pairingDriver;
@property (readonly, nonatomic) id<HAP2Accessory> primaryAccessory;
@property (strong, nonatomic) NSString *productData;
@property (strong, nonatomic) NSString *productData;
@property (strong, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSString *setupID;
@property (strong, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)new;
+ (id)pairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 operationQueue:(id)arg4;
+ (id)unpairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 pairingDriver:(id)arg4 operationQueue:(id)arg5;
- (void).cxx_destruct;
- (void)_performBackgroundPollWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setBackgroundActivityScheduler:(id)arg1;
- (id)addPairing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)becomePairedWithAccessoryServer:(id)arg1;
- (void)becomeUnpairedWithAccessoryServer:(id)arg1;
- (void)clearAccessories;
- (void)dealloc;
- (id)disableNotificationsForCharacteristics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)enableNotificationsForCharacteristics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPairingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleEvents:(id)arg1;
- (void)handleLostDiscoveryAdvertisement;
- (void)handleReestablishedSession;
- (void)handleUpdatedCharacteristicValues:(id)arg1;
- (id)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1;
- (void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1;
- (id)pairWithDelegate:(id)arg1;
- (void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2;
- (void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2;
- (void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(CDUnknownBlockType)arg2;
- (void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pollAccessory;
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)removePairing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startConfirming;
- (void)stopConfirming;
- (id)unpairWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateAccessories;
- (void)verifyConnection;
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

