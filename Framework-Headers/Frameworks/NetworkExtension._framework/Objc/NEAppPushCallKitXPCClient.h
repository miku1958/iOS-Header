//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/CXNetworkExtensionVoIPXPCClient-Protocol.h>

@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient>
{
    struct os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)registerVoIPMessagePayload;
- (void)unregisterVoIPMessagePayload;
- (void)voipNetworkExtensionPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)voipNetworkExtensionRegistrationFailed;

@end
