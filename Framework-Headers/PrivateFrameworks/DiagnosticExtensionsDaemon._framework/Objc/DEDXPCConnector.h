//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/NSXPCListenerDelegate-Protocol.h>

@class DEDXPCInbound, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_os_log;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>
{
    BOOL _isDaemon;
    BOOL _started;
    NSXPCConnection *_connection;
    NSObject<OS_os_log> *_log;
    DEDXPCInbound *_inbound;
    NSXPCListener *_listener;
    unsigned long long _connType;
}

@property unsigned long long connType; // @synthesize connType=_connType;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) DEDXPCInbound *inbound; // @synthesize inbound=_inbound;
@property BOOL isDaemon; // @synthesize isDaemon=_isDaemon;
@property (strong) NSXPCListener *listener; // @synthesize listener=_listener;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property BOOL started; // @synthesize started=_started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_whitelistedXPCInterface;
- (void)configureConnectionType:(unsigned long long)arg1;
- (void)configureDaemonMode;
- (void)configureXPCInbound:(id)arg1;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)startForApp;
- (void)startForDaemon;
- (BOOL)validateConnection:(id)arg1;

@end

