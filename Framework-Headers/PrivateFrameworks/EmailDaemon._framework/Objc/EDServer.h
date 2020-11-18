//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/NSXPCListenerDelegate-Protocol.h>

@class EDDaemonInterfaceFactory, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface EDServer : NSObject <NSXPCListenerDelegate, EFLoggable>
{
    NSXPCListener *_listener;
    NSMutableArray *_connectedClients;
    EDDaemonInterfaceFactory *_daemonInterfaceFactory;
}

@property (strong, nonatomic) NSMutableArray *connectedClients; // @synthesize connectedClients=_connectedClients;
@property (strong, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory; // @synthesize daemonInterfaceFactory=_daemonInterfaceFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) Class superclass;

+ (id)log;
- (void).cxx_destruct;
- (void)addRemoteClient:(id)arg1;
- (id)initWithDaemonInterfaceFactory:(id)arg1;
- (id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeRemoteClient:(id)arg1;
- (void)start;
- (void)test_tearDown;

@end
