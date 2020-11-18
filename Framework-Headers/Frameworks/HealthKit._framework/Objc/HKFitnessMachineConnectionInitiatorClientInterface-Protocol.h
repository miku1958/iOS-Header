//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSError, NSUUID, _HKFitnessMachine;

@protocol HKFitnessMachineConnectionInitiatorClientInterface <NSObject>
- (void)clientRemote_encounteredError:(NSError *)arg1;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_updatedFitnessMachine:(_HKFitnessMachine *)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_workoutAppReady;
@end

