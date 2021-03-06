//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCAppOfferStateDelegate-Protocol.h>

@class AMSPromise, ASCJitterBackoff, ASCPendingPromises, ASCWorkspace, NSMapTable, NSString;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate>
{
    id<ASCServices> _connection;
    ASCWorkspace *_workspace;
    NSMapTable *_stateMachines;
    ASCJitterBackoff *_reconnectBackoff;
    ASCPendingPromises *_pendingActionPromises;
    AMSPromise *_service;
}

@property (readonly, nonatomic) id<ASCServices> connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ASCPendingPromises *pendingActionPromises; // @synthesize pendingActionPromises=_pendingActionPromises;
@property (readonly, nonatomic) ASCJitterBackoff *reconnectBackoff; // @synthesize reconnectBackoff=_reconnectBackoff;
@property (strong, nonatomic) AMSPromise *service; // @synthesize service=_service;
@property (readonly, nonatomic) NSMapTable *stateMachines; // @synthesize stateMachines=_stateMachines;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASCWorkspace *workspace; // @synthesize workspace=_workspace;

+ (id)log;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)connectToService;
- (void)daemonConnectionWasLost:(id)arg1;
- (void)daemonDidRebootstrap:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 workspace:(id)arg2;
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2;
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 usingService:(id)arg3;
- (id)performFallbackActionForOffer:(id)arg1;
- (id)reinstallWatchAppWithID:(id)arg1;
- (id)reinstallWatchSystemAppWithBundleID:(id)arg1;
- (void)scheduleTryReconnect;
- (id)stateMachineForOffer:(id)arg1;
- (void)stopObservingStateForOffer:(id)arg1;
- (void)tryReconnect;
- (void)useOfferStateMachineFallback;

@end

