//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLPurchaseDAAPServerDelegate-Protocol.h>
#import <BookLibrary/BUUserAccountObserving-Protocol.h>

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol BLImageManager, BLJaliscoDAAPClientDelegate, OS_dispatch_queue;

@interface BLJaliscoDAAPClient : NSObject <BLPurchaseDAAPServerDelegate, BUUserAccountObserving>
{
    NSNumber *_currentAccountNumber;
    NSMutableSet *_completionHandlers;
    NSMutableSet *_familyCompletionHandlers;
    BOOL _initiallyLoadingJalisco;
    BOOL _skipLoadingCheck;
    NSObject<OS_dispatch_queue> *_serverWorkerQueue;
    unsigned long long _timebombRetries;
    id<BLJaliscoDAAPClientDelegate> _delegate;
    id<BLImageManager> _imageManagerDelegate;
    unsigned long long _currentServerGeneration;
    unsigned long long _pendingUpdateGeneration;
    CDUnknownBlockType _resetJaliscoStatusHandler;
    NSObject<OS_dispatch_queue> *_dsidQueue;
    NSMutableDictionary *_swqDSIDToDAAPServer;
    NSMutableSet *_purchaseDAAPSyncsInFlight;
    NSManagedObjectContext *_moc;
}

@property (nonatomic) unsigned long long currentServerGeneration; // @synthesize currentServerGeneration=_currentServerGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BLJaliscoDAAPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dsidQueue; // @synthesize dsidQueue=_dsidQueue;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<BLImageManager> imageManagerDelegate; // @synthesize imageManagerDelegate=_imageManagerDelegate;
@property (readonly, nonatomic, getter=isInitiallyLoadingJalisco) BOOL initiallyLoadingJalisco; // @synthesize initiallyLoadingJalisco=_initiallyLoadingJalisco;
@property (strong, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property (nonatomic) unsigned long long pendingUpdateGeneration; // @synthesize pendingUpdateGeneration=_pendingUpdateGeneration;
@property (strong, nonatomic) NSMutableSet *purchaseDAAPSyncsInFlight; // @synthesize purchaseDAAPSyncsInFlight=_purchaseDAAPSyncsInFlight;
@property (copy, nonatomic) CDUnknownBlockType resetJaliscoStatusHandler; // @synthesize resetJaliscoStatusHandler=_resetJaliscoStatusHandler;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *swqDSIDToDAAPServer; // @synthesize swqDSIDToDAAPServer=_swqDSIDToDAAPServer;

+ (void)initialize;
+ (BOOL)isSupported;
+ (void)preWarm;
+ (id)sharedClient;
+ (BOOL)workaround_18397698;
- (void).cxx_destruct;
- (id)_allPurchaseDAAPServers;
- (id)_currentPurchaseDAAPServers;
- (id)_dsids;
- (id)_familyPurchaseDAAPServers;
- (id)_fetchItemsForNeedsImport:(BOOL)arg1;
- (id)_fetchRequestForNotInStoreAccountIDs:(id)arg1;
- (void)_processFamilyCircleAdded:(id)arg1 removed:(id)arg2 unchanged:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resetPurchaseDAAPServersWithQueue:(id)arg1;
- (void)_sendCompletionHandlersWithSuccess:(BOOL)arg1 generation:(unsigned long long)arg2;
- (void)fetchItemsForArtworkCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchItemsForBuyParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchItemsForStoreIDs:(id)arg1;
- (void)fetchItemsForStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchRequestForBuyParameters:(id)arg1;
- (id)fetchRequestForStoreID:(id)arg1;
- (id)fetchRequestForStoreIDIncludingHidden:(id)arg1;
- (id)fetchRequestForStoreIDs:(id)arg1;
- (void)forceJaliscoArtworkUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleApplicationDidBecomeActive;
- (void)hideItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)jaliscoArtworkTimebombed;
- (id)newManagedObjectContext;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (id)persistentStoreCoordinator;
- (id)predicateForItems:(BOOL)arg1;
- (void)purchaseServerHandleClientExpired;
- (void)purchaseServerRequestITunesAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshSignInStatus;
- (BOOL)resetPoliteTimers;
- (void)setItemHidden:(BOOL)arg1 forStoreID:(id)arg2;
- (void)startObservingNotifications;
- (void)stopObservingNotifications;
- (void)updateFamilyPolitely:(BOOL)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePolitely:(BOOL)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userAccount:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2;

@end
