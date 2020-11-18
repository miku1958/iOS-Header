//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString, NSURL;
@protocol CXCallSourceDelegate, CXProviderVendorProtocol, OS_dispatch_queue;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    BOOL _connected;
    id<CXCallSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXCallSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CXProviderVendorProtocol> vendorProtocolDelegate;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1;
- (id)init;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

