//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>
{
    HAPCharacteristic *_reachabilityCharacteristic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HAPCharacteristic *reachabilityCharacteristic; // @synthesize reachabilityCharacteristic=_reachabilityCharacteristic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)__isReachable;
- (BOOL)__parseBridgeService:(id)arg1;
- (BOOL)__parseServices;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (BOOL)isPrimary;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)mergeWithAccessory:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)shouldMergeObject:(id)arg1;

@end

