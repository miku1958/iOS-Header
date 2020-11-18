//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject
{
    NSXPCConnection *_sharedConnection;
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;
    NSMutableSet *_activePromises;
    NSMutableArray *_interruptionHandlers;
}

@property (readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property (strong, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;

- (void).cxx_destruct;
- (id)_connectionProxyForAsync:(BOOL)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (id)init;
- (id)pushNotificationService;
- (id)securityServiceProxyWithDelegate:(id)arg1;

@end
