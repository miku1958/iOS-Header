//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMCollection.h>

#import <Email/EFContentProtectionObserver-Protocol.h>
#import <Email/EFLoggable-Protocol.h>
#import <Email/EMCollectionChangeObserver-Protocol.h>
#import <Email/EMCollectionItemIDStateCapturerDelegate-Protocol.h>
#import <Email/EMMessageListQueryResultsObserver-Protocol.h>

@class EFLazyCache, EMCollectionItemIDStateCapturer, EMMailboxScope, EMMessageListChangeObserverHelper, EMMessageRepository, EMObjectID, EMThreadScope, NSMapTable, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol EFScheduler, OS_dispatch_queue;

@interface EMMessageList : EMCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver>
{
    NSMutableDictionary *_expandedThreads;
    NSMapTable *_messageListItemsForRetry;
    struct os_unfair_lock_s _expandedThreadsLock;
    EMMailboxScope *_mailboxScope;
    EMThreadScope *_threadScope;
    EFLazyCache *_cache;
    id<EFScheduler> _observerScheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    EMMessageList *_unfilteredMessageList;
    EMMessageListChangeObserverHelper *_changeObserverHelper;
    NSSet *_recentlyCollapsedItemIDs;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (readonly, nonatomic) EFLazyCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) EMMessageListChangeObserverHelper *changeObserverHelper; // @synthesize changeObserverHelper=_changeObserverHelper;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isThreaded;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property (strong, nonatomic) NSSet *recentlyCollapsedItemIDs; // @synthesize recentlyCollapsedItemIDs=_recentlyCollapsedItemIDs;
@property (readonly, nonatomic) EMMessageRepository *repository;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property (strong, nonatomic) EMMessageList *unfilteredMessageList; // @synthesize unfilteredMessageList=_unfilteredMessageList;

+ (id)log;
+ (id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3;
+ (id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3;
- (void).cxx_destruct;
- (void)_attemptToFinishRetryingPromisesByItemID:(id)arg1;
- (id)_availableMessageListItemsForItemIDs:(id)arg1;
- (void)_commonInitWithRepository:(id)arg1;
- (id)_expandedObjectIDsForObjectIDs:(id)arg1;
- (id)_nextThreadItemIDAfterThreadItemID:(id)arg1;
- (BOOL)_threadIsExpanded:(id)arg1;
- (BOOL)_threadIsExpandedForItemID:(id)arg1;
- (id)_unreadItemIDsFromExtraInfo:(id)arg1;
- (BOOL)anyExpandedThreadContainsItemID:(id)arg1;
- (void)clearRecentlyCollapsedThread;
- (void)collapseThread:(id)arg1;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2 itemIDsWithCountChanges:(id)arg3;
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;
- (void)collectionDidFinishInitialLoad:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)dealloc;
- (id)ef_publicDescription;
- (void)expandThread:(id)arg1;
- (void)expandThreadsFromThreadItemIDs:(id)arg1;
- (id)filteredMessageListWithPredicate:(id)arg1;
- (void)finishRecovery;
- (id)initWithMailboxes:(id)arg1 repository:(id)arg2 targetClass:(Class)arg3 shouldTrackOldestItems:(BOOL)arg4 labelPrefix:(id)arg5;
- (id)initWithObjectID:(id)arg1 query:(id)arg2 repository:(id)arg3;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (void)invalidateCacheForItemIDs:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg1;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)arg1;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)labelForStateCapture;
- (id)messageListItemForItemID:(id)arg1;
- (id)messageListItemForItemID:(id)arg1 ifAvailable:(BOOL)arg2;
- (id)messageListItemsForItemIDs:(id)arg1;
- (id)messageListItemsForItemIDs:(id)arg1 ifAvailable:(BOOL)arg2;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (BOOL)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (void)queryMatchedChangesByObjectIDs:(id)arg1;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg1;
- (BOOL)recentlyCollapsedThreadContainsItemID:(id)arg1;
- (void)removeItemIDs:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)stopObserving:(id)arg1;

@end
