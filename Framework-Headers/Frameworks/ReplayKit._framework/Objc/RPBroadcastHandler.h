//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSExtensionRequestHandling-Protocol.h>
#import <ReplayKit/NSXPCListenerDelegate-Protocol.h>

@class NSDictionary, NSExtensionContext, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling>
{
    NSDictionary *_serviceInfo;
    NSExtensionContext *_extensionContext;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    NSXPCListener *_listener;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (strong, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property (strong, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeRequestWithReturnItems:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)updateServiceInfo:(id)arg1;

@end
