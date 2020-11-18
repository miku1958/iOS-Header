//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSXPCListenerDelegate-Protocol.h>
#import <CryptoTokenKit/TKProtocolSmartCardSlot-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString, NSXPCConnection, NSXPCListener, TKPowerMonitor, TKSmartCardATR, TKSmartCardSessionEngine;
@protocol OS_dispatch_queue, TKSmartCardSlotDelegate;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate>
{
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    BOOL _idlePowerDownPending;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMutableArray *_powerRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    struct __asl_object_s *_log;
    BOOL _securePINVerificationSupported;
    BOOL _securePINChangeSupported;
    BOOL _apduSentSinceLastReset;
    long long _maxInputLength;
    long long _maxOutputLength;
    NSArray *_forProcesses;
    id<TKSmartCardSlotDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    TKSmartCardSessionEngine *_session;
}

@property BOOL apduSentSinceLastReset; // @synthesize apduSentSinceLastReset=_apduSentSinceLastReset;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TKSmartCardSlotDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) NSArray *forProcesses; // @synthesize forProcesses=_forProcesses;
@property (readonly) unsigned long long hash;
@property long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property long long maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property BOOL securePINChangeSupported; // @synthesize securePINChangeSupported=_securePINChangeSupported;
@property BOOL securePINVerificationSupported; // @synthesize securePINVerificationSupported=_securePINVerificationSupported;
@property (weak) TKSmartCardSessionEngine *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (id)_getReservationId;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)cardPresent:(BOOL)arg1;
- (void)changeStateTo:(long long)arg1 powerState:(long long)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)dictionaryForState:(long long)arg1;
- (void)getAttrib:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (void)leaveSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logMessage:(id)arg1 bytes:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)powerDownWithEject:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)powerRequestFinished;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)runUserInteraction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)scheduleIdlePowerDown;
- (void)schedulePowerRequest:(CDUnknownBlockType)arg1;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setProtocol:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupSlotWithReply:(CDUnknownBlockType)arg1;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)terminate;

@end
