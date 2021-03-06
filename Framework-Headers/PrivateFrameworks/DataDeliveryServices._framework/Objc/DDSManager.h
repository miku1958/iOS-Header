//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetObservingDelegate-Protocol.h>
#import <DataDeliveryServices/DDSAssetProvidingDelegate-Protocol.h>
#import <DataDeliveryServices/DDSAssetTrackingDelegate-Protocol.h>
#import <DataDeliveryServices/DDSManaging-Protocol.h>
#import <DataDeliveryServices/DDSRemoteSyncStateDelegate-Protocol.h>

@class DDSRemoteSyncState, DDSScheduledTimer, NSMutableSet, NSString;
@protocol DDSAssetObserving, DDSAssetProviding, DDSAssetTracking, DDSManagingDelegate, OS_dispatch_queue;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging>
{
    id<DDSManagingDelegate> _delegate;
    id<DDSAssetTracking> _tracker;
    id<DDSAssetProviding> _provider;
    id<DDSAssetObserving> _assetObserver;
    DDSScheduledTimer *_timer;
    DDSRemoteSyncState *_remoteSyncState;
    NSMutableSet *_pendingAssertionsToUpdate;
    NSObject<OS_dispatch_queue> *_pendingAssertionsQueue;
}

@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver; // @synthesize assetObserver=_assetObserver;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<DDSManagingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pendingAssertionsQueue; // @synthesize pendingAssertionsQueue=_pendingAssertionsQueue;
@property (strong, nonatomic) NSMutableSet *pendingAssertionsToUpdate; // @synthesize pendingAssertionsToUpdate=_pendingAssertionsToUpdate;
@property (readonly, nonatomic) id<DDSAssetProviding> provider; // @synthesize provider=_provider;
@property (readonly, nonatomic) DDSRemoteSyncState *remoteSyncState; // @synthesize remoteSyncState=_remoteSyncState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) DDSScheduledTimer *timer; // @synthesize timer=_timer;
@property (readonly, nonatomic) id<DDSAssetTracking> tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (void)assertionIDsForClientID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginUpdateCycleForced:(BOOL)arg1 discretionaryDownload:(BOOL)arg2;
- (void)deleteV1AssetsIfNecessary;
- (void)didBeginUpdateCatalog;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
- (void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
- (void)didEndUpdateCycleWithError:(id)arg1;
- (void)didStartUpdateCycle;
- (void)didUpdateCatalogWithError:(id)arg1;
- (void)handleNewAssertions:(id)arg1;
- (void)handleRemovedAssertions:(id)arg1;
- (id)init;
- (id)initWithProvider:(id)arg1 tracker:(id)arg2;
- (void)remoteSyncStateRequestsRetry;
- (void)remoteSyncStateRequestsUpdate;
- (void)removeAssertionWithID:(id)arg1;
- (void)serverDidUpdateAssetsWithType:(id)arg1;
- (void)triggerDump;
- (void)triggerUpdate;
- (void)willRetryUpdateCycle;

@end

