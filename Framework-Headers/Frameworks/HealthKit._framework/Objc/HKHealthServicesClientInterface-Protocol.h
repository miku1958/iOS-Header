//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKHealthService, NSArray, NSError, NSString;

@protocol HKHealthServicesClientInterface <NSObject>
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
- (void)clientRemote_deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(NSError *)arg4;
@end

