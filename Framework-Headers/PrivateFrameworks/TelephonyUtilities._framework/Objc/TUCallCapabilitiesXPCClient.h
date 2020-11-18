//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSMapTable *_delegateToQueue;
    TUCallCapabilitiesState *_state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int token; // @synthesize token=_token;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)asynchronousServer;
+ (id)callCapabilitiesClientXPCInterface;
+ (id)callCapabilitiesServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
- (void).cxx_destruct;
- (void)_retrieveState;
- (void)_updateState:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)asynchronousServer;
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (void)dealloc;
- (oneway void)endEmergencyCallbackMode;
- (void)handleServerDisconnect;
- (id)init;
- (void)invalidate;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (void)performDelegateCallbackBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
- (oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;

@end
