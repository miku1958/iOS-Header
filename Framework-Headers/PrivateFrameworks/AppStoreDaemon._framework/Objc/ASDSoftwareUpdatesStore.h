//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_call:(id)arg1 run:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)_setupConnection;
- (BOOL)autoUpdateEnabled;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)dealloc;
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEntitlement;
- (void)hideApplicationBadgeForPendingUpdates;
- (id)init;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reloadForSettingsFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeUpdateBulletins;
- (void)setAutoUpdateEnabled:(BOOL)arg1;
- (void)showApplicationBadgeForPendingUpdates;
- (void)showApplicationUpdateBulletin;
- (void)updateAllWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAllWithJobResultsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

