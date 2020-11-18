//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMItemsController.h>

#import <IMCore/IMSendProgressDelegate-Protocol.h>

@class IMAccount, IMChatRegistry, IMHandle, IMMessage, IMScheduledUpdater, IMSendProgress, IMTimingCollection, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol IMChatItemRules;

@interface IMChat : IMItemsController <IMSendProgressDelegate>
{
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_currentLocationGUID;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_groupID;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    IMTimingCollection *_timingCollection;
    id<IMChatItemRules> _chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    IMSendProgress *_sendProgress;
    BOOL _downgradeState;
    IMScheduledUpdater *_downgradeStateUpdater;
    long long _joinState;
    unsigned char _style;
    unsigned long long _dbFailedCount;
    unsigned long long _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured:1;
    unsigned int _isFirstMessageInvitation:1;
    unsigned int _wasInvitationHandled:1;
    unsigned int _didSendAFinishedMessage:1;
    unsigned int _hasPendingMarkRead:1;
    unsigned int _isUpdatingChatItems:1;
    unsigned int _isRecording:1;
    unsigned int _ignoreDowngradeStatusUpdates:1;
    unsigned int _isFiltered:1;
    unsigned int _forceMMS:1;
    BOOL _hasRefreshedServiceForSending;
    BOOL _hasHadSuccessfulQuery;
    double _latestTypingIndicatorTimeInterval;
}

@property (strong, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // @synthesize _guids;
@property (readonly, nonatomic) BOOL _shouldRegisterChat;
@property (readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) BOOL allRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL allRecipientsSharingLocation;
@property (readonly, strong, nonatomic) NSSet *allSiblingFMFHandles;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) BOOL canHaveMultipleParticipants;
@property (readonly, nonatomic) BOOL canLeaveChat;
@property (readonly, nonatomic) NSString *chatIdentifier;
@property (readonly, strong, nonatomic) IMChatRegistry *chatRegistry;
@property (readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property (nonatomic) void *contextInfo; // @synthesize contextInfo=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, strong, nonatomic) NSSet *fmfHandles;
@property (nonatomic) BOOL forceMMS;
@property (strong, nonatomic) NSArray *frequentReplies; // @synthesize frequentReplies=_frequentReplies;
@property (strong, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (nonatomic) BOOL hasHadSuccessfulQuery;
@property (readonly, nonatomic) BOOL hasMoreMessagesToLoad;
@property (readonly, nonatomic) BOOL hasRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL hasRecipientsSharingLocation;
@property (readonly, nonatomic) BOOL hasSiblingRecipientsSharingLocation;
@property (readonly, nonatomic) BOOL hasUnhandledInvitation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
@property (nonatomic) BOOL isFiltered; // @dynamic isFiltered;
@property (readonly, nonatomic) long long joinState; // @synthesize joinState=_joinState;
@property (readonly, strong, nonatomic) NSString *lastAddressedHandleID; // @synthesize lastAddressedHandleID=_lastAddressedHandleID;
@property (readonly, nonatomic) IMMessage *lastFinishedMessage;
@property (readonly, strong, nonatomic) NSDate *lastFinishedMessageDate;
@property (readonly, nonatomic) long long lastFinishedMessageID;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property (readonly, nonatomic) IMMessage *lastIncomingMessage;
@property (readonly, nonatomic) IMMessage *lastMessage;
@property (nonatomic) double latestTypingIndicatorTimeInterval; // @synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval;
@property (readonly, nonatomic) NSString *localTypingMessageGUID;
@property (nonatomic) BOOL localUserIsRecording;
@property (nonatomic) BOOL localUserIsTyping;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (readonly, nonatomic) unsigned long long messageFailureCount;
@property (nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
@property (readonly, nonatomic) unsigned long long overallChatStatus;
@property (readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (readonly, strong, nonatomic) NSString *persistentID;
@property (strong, nonatomic) IMHandle *recipient;
@property (readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (readonly, nonatomic) NSString *roomNameWithoutSuffix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressAccountRetargetingForGroupConversation;
@property (readonly, nonatomic) unsigned long long unreadMessageCount;

+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;
+ (void)setChatItemRulesClass:(Class)arg1;
- (void)__clearReadMessageCache;
- (void)_accountControllerUpdated:(id)arg1;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)_clearCachedIdentifier;
- (void)_clearDowngradeMarkers;
- (void)_clearUnreadCount;
- (void)_configureLocationShareItem:(id)arg1;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_endTiming;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(BOOL)arg8 hasHadSuccessfulQuery:(BOOL)arg9;
- (id)_initWithItems:(id)arg1;
- (void)_initialize;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5;
- (void)_invalidateDowngradeState;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (BOOL)_isDuplicate:(id)arg1;
- (void)_itemsDidChange:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (id)_pendingParticipants;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3;
- (id)_previousAccountForService:(id)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(BOOL)arg6 hasHadSuccessfulQuery:(BOOL)arg7;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_replaceStaleChatItems;
- (BOOL)_sanityCheckAccounts;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (void)_setAccount:(id)arg1;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)_setAttachments:(id)arg1;
- (void)_setChatProperties:(id)arg1;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_setJoinState:(long long)arg1;
- (void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2;
- (void)_setLocalUserIsTyping:(BOOL)arg1 recording:(BOOL)arg2 suppliedGUID:(id)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (void)_setTimerForReadMessageCache;
- (void)_setupObservation;
- (BOOL)_shouldAnnouncePeopleJoin;
- (BOOL)_shouldSendCancelTypingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (void)_startTiming:(id)arg1;
- (void)_targetToService:(id)arg1 newComposition:(BOOL)arg2;
- (id)_timingCollection;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateChatItems;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2 shouldPost:(BOOL)arg3;
- (void)_updateDisplayName:(id)arg1;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_updateLocationShareItemsForSender:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allPropertiesOfParticipant:(id)arg1;
- (BOOL)authorizedToSendCurrentLocationMessage;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (BOOL)canAddParticipants:(id)arg1;
- (BOOL)canSendCurrentLocationMessage;
- (BOOL)canSendMessage:(id)arg1;
- (BOOL)canSendTransfer:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)chatItems;
- (id)chatItemsForItems:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)declineInvitation;
- (BOOL)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (void)deleteTransfers:(id)arg1;
- (void)didUnregisterFromRegistry:(id)arg1;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (BOOL)hasStoredMessageWithGUID:(id)arg1;
- (id)init;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (BOOL)isDowngraded;
- (void)join;
- (id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (void)leave;
- (void)loadAttachments:(CDUnknownBlockType)arg1;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markAllMessagesAsRead;
- (void)markAsSpam;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (id)participantsWithState:(unsigned long long)arg1;
- (void)refreshServiceForSending;
- (void)remove;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)sendCurrentLocationMessage;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6;
- (id)sendProgressDelegate;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)setRoomName:(id)arg1;
- (void)setSendProgressDelegate:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)shareLocationUntilDate:(id)arg1;
- (void)startTrackingParticipantLocations;
- (unsigned long long)stateForParticipant:(id)arg1;
- (void)stopSharingLocation;
- (void)stopTrackingParticipantLocations;
- (id)testChatItems;
- (void)updateChatItemsIfNeeded;
- (void)updateIsFiltered:(BOOL)arg1;
- (void)updateMessage:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;

@end

