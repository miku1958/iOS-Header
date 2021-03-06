//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICClientManager : NSObject
{
    BOOL _clientAdded;
    NSMutableArray *_clients;
    struct os_unfair_lock_s _clientsLock;
    id _delegate;
}

@property (strong, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property (nonatomic) id delegate; // @synthesize delegate=_delegate;

- (void)addClientWithConnection:(id)arg1;
- (void)addNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (id)allClientConnections;
- (id)clientConnectionsMonitoringNotification:(id)arg1;
- (id)clientConnectionsMonitoringObjectID:(id)arg1;
- (int)clientUsingDevice;
- (id)copyClientsArray;
- (unsigned long long)currentClientCount;
- (void)dealloc;
- (id)findClientWithPID:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)remNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (unsigned long long)removeClientWithPID:(id)arg1;
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)setClientWithPID:(id)arg1 usingDevice:(BOOL)arg2;
- (void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2;

@end

