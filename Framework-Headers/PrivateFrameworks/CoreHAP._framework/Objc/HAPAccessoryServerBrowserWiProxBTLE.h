//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject
{
}

- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)probeReachabilityForTrackedAccessories;
- (void)resetLastSeenForTrackedAccessories:(id)arg1;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;

@end

