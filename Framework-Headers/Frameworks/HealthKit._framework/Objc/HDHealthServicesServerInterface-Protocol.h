//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKHealthService, NSArray, NSDictionary, NSString, NSUUID;
@protocol HKHealthServicesClientInterface;

@protocol HDHealthServicesServerInterface <NSObject>
- (void)remote_addPairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_addPeripheral:(NSUUID *)arg1 name:(NSString *)arg2 forServices:(NSArray *)arg3 withCompletion:(void (^)(BOOL, NSError *))arg4;
- (void)remote_beginBluetoothStatusUpdates:(void (^)(long long, NSError *))arg1 client:(id<HKHealthServicesClientInterface>)arg2;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_getEnabledStatusForPeripheral:(NSUUID *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_getHealthServiceProperty:(NSString *)arg1 forSession:(unsigned long long)arg2 withHandler:(void (^)(id, NSError *))arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(void (^)(id, NSError *))arg1;
- (void)remote_performHealthServiceOperation:(NSString *)arg1 onSession:(unsigned long long)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(NSString *, BOOL, NSError *))arg4;
- (void)remote_removePairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_removePeripheral:(NSUUID *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_setEnabledStatus:(BOOL)arg1 forPeripheral:(NSUUID *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id<HKHealthServicesClientInterface>)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (void)remote_startHealthServiceSession:(HKHealthService *)arg1 client:(id<HKHealthServicesClientInterface>)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
@end

