//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMItemsController.h>

#import <IMCore/IMSendProgressDelegate-Protocol.h>
#import <IMCore/IMStateLoggable-Protocol.h>
#import <IMCore/INSpeakable-Protocol.h>

@class IMAccount, IMChatRegistry, IMHandle, IMInlineReplyController, IMMessage, IMMessageItem, IMOrderingTools, IMScheduledUpdater, IMSendProgress, IMTimingCollection, MKMapItem, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString;
@protocol IMChatItemRules;

@interface IMChat : IMItemsController <IMStateLoggable, INSpeakable, IMSendProgressDelegate>
{
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_localUserIsComposing;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_lastAddressedSIMID;
    NSString *_groupID;
    NSData *_engramID;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    NSNumber *_countOfAttachmentsNotCachedLocally;
    NSNumber *_countOfMessagesMarkedAsSpam;
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
    unsigned int _ignoreDowngradeStatusUpdates:1;
    long long _isFiltered;
    unsigned int _forceMMS:1;
    BOOL _hasRefreshedServiceForSending;
    BOOL _hasHadSuccessfulQuery;
    long long _lastMessageTimeStampOnLoad;
    NSString *_currentUnreadHistoryQuery;
    BOOL _hasEarlierMessagesToLoad;
    BOOL _hasMoreRecentMessagesToLoad;
    BOOL _isCurrentlyDownloadingPurgedAssets;
    BOOL _allowedByScreenTime;
    BOOL _hasSurfRequest;
    IMInlineReplyController *_inlineReplyController;
    NSSet *_mergedPinningIdentifiers;
    NSString *_personCentricID;
    NSMutableArray *_mentionMessageGuidsToRemove;
    NSDictionary *_bizIntent;
    unsigned long long _senderBlackholeWarningStatus;
    NSString *_groupChatIdentifierUppercase;
    double _latestTypingIndicatorTimeInterval;
    IMOrderingTools *_orderingTools;
    NSString *_currentLocationGUID;
}

@property (strong, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // @synthesize _guids;
@property (readonly, nonatomic) BOOL _shouldRegisterChat;
@property (readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) BOOL allRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL allRecipientsSharingLocation;
@property (readonly, nonatomic) NSSet *allSiblingFMFHandles;
@property (nonatomic) BOOL allowedByScreenTime; // @synthesize allowedByScreenTime=_allowedByScreenTime;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property (readonly, nonatomic) BOOL canHaveMultipleParticipants;
@property (readonly, nonatomic) BOOL canLeaveChat;
@property (readonly, nonatomic) NSString *chatIdentifier;
@property (readonly, copy, nonatomic) NSArray *chatItems;
@property (readonly, nonatomic) IMChatRegistry *chatRegistry;
@property (readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property (nonatomic) void *contextInfo; // @synthesize contextInfo=_context;
@property (readonly, copy, nonatomic) NSNumber *countOfAttachmentsNotCachedLocally;
@property (strong, nonatomic) NSString *currentLocationGUID; // @synthesize currentLocationGUID=_currentLocationGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIndependentID;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSData *engramID; // @synthesize engramID=_engramID;
@property (readonly, nonatomic) IMMessage *firstMessage;
@property (readonly, nonatomic) NSSet *fmfHandles;
@property (nonatomic) BOOL forceMMS;
@property (strong, nonatomic) NSArray *frequentReplies; // @synthesize frequentReplies=_frequentReplies;
@property (readonly, nonatomic, getter=isGroupChat) BOOL groupChat;
@property (strong, nonatomic) NSString *groupChatIdentifierUppercase; // @synthesize groupChatIdentifierUppercase=_groupChatIdentifierUppercase;
@property (strong, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (nonatomic) BOOL hasHadSuccessfulQuery;
@property (readonly, nonatomic) BOOL hasMessageFromMe;
@property (readonly, nonatomic) BOOL hasMoreMessagesToLoad;
@property (readonly, nonatomic) BOOL hasMoreRecentMessagesToLoad;
@property (readonly, nonatomic) BOOL hasRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL hasRecipientsSharingLocation;
@property (readonly, nonatomic) BOOL hasSiblingRecipientsSharingLocation;
@property (nonatomic) BOOL hasSurfRequest; // @synthesize hasSurfRequest=_hasSurfRequest;
@property (readonly, nonatomic) BOOL hasUnhandledInvitation;
@property (readonly, nonatomic) BOOL hasVerifiedBusiness;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int ignoreDowngradeStatusUpdates;
@property (readonly, nonatomic) IMInlineReplyController *inlineReplyController; // @synthesize inlineReplyController=_inlineReplyController;
@property (strong, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
@property (readonly, nonatomic) BOOL isAppleChat;
@property (readonly, nonatomic) BOOL isBusinessChat;
@property (readonly, nonatomic) BOOL isCurrentlyDownloadingPurgedAttachments;
@property (nonatomic) long long isFiltered; // @dynamic isFiltered;
@property (readonly, nonatomic) BOOL isMakoChat;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isReplyEnabled;
@property (readonly, nonatomic) long long joinState; // @synthesize joinState=_joinState;
@property (strong, nonatomic) NSString *lastAddressedHandleID; // @synthesize lastAddressedHandleID=_lastAddressedHandleID;
@property (strong, nonatomic) NSString *lastAddressedSIMID; // @synthesize lastAddressedSIMID=_lastAddressedSIMID;
@property (readonly, nonatomic) IMMessage *lastFinishedMessage;
@property (readonly, nonatomic) NSDate *lastFinishedMessageDate;
@property (readonly, nonatomic) long long lastFinishedMessageID;
@property (readonly, nonatomic) IMMessageItem *lastFinishedMessageItem;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property (readonly, nonatomic) IMMessage *lastIncomingMessage;
@property (readonly, nonatomic) IMMessage *lastMessage;
@property (readonly, nonatomic) BOOL lastMessageExists;
@property (readonly, nonatomic) long long lastMessageTimeStampOnLoad; // @synthesize lastMessageTimeStampOnLoad=_lastMessageTimeStampOnLoad;
@property (readonly, nonatomic) NSString *lastSeenMessageGuid;
@property (readonly, nonatomic) IMMessage *lastSentMessage;
@property (readonly, nonatomic) NSDate *lastSentMessageDate;
@property (readonly, nonatomic) NSDate *lastTUConversationCreatedDate;
@property (nonatomic) double latestTypingIndicatorTimeInterval; // @synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval;
@property (readonly, nonatomic) NSString *localTypingMessageGUID;
@property (strong, nonatomic) NSString *localUserIsComposing;
@property (nonatomic) BOOL localUserIsRecording;
@property (nonatomic) BOOL localUserIsTyping;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (strong, nonatomic) NSMutableArray *mentionMessageGuidsToRemove; // @synthesize mentionMessageGuidsToRemove=_mentionMessageGuidsToRemove;
@property (readonly, nonatomic) NSSet *mergedPinningIdentifiers; // @synthesize mergedPinningIdentifiers=_mergedPinningIdentifiers;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (readonly, nonatomic) unsigned long long messageFailureCount;
@property (nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
@property (strong, nonatomic) IMOrderingTools *orderingTools; // @synthesize orderingTools=_orderingTools;
@property (readonly, nonatomic) unsigned long long overallChatStatus;
@property (readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (readonly, nonatomic) NSString *persistentID;
@property (strong, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
@property (readonly, nonatomic) NSString *pinningIdentifier;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (strong, nonatomic) IMHandle *recipient;
@property (readonly, nonatomic) NSArray *replyChatItems;
@property (readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (readonly, nonatomic) NSString *roomNameWithoutSuffix;
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressAccountRetargetingForNamedGroupConversation;
@property (readonly, nonatomic) unsigned long long unreadMessageCount;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property (readonly, nonatomic) BOOL wantsSenderBlackholeWarning;
@property (readonly, copy, nonatomic) NSDate *watermarkDate;
@property (readonly, nonatomic) long long watermarkMessageID;

+ (Class)_NPSManagerClass;
+ (id)__im_adjustMessageSummaryInfoForSending:(id)arg1;
+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;
+ (void)cleanWatermarkCache;
+ (BOOL)isGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (void)removeGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (void)setChatItemRulesClass:(Class)arg1;
+ (id)stateCaptureRecents;
+ (void)storeGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (CDUnknownBlockType)watermarkComparator;
- (void).cxx_destruct;
- (void)__clearReadMessageCache;
- (void)_accountControllerUpdated:(id)arg1;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2;
- (id)_archivedItemsToReplace:(id)arg1 isReplacingItems:(BOOL)arg2;
- (void)_automation_markAsRead:(BOOL)arg1 messageGUID:(id)arg2 forChatGUID:(id)arg3 fromMe:(BOOL)arg4;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (BOOL)_chatStyleSupportsTypingAndCancelTypingIndicators;
- (void)_clearCachedIdentifier;
- (void)_clearDowngradeMarkers;
- (void)_clearPendingMessages;
- (void)_clearUnreadCount;
- (long long)_compareChat:(id)arg1 withDate:(id)arg2 withDate:(id)arg3;
- (void)_configureLocationShareItem:(id)arg1;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_endTiming;
- (void)_engroupParticipantsUpdated;
- (void)_fixItemForSendingMessageTime:(id)arg1;
- (void)_fixSendingItemDateAndSortID:(id)arg1;
- (unsigned long long)_flagsForCancelTypingIndicatorMessage;
- (unsigned long long)_flagsForTypingIndicatorMessage:(BOOL)arg1;
- (id)_generatePersonCentricID;
- (id)_getCurrentLocale;
- (id)_getDeleteChatItemMap:(id)arg1;
- (id)_getMessageChatItemMap:(id)arg1 withDeleteMap:(id)arg2 andAllChatItems:(id)arg3;
- (void)_handleAddressBookChangeForRecipientUID:(id)arg1;
- (void)_handleAttributionChanged;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1 updateReplyCounts:(BOOL)arg2;
- (void)_handleItem:(id)arg1;
- (void)_handleItem:(id)arg1 forChatStyle:(unsigned char)arg2;
- (void)_handleItem:(id)arg1 forChatStyle:(unsigned char)arg2 updateReplyCounts:(BOOL)arg3;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (BOOL)_hasJustSentAMessage;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 items:(id)arg8 participants:(id)arg9 isFiltered:(long long)arg10 hasHadSuccessfulQuery:(BOOL)arg11;
- (id)_initWithItems:(id)arg1;
- (void)_initialize;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 isReplacingItems:(BOOL)arg5 limit:(unsigned long long)arg6 hasMessagesBefore:(BOOL)arg7 hasMessagesAfter:(BOOL)arg8;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5;
- (void)_invalidateDowngradeState;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2 toiMessageChat:(BOOL)arg3;
- (void)_inviteParticipantsToChat:(id)arg1 reason:(id)arg2 toiMessageChat:(BOOL)arg3;
- (void)_invitePendingParticipants;
- (BOOL)_isDuplicate:(id)arg1;
- (void)_itemsDidChange:(id)arg1;
- (id)_lastFinishedMessage;
- (void)_launchAppForJoinRequest:(id)arg1;
- (void)_leaveChat:(BOOL)arg1;
- (void)_markItemAsPlayed:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (id)_pendingParticipants;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 oldChatItems:(id)arg5 shouldLog:(BOOL)arg6;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3;
- (id)_previousAccountForService:(id)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(long long)arg6 hasHadSuccessfulQuery:(BOOL)arg7;
- (BOOL)_recipientIsPhoneNumber;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_refreshServiceForSendingIfNeededWithMessage:(id)arg1;
- (void)_removeItem:(id)arg1;
- (void)_removeParticipantsFromChat:(id)arg1 reason:(id)arg2 fromiMessageChat:(BOOL)arg3;
- (id)_renderingDataDictionary;
- (void)_replaceItems:(id)arg1;
- (void)_replaceStaleChatItems;
- (void)_resetChatIdToLastMessageItemMap;
- (BOOL)_sanityCheckAccounts;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (BOOL)_serverBagPreventsScrutinyMode;
- (void)_setAccount:(id)arg1;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)_setAttachments:(id)arg1;
- (void)_setChatProperties:(id)arg1;
- (void)_setCountOfAttachmentsNotCachedLocally:(id)arg1;
- (void)_setCountOfMessagesMarkedAsSpam:(id)arg1;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1 postNotification:(BOOL)arg2;
- (void)_setDisplayName:(id)arg1;
- (void)_setIsDownloadingPurgedAssets:(BOOL)arg1;
- (void)_setJoinState:(long long)arg1;
- (void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (void)_setRenderingDataDictionary:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)_setupObservation;
- (BOOL)_shouldAnnouncePeopleJoin;
- (BOOL)_shouldSendCancelTypingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (void)_startTiming:(id)arg1;
- (id)_storedWatermarkMessageID;
- (void)_targetToService:(id)arg1 newComposition:(BOOL)arg2;
- (id)_timingCollection;
- (id)_tuDateForChat:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateBizIntentForMessageIfNeeded:(id)arg1;
- (void)_updateChatItems;
- (void)_updateChatItemsAsNotSpam;
- (void)_updateChatItemsAsNotSpamEnumeratingItems:(CDUnknownBlockType)arg1;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2 shouldPost:(BOOL)arg3;
- (void)_updateDisplayName:(id)arg1;
- (void)_updateDisplayName:(id)arg1 sender:(id)arg2;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_updateEngramID:(id)arg1;
- (void)_updateFileAttachmentGUIDsForMessageIfNeeded:(id)arg1 withPayloadAttachments:(id)arg2;
- (BOOL)_updateJoinStateWithMessageIfNeeded:(id)arg1;
- (void)_updateLastAddressedHandleID:(id)arg1;
- (void)_updateLastAddressedSIMID:(id)arg1;
- (void)_updateLastSeenMessageGuid:(id)arg1;
- (void)_updateLocaleForMessageIfNeeded:(id)arg1;
- (void)_updateLocationShareItemsForSender:(id)arg1;
- (void)_updateMessageItemTimeIfNeeded:(id)arg1;
- (void)_updatePayloadForMessageIfNeeded:(id)arg1;
- (void)_updateRepliesIfNecessaryWithItem:(id)arg1;
- (void)_updateRepliesIfNecessaryWithRemovedItems:(id)arg1 threadIdentifiersOfRemovedParts:(id)arg2;
- (void)_updateSenderForMessageIfNeeded:(id)arg1 adjustingSender:(BOOL)arg2;
- (void)_updateTypingGUIDForMessageIfNeeded:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allMessagesToReportAsSpam;
- (BOOL)allParticipantsAreContacts;
- (id)allPropertiesOfParticipant:(id)arg1;
- (BOOL)allowedToShowConversation;
- (BOOL)allowedToShowConversationSync;
- (BOOL)authorizationToSendCurrentLocationMessageDenied;
- (BOOL)authorizationToSendCurrentLocationMessageDetermined;
- (BOOL)authorizedToSendCurrentLocationMessage;
- (void)autoReportSpam;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)beginListeningToAttributionChanges;
- (BOOL)canAddParticipant:(id)arg1;
- (BOOL)canAddParticipants:(id)arg1;
- (BOOL)canEditChatItem:(id)arg1;
- (BOOL)canSendCurrentLocationMessage;
- (BOOL)canSendMessage:(id)arg1;
- (BOOL)canSendTransfer:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)chatItemsForItems:(id)arg1;
- (long long)chatPropertyValueFor:(long long)arg1;
- (void)clear;
- (void)clearSMSCategory;
- (void)clearScrutinyMode;
- (void)closeSession;
- (long long)compareChatByDate:(id)arg1;
- (long long)compareChatByTUDateAndLastFinishedMessageDate:(id)arg1;
- (BOOL)containsMessageFromContactOrMe;
- (id)conversation;
- (id)conversationContext;
- (void)dealloc;
- (void)declineInvitation;
- (BOOL)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (void)deleteExtensionPayloadData;
- (void)deleteIMMessageItems:(id)arg1;
- (void)deleteTransfers:(id)arg1;
- (void)didUnregisterFromRegistry:(id)arg1;
- (void)dismissInlineReplies;
- (void)downloadPurgedAttachments;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)endListeningToAttributionChanges;
- (BOOL)hasKnownParticipants;
- (BOOL)hasStoredMessageWithGUID:(id)arg1;
- (BOOL)hasSurfRequestForPaymentType:(unsigned long long)arg1;
- (BOOL)hasSurfRequestNotFromMe:(id)arg1;
- (id)hashOfParticipantIDs;
- (id)init;
- (void)initiateTUConversationWithVideoEnabled:(BOOL)arg1;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipantsToiMessageChat:(id)arg1 reason:(id)arg2;
- (BOOL)isCategorized;
- (BOOL)isDowngraded;
- (BOOL)isHoldingUpdatesForKey:(id)arg1;
- (BOOL)isInScrutinyMode;
- (BOOL)isMuted;
- (BOOL)isSMS;
- (void)join;
- (void)joinExistingTUConversationWithVideoEnabled:(BOOL)arg1;
- (id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (void)leave;
- (void)leaveiMessageGroup;
- (void)loadAttachments:(CDUnknownBlockType)arg1;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(BOOL)arg2;
- (void)loadInlineRepliesForThreadIdentifier:(id)arg1 threadOriginator:(id)arg2 messageGuid:(id)arg3;
- (id)loadInlineReplyMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2 threadIdentifier:(id)arg3 loadImmediately:(BOOL)arg4;
- (id)loadMessagesBeforeAndAfterGUID:(id)arg1 numberOfMessagesToLoadBeforeGUID:(unsigned long long)arg2 numberOfMessagesToLoadAfterGUID:(unsigned long long)arg3 loadImmediately:(BOOL)arg4 threadIdentifier:(id)arg5;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (void)loadParticipantContactsIfNecessary;
- (id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)localizedUnreadShortcutTitle;
- (BOOL)mapsToTUConversation:(id)arg1;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markAllMessagesAsRead;
- (void)markAsAutoSpamReported;
- (unsigned long long)markAsSpam:(unsigned long long)arg1;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsPlayedExpressiveSend:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (id)messageAcknowledgmentSummaryForConversationListWithMessage:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (id)messageGuidsForMyUnreadMentions;
- (id)messageItemForGUID:(id)arg1;
- (id)messagesToReportAsSpamFromChatItems:(id)arg1;
- (id)muteUntilDate;
- (long long)numberOfTimesRespondedToThread;
- (id)participantHandleIDs;
- (id)participantsWithState:(unsigned long long)arg1;
- (unsigned long long)paymentTypeForMessage:(id)arg1;
- (BOOL)receivedResponseForChat;
- (void)refreshServiceForSending;
- (void)remove;
- (void)removeMentionMessageGUID:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)removeParticipantsFromiMessageChat:(id)arg1 reason:(id)arg2;
- (BOOL)repliedToChat;
- (void)resortMessages;
- (void)retryGroupPhotoUploadIfNecessary;
- (void)saveWatermark;
- (unsigned long long)scrutinyModeAttemptCount;
- (void)sendCurrentLocationMessage;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2 downgradeChat:(BOOL)arg3;
- (void)sendGroupPhotoUpdate:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3 withGuid:(id)arg4;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3 withGuid:(id)arg4;
- (void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6;
- (id)sendProgressDelegate;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorData:(id)arg2;
- (void)setMuteUntilDate:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)setRoomName:(id)arg1;
- (void)setSendProgressDelegate:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)shareLocationUntilDate:(id)arg1;
- (BOOL)shouldForceToSMS;
- (void)startTrackingParticipantLocations;
- (id)stateDictionaryForDiagnosticsRequest;
- (unsigned long long)stateForParticipant:(id)arg1;
- (void)stopSharingLocation;
- (void)stopTrackingParticipantLocations;
- (id)testChatItems;
- (void)updateChatItemsIfNeeded;
- (void)updateIsBlackholed:(BOOL)arg1;
- (void)updateIsFiltered:(long long)arg1;
- (void)updateMessage:(id)arg1 withIndexesOfDeletedItems:(id)arg2 withIndexToRangeMapOfDeletedItems:(id)arg3;
- (void)updateSMSCategory:(long long)arg1;
- (void)updateShouldForceToSMS:(BOOL)arg1;
- (void)updateWatermarks;
- (void)userToggledReadReceiptSwitch:(BOOL)arg1;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (void)verifyFiltering;
- (void)watermarkInForScrutinyMode;
- (void)watermarkOutForScrutinyMode;

@end
