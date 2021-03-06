//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REObservableSingleton.h>

@class NSObject, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REDonatedActionStore : REObservableSingleton
{
    BOOL _isMonitoringLockState;
    BOOL _synchronized;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextScheduler *_donationsScheduler;
    REUpNextScheduler *_deletionsScheduler;
}

- (void).cxx_destruct;
- (void)_beginLoadingData;
- (void)_finishLoadingData:(unsigned long long)arg1;
- (id)_init;
- (void)_notified_addDonatedActionsForInstalledApps:(id)arg1;
- (void)_notified_distributeRecentDeletedActions:(id)arg1;
- (void)_notified_distributeRecentDonatedActions:(id)arg1;
- (void)_notified_removeDonatedActionsForUninstalledApps:(id)arg1;
- (void)_notified_removeThenDistributeAllActions:(id)arg1;
- (void)_queue_distributeAllDonatedActions;
- (void)_queue_distributeAllDonatedActionsWithIdentifier:(id)arg1;
- (void)_queue_distributeRecentDeletedActions;
- (void)_queue_distributeRecentDonatedActions;
- (BOOL)_shouldLimitQueries;
- (void)_subscribeToNotifications;
- (id)callbackQueue;
- (void)dealloc;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)synchronizeDonationsIfNecessary;
- (void)triggerDistributeAllDonatedActions:(BOOL)arg1;

@end

