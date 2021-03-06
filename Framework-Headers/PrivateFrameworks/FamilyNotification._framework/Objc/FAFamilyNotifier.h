//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyNotification/FAFamilyNotifierRemoteObjectProtocol-Protocol.h>
#import <FamilyNotification/NSXPCListenerDelegate-Protocol.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListener;
@protocol FAFamilyNotificationDelegate;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate>
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
    NSString *_identifier;
    NSString *_serviceName;
    id<FAFamilyNotificationDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<FAFamilyNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (id)_pendingNotificationsForAllClients;
- (id)_pendingNotificationsWithClientIdentifier:(id)arg1;
- (id)agentConnection;
- (void)deliverNotification:(id)arg1;
- (void)didActivateNotification:(id)arg1;
- (void)didClearNotification:(id)arg1;
- (void)didDismissNotification:(id)arg1;
- (id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pendingNotifications;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;

@end

