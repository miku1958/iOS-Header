//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFitnessMachineConnectionClientInterface-Protocol.h>

@class HKDevice, HKHealthStore, NSLock, NSString, NSUUID, _HKFitnessMachine;
@protocol _HKFitnessMachineConnectionDelegate;

@interface _HKFitnessMachineConnection : NSObject <HKFitnessMachineConnectionClientInterface>
{
    HKHealthStore *_healthStore;
    NSUUID *_currentSessionUUID;
    HKDevice *_deviceForFinalWorkout;
    NSLock *_lock;
    NSUUID *_uuid;
    _HKFitnessMachine *_fitnessMachine;
    unsigned long long _machineState;
    unsigned long long _connectionState;
    id<_HKFitnessMachineConnectionDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_HKFitnessMachineConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDevice *deviceForFinalWorkout;
@property (readonly, nonatomic) _HKFitnessMachine *fitnessMachine; // @synthesize fitnessMachine=_fitnessMachine;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long machineState; // @synthesize machineState=_machineState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clientQueue_deliverFailedWithError:(id)arg1;
- (void)_connectionInterruptedWithError:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (void)_registerClient;
- (void)_simulateAccept;
- (void)_simulateDisconnect;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4;
- (void)clientRemote_deliverDetectedNFC:(id)arg1;
- (void)clientRemote_deliverFailedWithError:(id)arg1;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4;
- (void)clientRemote_deliverMachineInformationUpdated:(id)arg1;
- (id)currentSessionConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (void)end;
- (void)endWithFitnessMachineSessionUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markClientReady;
- (void)permitDataTransferWithFitnessMachineSessionUUID:(id)arg1;

@end

