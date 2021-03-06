//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/CBCentralManagerDelegate-Protocol.h>
#import <CoreAudioKit/CBPeripheralDelegate-Protocol.h>

@class CBCentralManager, NSMutableArray, NSString, NSTimer;
@protocol BTLEConnectionTable;

__attribute__((visibility("hidden")))
@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *centralManager;
    NSMutableArray *peripheralList;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id<BTLEConnectionTable> controller;
    long long centralState;
    BOOL isAdvertising;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *peripheralList; // @synthesize peripheralList;
@property (readonly) Class superclass;

- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (long long)bluetoothState;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)checkAlreadyConnectedPeripherals;
- (void)connectionTimerFired:(id)arg1;
- (void)createPeripheralList;
- (void)dealloc;
- (id)initWithUIController:(id)arg1;
- (BOOL)isLECapableHardware;
- (void)killTimer;
- (unsigned int)midiDeviceForUUID:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (BOOL)peripheralIsConnectedCentral:(id)arg1;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;
- (void)setUIController:(id)arg1;
- (void)startScan;
- (void)startTimer;
- (void)stopScan;
- (void)timerFired:(id)arg1;
- (void)updateAdvertisingState:(id)arg1;

@end

