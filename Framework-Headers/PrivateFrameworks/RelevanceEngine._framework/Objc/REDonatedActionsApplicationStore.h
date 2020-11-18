//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REDonatedActionFilteredCacheDelegate-Protocol.h>

@class NSMutableSet, NSString, REDonatedActionFilteredCache, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate>
{
    REDonatedActionFilteredCache *_cache;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_applicationScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_applications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notify;
- (void)_notifyApplicationsUpdates;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldFilterDonation:(id)arg1 date:(id)arg2 location:(id)arg3;
- (void)_sortDonationsByCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)donatedActionFilteredCacheDidAddDonation:(id)arg1;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)fetchAllUniqueDonationsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchApplicationsProvidingDonations:(CDUnknownBlockType)arg1;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPerformedCountForAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchTopDonationsForApplications:(id)arg1 fromOnlyRecentPlatform:(BOOL)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)init;

@end

