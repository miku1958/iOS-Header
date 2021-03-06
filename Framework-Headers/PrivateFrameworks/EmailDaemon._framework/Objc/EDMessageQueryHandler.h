//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

#import <EmailDaemon/EDMessageQueryHelperDelegate-Protocol.h>
#import <EmailDaemon/EFContentProtectionObserver-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMCollectionItemIDStateCapturerDelegate-Protocol.h>

@class EDMessageQueryHelper, EMCollectionItemIDStateCapturer, NSMutableDictionary, NSObject, NSString;
@protocol EDRemoteSearchProvider, EFScheduler, OS_dispatch_queue;

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver>
{
    struct EFAtomicObject _updateOldestMessagesCancelationToken;
    BOOL _didCancel;
    BOOL _isInitialized;
    id<EDRemoteSearchProvider> _remoteSearchProvider;
    EDMessageQueryHelper *_currentQueryHelper;
    id<EFScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSMutableDictionary *_oldestMessageIDsByMailboxObjectIDs;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property (strong, nonatomic) EDMessageQueryHelper *currentQueryHelper; // @synthesize currentQueryHelper=_currentQueryHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInitialized; // @synthesize isInitialized=_isInitialized;
@property (readonly, copy, nonatomic) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs; // @synthesize oldestMessageIDsByMailboxObjectIDs=_oldestMessageIDsByMailboxObjectIDs;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider; // @synthesize remoteSearchProvider=_remoteSearchProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // @synthesize resultQueue=_resultQueue;
@property (readonly, nonatomic) id<EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property (readonly) Class superclass;

+ (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 messageSource:(id)arg2;
+ (id)log;
- (void).cxx_destruct;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (id)_createChangesForMessagesWithConversationID:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_createHelperAndReconcileJournal:(BOOL)arg1;
- (void)_initializeOldestMessagesByMailbox;
- (id)_objectIDsAndUnreadObjectIDsFromMessages:(id)arg1 unreadObjectIDs:(id *)arg2;
- (id)_oldestItemQueryForMailbox:(id)arg1;
- (void)_oldestMessagesByMailboxObjectIDsWasUpdated;
- (void)_oldestMessagesNeedUpdate;
- (BOOL)_queryHelperIsCurrent:(id)arg1;
- (void)_restartHelper;
- (void)_updateOldestMessagesForMailboxes:(id)arg1 cancelationToken:(id)arg2;
- (void)cancel;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)dealloc;
- (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 helper:(id)arg2;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)labelForStateCapture;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (void)start;

@end

