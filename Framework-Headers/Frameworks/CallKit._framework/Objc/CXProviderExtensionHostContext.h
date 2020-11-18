//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXProviderExtensionContext.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXProviderHostProtocol;

@interface CXProviderExtensionHostContext : CXProviderExtensionContext <CXProviderVendorProtocol, CXProviderHostProtocol>
{
    id<CXProviderHostProtocol> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXProviderHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1;
- (oneway void)registerWithConfiguration:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;

@end
