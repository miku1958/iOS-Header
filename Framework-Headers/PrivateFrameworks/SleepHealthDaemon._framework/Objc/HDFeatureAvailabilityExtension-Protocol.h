//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepHealthDaemon/HKFeatureAvailabilityProviding-Protocol.h>

@class NRDevice, NSObject, NSString, NSUUID;
@protocol HDFeatureAvailabilityExtensionObserver, OS_dispatch_queue;

@protocol HDFeatureAvailabilityExtension <HKFeatureAvailabilityProviding>

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (NRDevice *)deviceForPairingID:(NSUUID *)arg1;
- (void)registerObserver:(id<HDFeatureAvailabilityExtensionObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)unregisterObserver:(id<HDFeatureAvailabilityExtensionObserver>)arg1;
@end
