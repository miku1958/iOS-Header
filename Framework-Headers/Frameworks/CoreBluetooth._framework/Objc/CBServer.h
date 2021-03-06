//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBActivatable-Protocol.h>
#import <CoreBluetooth/CBLabelable-Protocol.h>
#import <CoreBluetooth/CBPeripheralManagerDelegate-Protocol.h>
#import <CoreBluetooth/CBStateReporting-Protocol.h>

@class CBPeripheralManager, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CBServer : NSObject <CBPeripheralManagerDelegate, CBActivatable, CBLabelable, CBStateReporting>
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateCompletion;
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    CBPeripheralManager *_peripheralManager;
    struct LogCategory *_ucat;
    unsigned short _bleListenPSM;
    unsigned short _bleListeningPSM;
    long long _bluetoothState;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _acceptHandler;
    CDUnknownBlockType _configChangedHandler;
}

@property (copy, nonatomic) CDUnknownBlockType acceptHandler; // @synthesize acceptHandler=_acceptHandler;
@property (nonatomic) unsigned short bleListenPSM; // @synthesize bleListenPSM=_bleListenPSM;
@property (readonly, nonatomic) unsigned short bleListeningPSM; // @synthesize bleListeningPSM=_bleListeningPSM;
@property (readonly, nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType configChangedHandler; // @synthesize configChangedHandler=_configChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleConnectionInvalidated:(id)arg1;
- (void)_invalidate;
- (void)_startIfNeeded;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;

@end

