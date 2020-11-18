//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/BUUserAccountObserving-Protocol.h>
#import <BookLibrary/SSBookDownloadQueue-Protocol.h>

@class BLServiceProxy, NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue, BUUserAccountObserving>
{
    struct os_unfair_lock_s _observersLock;
    struct os_unfair_lock_s _activeDownloadsLock;
    NSHashTable *_observers;
    BLServiceProxy *_serviceProxy;
    NSMutableDictionary *_activeDownloads;
}

@property (strong, nonatomic) NSMutableDictionary *activeDownloads; // @synthesize activeDownloads=_activeDownloads;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) BLServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property (readonly) Class superclass;

+ (void)cancelAllActiveDownloads;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)arg1;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(BOOL *)arg2;
- (id)_downloadStatusStoreID:(id)arg1 storePlaylistID:(id)arg2 orPermLink:(id)arg3 downloadID:(id)arg4 title:(id)arg5 collectionTitle:(id)arg6 isPaused:(BOOL)arg7 isAudiobook:(BOOL)arg8;
- (void)_notifyComplete:(id)arg1;
- (void)_notifyFailed:(id)arg1;
- (void)_notifyProgress:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(BOOL)arg2;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (void)_purchaseDidCompleteWithResponse:(id)arg1;
- (void)_purchaseDidFailedWithResponse:(id)arg1;
- (void)_sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg1;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 storePlaylistID:(id)arg2 orPermlink:(id)arg3 downloadID:(id)arg4 title:(id)arg5 collectionTitle:(id)arg6 isPaused:(BOOL)arg7 isAudiobook:(BOOL)arg8 targetObserver:(id)arg9;
- (id)_stringFromObject:(id)arg1;
- (void)addDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDownloadsWithManifestRequest:(id)arg1 uiManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadsWithRestoreContentRequestItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAllActiveDownloadsWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)processAutomaticDownloadsWithReply:(CDUnknownBlockType)arg1;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(BOOL)arg3 userInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)purchaseWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purchaseWithRequest:(id)arg1 uiManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadFromServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAutomaticDownloadEnabled:(BOOL)arg1 uiManager:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)userAccount:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2;

@end
