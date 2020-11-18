//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDThreadChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMCollectionItemIDStateCapturerDelegate-Protocol.h>

@class EDThreadPersistence, EDThreadReloadSummaryHelper, EDUpdateThrottler, EFCancelationToken, EMCollectionItemIDStateCapturer, EMMailboxScope, EMThreadScope, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol EFCancelable, EFScheduler;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate>
{
    EMThreadScope *_threadScope;
    EDThreadPersistence *_threadPersistence;
    id<EFScheduler> _changeScheduler;
    id<EFScheduler> _backgroundWorkScheduler;
    EFCancelationToken *_cancelationToken;
    NSMutableDictionary *_pendingChanges;
    NSMutableArray *_pendingPositionChanges;
    NSMutableSet *_unreportedJournaledObjectIDs;
    NSMutableDictionary *_reportedJournaledObjectIDs;
    NSMutableDictionary *_oldestThreadObjectIDsByMailbox;
    id<EFCancelable> _updateOldestThreadsCancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EDThreadReloadSummaryHelper *_reloadSummaryHelper;
    EMMailboxScope *_mailboxScope;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler; // @synthesize backgroundWorkScheduler=_backgroundWorkScheduler;
@property (strong, nonatomic) EFCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property (readonly, nonatomic) id<EFScheduler> changeScheduler; // @synthesize changeScheduler=_changeScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property (strong, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox; // @synthesize oldestThreadObjectIDsByMailbox=_oldestThreadObjectIDsByMailbox;
@property (strong, nonatomic) NSMutableDictionary *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property (strong, nonatomic) NSMutableArray *pendingPositionChanges; // @synthesize pendingPositionChanges=_pendingPositionChanges;
@property (readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper; // @synthesize reloadSummaryHelper=_reloadSummaryHelper;
@property (strong, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs; // @synthesize reportedJournaledObjectIDs=_reportedJournaledObjectIDs;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property (readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property (strong, nonatomic) NSMutableSet *unreportedJournaledObjectIDs; // @synthesize unreportedJournaledObjectIDs=_unreportedJournaledObjectIDs;
@property (strong, nonatomic) id<EFCancelable> updateOldestThreadsCancelationToken; // @synthesize updateOldestThreadsCancelationToken=_updateOldestThreadsCancelationToken;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler; // @synthesize updateThrottler=_updateThrottler;

+ (id)log;
- (void).cxx_destruct;
- (void)_addChangeToPendingChanges:(id)arg1 forThreadObjectID:(id)arg2;
- (void)_flushUpdatesWithReason:(id)arg1;
- (void)_getInitialResults;
- (BOOL)_isAddingOrDeletingObjectID:(id)arg1;
- (BOOL)_keyPathsAffectSorting:(id)arg1;
- (id)_messageForPersistedMessage:(id)arg1;
- (void)_oldestThreadsNeedUpdate;
- (void)_onScheduler:(id)arg1 performCancelableBlock:(CDUnknownBlockType)arg2;
- (void)_persistenceIsAddingThreadWithObjectID:(id)arg1;
- (void)_persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;
- (void)cancel;
- (id)initWithQuery:(id)arg1 threadScope:(id)arg2 messagePersistence:(id)arg3 threadPersistence:(id)arg4 hookRegistry:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7 observationResumer:(id)arg8;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)labelForStateCapture;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;
- (void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(CDUnknownBlockType)arg2;
- (void)start;
- (void)test_tearDown;
- (id)threadForObjectID:(id)arg1 error:(id *)arg2;

@end
