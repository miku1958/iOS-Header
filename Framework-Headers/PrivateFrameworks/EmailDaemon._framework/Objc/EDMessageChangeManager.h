//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDLocalActionPersistence, EDMessagePersistence, EDPersistenceDatabase, EDServerMessagePersistenceFactory, NSString;
@protocol EDMessageChangeHookResponder, OS_dispatch_queue;

@interface EDMessageChangeManager : NSObject <EFLoggable>
{
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    NSObject<OS_dispatch_queue> *_markAllWorkQueue;
    EDMessagePersistence *_messagePersistence;
    id<EDMessageChangeHookResponder> _hookResponder;
}

@property (readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<EDMessageChangeHookResponder> hookResponder; // @synthesize hookResponder=_hookResponder;
@property (readonly, nonatomic) EDLocalActionPersistence *localActionPersistence; // @synthesize localActionPersistence=_localActionPersistence;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *markAllWorkQueue; // @synthesize markAllWorkQueue=_markAllWorkQueue;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property (readonly, nonatomic) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory; // @synthesize serverMessagePersistenceFactory=_serverMessagePersistenceFactory;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;
- (void).cxx_destruct;
- (id)_handleDuplicateServerMessage:(id)arg1 serverMessagePersistence:(id)arg2;
- (void)_handleFailedCopyItems:(id)arg1 transferAction:(id)arg2 generationWindow:(id)arg3;
- (void)_handleFailedDownload:(id)arg1 generationWindow:(id)arg2;
- (BOOL)_hookResponderRespondsToRequiredMethods:(id)arg1;
- (BOOL)_needToStoreServerMessagesForMailboxURL:(id)arg1;
- (BOOL)_persistResults:(id)arg1 forFlagChangeAction:(id)arg2;
- (BOOL)_persistResults:(id)arg1 forLabelChangeAction:(id)arg2;
- (BOOL)_persistResults:(id)arg1 forTransferAction:(id)arg2;
- (void)_reflectFlagChanges:(id)arg1 messages:(id)arg2 remoteIDs:(id)arg3 mailboxURL:(id)arg4;
- (void)_resetLocalFlagsToServerFlagsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_resetLocalLabelsToServerLabelsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_storeServerMessages:(id)arg1 mailboxURL:(id)arg2 generationWindow:(id)arg3;
- (id)accountForMailboxURL:(id)arg1;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 forMessages:(id)arg3;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(BOOL)arg3;
- (void)applyFlagChange:(id)arg1 toAllMessagesFromMailboxes:(id)arg2 exceptMessages:(id)arg3;
- (id)applyFlagChange:(id)arg1 toMessages:(id)arg2;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3;
- (void)deleteAllMessageFromMailboxes:(id)arg1 exceptMessages:(id)arg2;
- (void)deleteMessages:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (void)didReflectNewMessages:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 localActionPersistence:(id)arg2 messagePersistence:(id)arg3 serverMessagePersistenceFactory:(id)arg4 hookResponder:(id)arg5;
- (BOOL)mailboxURL:(id)arg1 isInSameAccountAsMailboxURL:(id)arg2;
- (BOOL)mailboxURLIsInRemoteAccount:(id)arg1;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3;
- (BOOL)persistResults:(id)arg1 forAction:(id)arg2;
- (void)reflectAddedLabels:(id)arg1 removedLabels:(id)arg2 forMessagesWithRemoteIDs:(id)arg3 mailboxURL:(id)arg4;
- (void)reflectAllMessagesDeletedInMailboxURL:(id)arg1;
- (void)reflectDeletedMessages:(id)arg1;
- (void)reflectDeletedMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 mailboxURL:(id)arg3;
- (id)reflectNewMessages:(id)arg1 mailboxURL:(id)arg2;
- (unsigned long long)signpostID;
- (void)transferAllMessagesFromMailboxes:(id)arg1 exceptMessages:(id)arg2 transferType:(long long)arg3 destinationMailboxURL:(id)arg4 userInitiated:(BOOL)arg5;
- (id)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(BOOL)arg4;
- (void)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(BOOL)arg4 oldMessagesByNewMessage:(id)arg5;
- (void)willStartPersistenceDidAddMessages:(id)arg1;

@end
