//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMDUnassociatedMediaAccessory, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDMediaBrowserDelegate, OS_dispatch_queue;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSMutableSet *_accessoryAdvertisements;
    BOOL _discoverUnassociatedAccessories;
    BOOL _discoverAssociatedAccessories;
    BOOL _updateAvailableOutputDevices;
    id<HMDMediaBrowserDelegate> _delegate;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
}

@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDMediaBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HMFTimer *discoveryPollTimer; // @synthesize discoveryPollTimer=_discoveryPollTimer;
@property (readonly, nonatomic) void *discoverySession; // @synthesize discoverySession=_discoverySession;
@property (nonatomic) void *discoverySessionCallbackToken; // @synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken;
@property (readonly) unsigned long long hash;
@property (weak) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) NSMutableSet *identifiersOfAssociatedMediaAccessories; // @synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories;
@property (strong, nonatomic) NSMutableSet *mediaEndpoints; // @synthesize mediaEndpoints=_mediaEndpoints;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateAvailableOutputDevices; // @synthesize updateAvailableOutputDevices=_updateAvailableOutputDevices;

+ (id)advertisementsFromOutputDevices:(struct __CFArray *)arg1;
+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_addAdvertisements:(id)arg1;
- (void)_handleAvailableOutputDevices:(struct __CFArray *)arg1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_removeAdvertisements:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_updateSessionForAccessory:(id)arg1;
- (void)_updateSessionsForAccessories:(id)arg1;
- (void)checkForUpdatedAvailableOutputDevices:(struct __CFArray *)arg1;
- (void)dealloc;
- (void)deregisterAccessories:(id)arg1;
- (id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (id)initWithHomeManager:(id)arg1;
- (void)registerAccessories:(id)arg1;
- (id)shortDescription;
- (void)startDiscoveringAssociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)timerDidFire:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)updateSessionsForAccessories:(id)arg1;

@end

