//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord, HKHealthService, NSArray, NSDate, NSDictionary, NSError, NSString, NSUUID;

@protocol HKClientInterface <NSObject>
- (void)deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
- (void)deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(NSError *)arg4;
- (void)deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(NSError *)arg4;
- (void)deliverSessionTransitoryData:(NSDictionary *)arg1 toClient:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(NSDate *)arg3 forSessionUUID:(NSUUID *)arg4;
- (void)deliverWorkoutSessionError:(NSError *)arg1 forSessionUUID:(NSUUID *)arg2;
- (void)presentAuthorizationWithRequestRecord:(HKAuthorizationRequestRecord *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)unitPreferencesDidUpdate;
@end
