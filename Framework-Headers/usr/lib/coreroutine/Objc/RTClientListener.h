//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTXPCListener.h>

#import <coreroutine/NSXPCListenerDelegate-Protocol.h>
#import <coreroutine/RTClientListenerProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate>
{
    NSMutableDictionary *_persistedClients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *persistedClients; // @synthesize persistedClients=_persistedClients;
@property (readonly, nonatomic) NSString *persistedClientsPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setup;
- (id)handleClientConnection:(id)arg1;
- (void)handleDisconnectionForDaemonClient:(id)arg1;
- (id)handleRestorationForDaemonClient:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)saveDaemonClient:(id)arg1;

@end

