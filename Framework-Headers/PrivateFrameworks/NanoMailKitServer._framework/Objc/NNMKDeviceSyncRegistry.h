//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKSQLiteConnection, NSDate, NSString;

@interface NNMKDeviceSyncRegistry : NSObject
{
    BOOL _isMessagesSyncSuspendedByConnectivity;
    BOOL _organizeByThread;
    BOOL _protectedContentChannelSupported;
    BOOL _recreatedFromScratch;
    NSString *_path;
    unsigned long long _fullSyncVersion;
    double _deviceScreenWidth;
    double _deviceScreenScale;
    NSDate *_disconnectedSince;
    unsigned long long _currentDatabaseSchemaVersion;
    NNMKSQLiteConnection *_database;
}

@property (nonatomic) unsigned long long currentDatabaseSchemaVersion; // @synthesize currentDatabaseSchemaVersion=_currentDatabaseSchemaVersion;
@property (strong, nonatomic) NNMKSQLiteConnection *database; // @synthesize database=_database;
@property (nonatomic) double deviceScreenScale; // @synthesize deviceScreenScale=_deviceScreenScale;
@property (nonatomic) double deviceScreenWidth; // @synthesize deviceScreenWidth=_deviceScreenWidth;
@property (strong, nonatomic) NSDate *disconnectedSince; // @synthesize disconnectedSince=_disconnectedSince;
@property (nonatomic) unsigned long long fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property (nonatomic) BOOL isMessagesSyncSuspendedByConnectivity; // @synthesize isMessagesSyncSuspendedByConnectivity=_isMessagesSyncSuspendedByConnectivity;
@property (nonatomic) BOOL organizeByThread; // @synthesize organizeByThread=_organizeByThread;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property (nonatomic) BOOL protectedContentChannelSupported; // @synthesize protectedContentChannelSupported=_protectedContentChannelSupported;
@property (readonly, nonatomic) BOOL recreatedFromScratch; // @synthesize recreatedFromScratch=_recreatedFromScratch;

- (void).cxx_destruct;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_deleteAllObjectsFromTable:(id)arg1 mailboxId:(id)arg2;
- (id)_idsIdentifiersForObjectId:(id)arg1 type:(id)arg2;
- (void)_insureTransactionFor:(CDUnknownBlockType)arg1;
- (void)_loadAllControlValues;
- (id)_mailboxFromCurrentRowInStatement:(struct sqlite3_stmt *)arg1;
- (void)_removeControlValueForKey:(id)arg1;
- (id)_selectMailboxesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned long long)arg2 blockForBinding:(CDUnknownBlockType)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(CDUnknownBlockType)arg2;
- (id)_ungroupGroupedValue:(id)arg1;
- (id)activeMailboxes;
- (void)addObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (void)addOrUpdateMailbox:(id)arg1;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (void)beginUpdates;
- (void)cleanUpForFullSyncWithMailbox:(id)arg1;
- (void)cleanUpForInitialSync;
- (BOOL)containsSyncedMessageForMessageWithId:(id)arg1;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (void)deleteAllMailboxes;
- (void)deleteMailboxWithId:(id)arg1;
- (void)deleteMailboxWithId:(id)arg1 startTransaction:(BOOL)arg2;
- (void)deleteObjectId:(id)arg1 fromIDSIdentifiersNotYetAckdOfType:(id)arg2;
- (void)endUpdates;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned long long)arg1;
- (BOOL)hasMailboxSyncedActive;
- (void)incrementSyncVersionForMailboxId:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)insertDeletedMessageId:(id)arg1 mailboxId:(id)arg2;
- (id)mailboxIdForDeletedMessageId:(id)arg1;
- (id)mailboxWithId:(id)arg1;
- (id)mailboxes;
- (id)mailboxesForAccountId:(id)arg1;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (id)messageIdForSanitizedMessageId:(id)arg1;
- (id)objectIdsForIDSIdentifierNotYetAckd:(id)arg1 type:(id *)arg2 resendInterval:(unsigned long long *)arg3;
- (id)objectIdsForType:(id)arg1;
- (id)oldestDateReceivedForMailboxId:(id)arg1;
- (id)pendingComposedMessageIds;
- (void)prepareIDSIdentifiersForResendForErrorCode:(long long)arg1;
- (long long)progressForComposedMessageWithId:(id)arg1;
- (void)removePendingComposedMessages;
- (void)removeProgressForComposedMessageWithId:(id)arg1;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 mailbox:(id)arg2;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned long long)arg2 withDateToResend:(id)arg3 errorCode:(long long)arg4;
- (void)resetSyncRequestedFromMailboxes;
- (void)setProgress:(long long)arg1 forComposedMessageWithId:(id)arg2;
- (id)syncEnabledMailboxes;
- (unsigned long long)syncVersionForMailboxId:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (unsigned long long)syncedMessagesCount;
- (unsigned long long)syncedMessagesCountForMailboxId:(id)arg1;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg1 mailboxId:(id)arg2;
- (id)typeForIDSIdentifierNotYetAckd:(id)arg1;
- (void)updateSyncActiveForMailbox:(id)arg1;
- (void)updateSyncEnabledForMailbox:(id)arg1;
- (void)updateSyncRequestedForMailbox:(id)arg1;
- (void)updateSyncVersion:(unsigned long long)arg1 forMailboxId:(id)arg2;

@end
