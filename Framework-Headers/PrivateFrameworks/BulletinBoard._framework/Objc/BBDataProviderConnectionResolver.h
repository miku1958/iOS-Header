//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionClientEndpoint-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BBDataProviderConnection, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>
{
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
    BBDataProviderConnection *_dataProviderConnection;
}

@property (weak, nonatomic) BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)resolverForConnection:(id)arg1;
+ (id)xpcInterface;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_registerWithServer:(CDUnknownBlockType)arg1;
- (void)_registerForPublicationNotification;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping:(CDUnknownBlockType)arg1;

@end

