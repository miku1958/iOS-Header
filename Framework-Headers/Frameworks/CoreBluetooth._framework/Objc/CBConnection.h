//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBActivatable-Protocol.h>
#import <CoreBluetooth/CBCentralManagerDelegate-Protocol.h>
#import <CoreBluetooth/CBLabelable-Protocol.h>
#import <CoreBluetooth/CBPeripheralDelegate-Protocol.h>
#import <CoreBluetooth/CBReadWriteRequestable-Protocol.h>
#import <CoreBluetooth/CBStateReporting-Protocol.h>

@class CBCentralManager, CBDevice, CBL2CAPChannel, CBPeripheral, CBReadRequest, CBWriteRequest, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBActivatable, CBLabelable, CBReadWriteRequestable, CBStateReporting>
{
    CDUnknownBlockType _activateCompletion;
    NSUUID *_blePeerUUID;
    CBCentralManager *_centralManager;
    BOOL _guardConnected;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CBReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CBWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    struct LogCategory *_ucat;
    unsigned short _blePSM;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    long long _bluetoothState;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    NSString *_clientBundleID;
    long long _clientUseCase;
    long long _connectionLatency;
    CDUnknownBlockType _errorHandler;
    CBDevice *_peerDevice;
    CBL2CAPChannel *_l2capChannel;
    CDUnknownBlockType _serverInvalidationHandler;
}

@property (nonatomic) unsigned short blePSM; // @synthesize blePSM=_blePSM;
@property (readonly, nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property (copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property (nonatomic) long long clientUseCase; // @synthesize clientUseCase=_clientUseCase;
@property (nonatomic) long long connectionLatency; // @synthesize connectionLatency=_connectionLatency;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong, nonatomic) CBL2CAPChannel *l2capChannel; // @synthesize l2capChannel=_l2capChannel;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) CBDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (copy, nonatomic) CDUnknownBlockType serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_prepareReadRequest:(id)arg1;
- (BOOL)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (BOOL)_processReadStatus;
- (void)_processReads:(BOOL)arg1;
- (void)_processWrites;
- (void)_reportError:(id)arg1;
- (void)_run;
- (BOOL)_runConnectStart;
- (BOOL)_runSetupChannel;
- (BOOL)_setupIOAndReturnError:(id *)arg1;
- (BOOL)_startConnectingAndReturnError:(id *)arg1;
- (BOOL)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)readWithRequest:(id)arg1;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;

@end

