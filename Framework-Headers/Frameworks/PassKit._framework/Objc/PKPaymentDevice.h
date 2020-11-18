//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString, NSTimer, PKPaymentDeviceConfigurationData, PKPaymentDeviceProvisioningData, PKSecureElement;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceProvisioningData *_provisioningData;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_provisioningCompletions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _skipLocationCheck;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL skipLocationCheck; // @synthesize skipLocationCheck=_skipLocationCheck;
@property (readonly) Class superclass;

+ (id)clientHardwarePlatformInfoHTTPHeader;
+ (id)clientInfoHTTPHeader;
- (void).cxx_destruct;
- (void)SEPParingInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeProvisioningCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (id)configurationData;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteApplicationWithAID:(id)arg1;
- (BOOL)hasRegistrationRegionMap;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)primarySecureElementIdentifier;
- (void)provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)rewrapDataWithDeviceIdentifier:(id)arg1 certificates:(id)arg2 kextBlacklistVersion:(id)arg3;
- (void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)trustedDeviceEnrollmentInfo;

@end

