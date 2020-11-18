//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATRemoteTransportDelegate-Protocol.h>
#import <ClassroomKit/CATTransportDelegate-Protocol.h>

@class CATRemoteTransport, CATStateMachine, CATTransport, NSString;
@protocol CRKSessionDelegate;

@interface CRKSession : NSObject <CATTransportDelegate, CATRemoteTransportDelegate>
{
    CATStateMachine *mFSM;
    CATRemoteTransport *mTransport;
    BOOL _allowUntrustedConnections;
    BOOL _requiresBeacon;
    id<CRKSessionDelegate> _delegate;
    NSString *_ipAddress;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    double _failedConnectionRetryInterval;
}

@property (readonly, nonatomic) BOOL allowUntrustedConnections; // @synthesize allowUntrustedConnections=_allowUntrustedConnections;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double failedConnectionRetryInterval; // @synthesize failedConnectionRetryInterval=_failedConnectionRetryInterval;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property (nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property (nonatomic) BOOL requiresBeacon; // @synthesize requiresBeacon=_requiresBeacon;
@property (strong, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
@property (readonly) Class superclass;
@property (strong, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
@property (nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;

- (void).cxx_destruct;
- (void)cancelConnectionAttempt;
- (void)connect;
- (void)delegateConnected;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)didConnect;
- (void)disconnect;
- (void)failedToConnect;
- (void)foundBeacon;
- (id)initWithIPAddress:(id)arg1;
- (void)invalidate;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (void)lostConnection;
- (void)registerDefaults;
- (id)studentSocketOptions;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)transportDidConnect:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (void)tryConnecting;

@end

