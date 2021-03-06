//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HAPBTLECentralManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class CUBLEAdvertiser, HAPBTLECentralManager, HMDAccessoryQueues, HMDHAPAccessory, HMFTimer, HMFUnfairLock, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *workQueue;
    CUBLEAdvertiser *leAdvertiser;
    HMFTimer *advertisementTimer;
    HMDHAPAccessory *accessory;
    HAPBTLECentralManager *centralManager;
    HMDAccessoryQueues *powerOnQueues;
    HMFUnfairLock *_lock;
}

@property (strong, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory;
@property (strong, nonatomic) HMFTimer *advertisementTimer; // @synthesize advertisementTimer;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (strong, nonatomic) HAPBTLECentralManager *centralManager; // @synthesize centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isReady) BOOL isReady;
@property (strong, nonatomic) CUBLEAdvertiser *leAdvertiser; // @synthesize leAdvertiser;
@property (strong, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) HMDAccessoryQueues *powerOnQueues; // @synthesize powerOnQueues;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;

+ (id)initializeAdvertiser;
+ (id)sharedAdvertiser;
- (void).cxx_destruct;
- (void)_advertisementTimeout;
- (void)_cancelOn:(id)arg1;
- (void)_clearAdvertiser;
- (void)_completePendingPowerOnRequest:(id)arg1;
- (void)_flushQueue:(id)arg1;
- (void)_flushQueues;
- (void)_startAdvertising;
- (void)_stopAdvertisement:(id)arg1;
- (void)cancelOn:(id)arg1;
- (void)didUpdateBTLEState:(long long)arg1;
- (id)init;
- (BOOL)isAdvertisingForAccessory:(id)arg1;
- (void)powerOn:(id)arg1;
- (void)stopAdvertisement:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end

