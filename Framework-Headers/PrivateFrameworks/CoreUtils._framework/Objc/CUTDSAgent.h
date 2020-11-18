//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>
#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheralManager, CUSystemMonitor, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUTDSAgent : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>
{
    unsigned char _advertiseBytes[32];
    unsigned long long _advertiseLen;
    unsigned long long _advertiserCount;
    unsigned long long _advertiseProviderCount;
    unsigned long long _advertiseSeekerCount;
    BOOL _advertisingStartCalled;
    CDStruct_83abfce7 _bleAddress48;
    BOOL _bleAddressValid;
    CUSystemMonitor *_bleAddressMonitor;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableDictionary *_devices;
    NSObject<OS_dispatch_source> *_lingerTimer;
    CBPeripheralManager *_peripheralManager;
    struct NSMutableSet *_providers;
    BOOL _scannerStartCalled;
    struct NSMutableSet *_seekers;
    struct NSMutableSet *_sessions;
    struct LogCategory *_ucat;
    unsigned int _updateIDLast;
    BOOL _updatePending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedTDSAgent;
- (void).cxx_destruct;
- (void)_advertiserEnsureStarted;
- (void)_advertiserEnsureStopped;
- (void)_bleAddressChanged;
- (void)_bleAddressMonitorEnsureStarted;
- (void)_bleAddressMonitorEnsureStopped;
- (void)_cancelLingerTimer;
- (void)_processChanges;
- (void)_scannerEnsureStarted;
- (void)_scannerEnsureStopped;
- (void)_scheduleUpdate;
- (void)_startLingerTimer;
- (void)_update;
- (void)addProvider:(id)arg1;
- (void)addSeeker:(id)arg1;
- (void)addSession:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)init;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)removeSeeker:(id)arg1;
- (void)removeSession:(id)arg1;

@end

