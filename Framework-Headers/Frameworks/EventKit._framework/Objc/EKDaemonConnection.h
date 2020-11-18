//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/CADClientInterface-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol CADInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject <CADClientInterface>
{
    unsigned int _options;
    NSString *_dbPath;
    id _delegate;
    NSObject<OS_dispatch_queue> *_connectionLock;
    id<CADInterface> _remoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    BOOL _registeredForStartNote;
    int _connectionIdentifier;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, strong, nonatomic) id<CADInterface> CADOperationProxy;
@property (nonatomic) int connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property id delegate; // @synthesize delegate=_delegate;
@property (readonly, strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (void)waitOnSemaphoreWithBlock:(CDUnknownBlockType)arg1;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(BOOL)arg3;
- (BOOL)_connectToServer;
- (void)_daemonRestarted;
- (void)_finishAllRepliesOnServerDeath;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)initWithOptions:(unsigned int)arg1 path:(id)arg2;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;

@end
