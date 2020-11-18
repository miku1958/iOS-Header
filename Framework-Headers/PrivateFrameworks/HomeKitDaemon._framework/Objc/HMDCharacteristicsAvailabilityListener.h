//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, HMDNotificationRegistration, NSDictionary, NSObject, NSSet, NSString;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;

@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging>
{
    NSSet *_availableCharacteristics;
    NSDictionary *_interestedCharacteristicTypesByServiceType;
    id<HMDCharacteristicsAvailabilityListenerDelegate> _delegate;
    HMDHAPAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDNotificationRegistration *_notificationRegistration;
    NSString *_logIdentifier;
}

@property (readonly, weak) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDCharacteristicsAvailabilityListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType; // @synthesize interestedCharacteristicTypesByServiceType=_interestedCharacteristicTypesByServiceType;
@property (readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property (readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)_accessoryCharacteristicsToObserve;
- (void)_notifyDelegate;
- (void)_registerForNotifications;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleServicesUpdated:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3;
- (void)start;

@end
