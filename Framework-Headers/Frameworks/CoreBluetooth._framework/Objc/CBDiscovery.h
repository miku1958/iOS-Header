//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBActivatable-Protocol.h>
#import <CoreBluetooth/CBDeviceReporting-Protocol.h>
#import <CoreBluetooth/CBLabelable-Protocol.h>
#import <CoreBluetooth/CBStateReporting-Protocol.h>
#import <CoreBluetooth/CBSystemOverridable-Protocol.h>
#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CBDiscovery : NSObject <CBSystemOverridable, CUXPCCodable, CBActivatable, CBDeviceReporting, CBLabelable, CBStateReporting>
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateCompletion;
    BOOL _changesPending;
    NSMutableDictionary *_deviceMap;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
    BOOL _disabledActive;
    BOOL _disabledPending;
    unsigned int _systemOverrideFlags;
    int _bleScanRate;
    int _bleScanRateOverride;
    unsigned int _clientID;
    unsigned int _internalFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    NSString *_label;
    long long _bluetoothState;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _systemOverrideHandler;
    unsigned long long _changeFlags;
    unsigned long long _discoveryFlags;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    NSObject<OS_xpc_object> *_testListenerEndpoint;
}

@property (nonatomic) int bleScanRate; // @synthesize bleScanRate=_bleScanRate;
@property (nonatomic) int bleScanRateOverride; // @synthesize bleScanRateOverride=_bleScanRateOverride;
@property (readonly, nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property (nonatomic) unsigned long long changeFlags; // @synthesize changeFlags=_changeFlags;
@property (nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (nonatomic) BOOL disabledActive; // @synthesize disabledActive=_disabledActive;
@property (nonatomic) BOOL disabledPending; // @synthesize disabledPending=_disabledPending;
@property (readonly, copy) NSArray *discoveredDevices;
@property (nonatomic) unsigned long long discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (nonatomic) unsigned int internalFlags; // @synthesize internalFlags=_internalFlags;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned int systemOverrideFlags; // @synthesize systemOverrideFlags=_systemOverrideFlags;
@property (copy, nonatomic) CDUnknownBlockType systemOverrideHandler; // @synthesize systemOverrideHandler=_systemOverrideHandler;
@property (strong, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateDirectStart;
- (void)_activateXPCCompleted:(id)arg1;
- (void)_activateXPCStart:(BOOL)arg1;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateDirect;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_update;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_xpcReceivedDeviceFound:(id)arg1;
- (void)_xpcReceivedDeviceLost:(id)arg1;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)_xpcReceivedPowerStateChanged:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (unsigned long long)updateWithCBDiscovery:(id)arg1 updateFlags:(unsigned long long)arg2;
- (unsigned long long)updateWithXPCSubscriberInfo:(id)arg1;

@end
