//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>
#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheralManager, NSData, NSString;
@protocol OS_dispatch_queue;

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>
{
    NSData *_btAdvertisingAddress;
    CBCentralManager *_btCentralManager;
    BOOL _btCentralManagerNeeded;
    CBPeripheralManager *_btPeripheralManager;
    BOOL _btPeripheralManagerNeeded;
    struct {
        CDUnknownFunctionPointerType accessoryEvent;
    } _btAccessoryCallbacks;
    BOOL _btAccessoryEventsNeeded;
    BOOL _btAccessoryEventsRegistered;
    struct BTAccessoryManagerImpl *_btAccessoryManager;
    BOOL _btConnectionDevicesInitialized;
    BOOL _btConnectionEventsNeeded;
    struct BTSessionImpl *_btSession;
    BOOL _btSessionAddedServiceCallback;
    BOOL _btSessionAttaching;
    BOOL _btSessionNeeded;
    BOOL _btSessionStarted;
    struct BTLocalDeviceImpl *_btLocalDevice;
    NSData *_btLocalDeviceAddr;
    BOOL _btLocalDeviceAddrNeeded;
    struct {
        CDUnknownFunctionPointerType statusEvent;
        CDUnknownFunctionPointerType leTestStopped;
        CDUnknownFunctionPointerType afhMapChanged;
    } _btLocalDeviceCallbacks;
    BOOL _btLocalDeviceCallbacksNeeded;
    BOOL _btLocalDeviceCallbacksRegistered;
    struct BTPairingAgentImpl *_btPairingAgent;
    BOOL _btPairingAgentNeeded;
    BOOL _btPairingAgentStarted;
    struct NSMutableDictionary *_btConnectedDevices;
    struct NSMutableDictionary *_btPairedDevices;
    BOOL _btPairedDevicesInitialized;
    struct NSMutableArray *_findDeviceRequests;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _deviceConnectedHandler;
    CDUnknownBlockType _deviceDisconnectedHandler;
    CDUnknownBlockType _devicePairedHandler;
    CDUnknownBlockType _deviceUnpairedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType deviceConnectedHandler; // @synthesize deviceConnectedHandler=_deviceConnectedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceDisconnectedHandler; // @synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler;
@property (copy, nonatomic) CDUnknownBlockType devicePairedHandler; // @synthesize devicePairedHandler=_devicePairedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceUnpairedHandler; // @synthesize deviceUnpairedHandler=_deviceUnpairedHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2;
- (void)_btEnsureStarted;
- (void)_btEnsureStopped;
- (id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl *)arg1;
- (void)_findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleBluetoothAddressChanged;
- (void)_handleConnectedDevicesInit;
- (void)_handleDeviceConnected:(struct BTDeviceImpl *)arg1;
- (void)_handleDeviceDisconnected:(struct BTDeviceImpl *)arg1;
- (void)_handlePairingStatusChanged;
- (void)_interrupted;
- (void)_invalidated;
- (void)_processFindDeviceRequests;
- (void)activate;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (void)findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl *)arg2;
- (void)updateStatusFlags;

@end

