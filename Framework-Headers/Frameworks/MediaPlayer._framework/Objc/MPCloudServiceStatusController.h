//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>
#import <MediaPlayer/ISURLBagObserver-Protocol.h>
#import <MediaPlayer/SSVPlaybackLeaseDelegate-Protocol.h>

@class NSOperationQueue, NSString, SSVFairPlaySubscriptionController, SSVFairPlaySubscriptionStatus, SSVPlaybackLease, SSVSubscriptionStatus;
@protocol OS_dispatch_queue;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver, ISURLBagObserver, SSVPlaybackLeaseDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accountStoreChangeObservationCount;
    unsigned long long _automaticLeaseRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    long long _cloudLibraryStatus;
    unsigned long long _cloudLibraryObservationCount;
    NSOperationQueue *_fairPlayOperationQueue;
    unsigned long long _fairPlaySubscriptionStatusObservationCount;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    BOOL _hasLoadedMatchStatus;
    BOOL _hasLoadedURLBag;
    SSVFairPlaySubscriptionStatus *_lastKnownFairPlaySubscriptionStatus;
    SSVSubscriptionStatus *_lastKnownSubscriptionStatus;
    unsigned long long _matchStatusObservationCount;
    unsigned long long _matchStatus;
    BOOL _observingNetworkReachability;
    SSVPlaybackLease *_playbackLease;
    BOOL _hasSubscriptionLease;
    unsigned long long _purchaseHistoryObservationCount;
    BOOL _shouldPlaybackRequireSubscriptionLease;
    unsigned long long _shouldPlaybackRequireSubscriptionLeaseObservationCount;
    BOOL _subscriptionAvailable;
    unsigned long long _subscriptionAvailabilityObservationCount;
    unsigned long long _subscriptionLeaseUsageCount;
    NSOperationQueue *_subscriptionOperationQueue;
    unsigned long long _subscriptionStatusObservationCount;
    unsigned long long _URLBagObservationCount;
}

@property (readonly, nonatomic) SSVPlaybackLease *_existingPlaybackLease; // @dynamic _existingPlaybackLease;
@property (readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (readonly, nonatomic) unsigned long long matchStatus;
@property (readonly, nonatomic, getter=isPurchaseHistoryEnabled) BOOL purchaseHistoryEnabled;
@property (readonly, nonatomic) BOOL shouldPlaybackRequireSubscriptionLease;
@property (readonly, nonatomic, getter=isSubscriptionAvailable) BOOL subscriptionAvailable;
@property (readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly) Class superclass;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)_activeAccount;
- (void)_beginObservingAccountStoreDidChange;
- (void)_beginObservingURLBag;
- (void)_beginUsingSubscriptionLeaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL *)arg1;
- (void)_cloudClientAuthenticationDidChange;
- (BOOL)_currentCloudLibraryEnabled;
- (BOOL)_currentPurchaseHistoryEnabled;
- (void)_endObservingAccountStoreDidChange;
- (void)_endObservingURLBag;
- (void)_endUsingSubscriptionLease;
- (id)_fairPlaySubscriptionController;
- (void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_getCurrentFairPlaySubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setHasSubscriptionLease:(BOOL)arg1 endReasonType:(unsigned long long)arg2;
- (id)_subscriptionOperationQueue;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateForNetworkReachabilityObserversCountChange;
- (void)_updateMatchStatus;
- (void)_updateSubscriptionInformationWithEndReasonType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateWithURLBagDictionary:(id)arg1;
- (void)_userIdentityStoreDidChange:(id)arg1;
- (void)acquireSubscriptionLeaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)bagDidChange:(id)arg1;
- (void)beginAutomaticallyRefreshingSubscriptionLease;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingShouldPlaybackRequireSubscriptionLease;
- (void)beginObservingSubscriptionAvailability;
- (void)beginObservingSubscriptionLease;
- (void)beginObservingSubscriptionStatus;
- (void)dealloc;
- (void)endAutomaticallyRefreshingSubscriptionLease;
- (void)endObservingCloudLibraryEnabled;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingShouldPlaybackRequireSubscriptionLease;
- (void)endObservingSubscriptionAvailability;
- (void)endObservingSubscriptionLease;
- (void)endObservingSubscriptionStatus;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)getFairPlaySubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionAssetWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionStatusWithOptions:(id)arg1 statusBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)performSubscriptionSecureKeyDeliveryRequestOperation:(id)arg1;
- (void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
- (void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
- (void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshSubscriptionLeaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithExternalLeaseResponseError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
