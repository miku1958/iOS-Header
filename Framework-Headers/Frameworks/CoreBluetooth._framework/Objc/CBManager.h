//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBPairingAgentParentDelegate-Protocol.h>
#import <CoreBluetooth/CBXpcConnectionDelegate-Protocol.h>

@class CBPairingAgent, CBXpcConnection, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate>
{
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    long long _state;
    NSData *_advertisingAddress;
}

@property (copy, nonatomic) NSData *advertisingAddress; // @synthesize advertisingAddress=_advertisingAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) CBPairingAgent *sharedPairingAgent; // @dynamic sharedPairingAgent;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (void)dealloc;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)initInternal;
- (BOOL)isMsgAllowedAlways:(unsigned short)arg1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)peerWithInfo:(id)arg1;
- (BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (BOOL)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (void)triggerBTErrorReport:(long long)arg1;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end

