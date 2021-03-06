//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/_IDSActivityMonitorXPCConnectorXPCListener-Protocol.h>

@class NSArray, NSString, _IDSActivityMonitorXPCConnector;
@protocol IDSActivityMonitorListenerDelegate, OS_dispatch_queue;

@interface IDSActivityMonitor : NSObject <_IDSActivityMonitorXPCConnectorXPCListener>
{
    id<IDSActivityMonitorListenerDelegate> _delegate;
    NSString *_activity;
    _IDSActivityMonitorXPCConnector *_XPCConnector;
    NSString *_activityIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) _IDSActivityMonitorXPCConnector *XPCConnector; // @synthesize XPCConnector=_XPCConnector;
@property (readonly, nonatomic) NSString *activity; // @synthesize activity=_activity;
@property (strong, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IDSActivityMonitorListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL listeningForUpdates;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSArray *subscriptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginBroadcastingWithInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 xpcConnector:(id)arg4;
- (void)stopBroadcastingForSubActivity:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

