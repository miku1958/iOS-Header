//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord, HKObjectAuthorizationPromptSession, NSDate, NSError, NSUUID, _HKWorkoutEvent;

@protocol HKHealthStoreClientInterface <NSObject>
- (void)clientRemote_deliverWorkoutEvent:(_HKWorkoutEvent *)arg1 forSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(NSDate *)arg3 forSessionUUID:(NSUUID *)arg4;
- (void)clientRemote_deliverWorkoutSessionError:(NSError *)arg1 forSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(HKAuthorizationRequestRecord *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)clientRemote_presentAuthorizationWithSession:(HKObjectAuthorizationPromptSession *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)clientRemote_unitPreferencesDidUpdate;
@end

