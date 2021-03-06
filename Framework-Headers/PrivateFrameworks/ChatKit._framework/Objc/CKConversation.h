//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSItemProviderWriting-Protocol.h>

@class CKComposition, CKEntity, CNGroupIdentity, IMChat, IMService, NSArray, NSAttributedString, NSDate, NSNumber, NSSet, NSString;

@interface CKConversation : NSObject <NSItemProviderWriting>
{
    NSArray *_recipients;
    NSString *_name;
    IMChat *_chat;
    unsigned int _limitToLoad;
    struct {
        unsigned int ignoringTypingUpdates:1;
    } _conversationFlags;
    BOOL _needsReload;
    BOOL _shouldShowGroupPhotoUpdateBanner;
    BOOL _shouldShowGroupNameUpdateBanner;
    BOOL _hasLoadedAllMessages;
    BOOL _isReportedAsSpam;
    BOOL _wasKnownSender;
    BOOL _hasSetWasKnownSender;
    BOOL _holdWasKnownSenderUpdates;
    BOOL _needsUpdatedContactsForVisualIdentity;
    BOOL _needsUpdatedGroupPhotoForVisualIdentity;
    BOOL _needsUpdatedGroupNameForVisualIdentity;
    int _wasDetectedAsSMSSpam;
    int _wasDetectedAsSMSCategory;
    int _wasDetectedAsiMessageSpam;
    NSArray *_pendingHandles;
    NSString *_conversationListCollectionViewPinnedItemIdentifier;
    NSString *_conversationListCollectionViewListItemIdentifier;
    NSString *_selectedLastAddressedHandle;
    NSString *_selectedLastAddressedSIMID;
    NSSet *_pendingRecipients;
    NSAttributedString *_groupName;
    NSString *_groupIdentityUpdateHandleID;
    NSAttributedString *_previewText;
    NSNumber *_businessConversation;
    NSDate *_dateLastViewed;
    CNGroupIdentity *__conversationVisualIdentity;
}

@property (strong, nonatomic) CNGroupIdentity *_conversationVisualIdentity; // @synthesize _conversationVisualIdentity=__conversationVisualIdentity;
@property (strong, nonatomic) NSNumber *businessConversation; // @synthesize businessConversation=_businessConversation;
@property (readonly, nonatomic) BOOL buttonColor;
@property (readonly, nonatomic) BOOL canLeave;
@property (strong, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property (readonly, nonatomic) NSString *conversationListCollectionViewListItemIdentifier; // @synthesize conversationListCollectionViewListItemIdentifier=_conversationListCollectionViewListItemIdentifier;
@property (readonly, nonatomic) NSString *conversationListCollectionViewPinnedItemIdentifier; // @synthesize conversationListCollectionViewPinnedItemIdentifier=_conversationListCollectionViewPinnedItemIdentifier;
@property (strong, nonatomic) NSDate *dateLastViewed; // @synthesize dateLastViewed=_dateLastViewed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIndependentID;
@property (readonly, nonatomic) unsigned long long disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property (nonatomic) NSString *displayName;
@property (nonatomic) BOOL forceMMS; // @dynamic forceMMS;
@property (readonly, nonatomic) NSArray *frequentReplies;
@property (readonly, nonatomic, getter=isGroupConversation) BOOL groupConversation;
@property (readonly, nonatomic) NSString *groupID; // @dynamic groupID;
@property (strong, nonatomic) NSString *groupIdentityUpdateHandleID; // @synthesize groupIdentityUpdateHandleID=_groupIdentityUpdateHandleID;
@property (readonly, nonatomic) NSAttributedString *groupName; // @synthesize groupName=_groupName;
@property (readonly, nonatomic) NSArray *handles; // @dynamic handles;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasLoadedAllMessages; // @synthesize hasLoadedAllMessages=_hasLoadedAllMessages;
@property (nonatomic) BOOL hasSetWasKnownSender; // @synthesize hasSetWasKnownSender=_hasSetWasKnownSender;
@property (readonly, nonatomic) BOOL hasUnreadMessages; // @dynamic hasUnreadMessages;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL holdWasKnownSenderUpdates; // @synthesize holdWasKnownSenderUpdates=_holdWasKnownSenderUpdates;
@property (nonatomic, getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isPreviewTextForAttachment;
@property (nonatomic) BOOL isReportedAsSpam; // @synthesize isReportedAsSpam=_isReportedAsSpam;
@property (readonly, nonatomic) BOOL isToEmailAddress;
@property (readonly, nonatomic) NSString *lastAddressedHandle;
@property (readonly, nonatomic) NSString *lastAddressedSIMID;
@property (readonly, nonatomic, getter=hasLeft) BOOL left;
@property (readonly, nonatomic, getter=hasLeftGroupChat) BOOL leftGroupChat;
@property (nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property (copy, nonatomic) NSString *localUserIsComposing;
@property (nonatomic) BOOL localUserIsRecording;
@property (nonatomic) BOOL localUserIsTyping;
@property (readonly, nonatomic) NSSet *mergedPinningIdentifiers;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSString *name; // @dynamic name;
@property (readonly, nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property (nonatomic) BOOL needsUpdatedContactsForVisualIdentity; // @synthesize needsUpdatedContactsForVisualIdentity=_needsUpdatedContactsForVisualIdentity;
@property (nonatomic) BOOL needsUpdatedGroupNameForVisualIdentity; // @synthesize needsUpdatedGroupNameForVisualIdentity=_needsUpdatedGroupNameForVisualIdentity;
@property (nonatomic) BOOL needsUpdatedGroupPhotoForVisualIdentity; // @synthesize needsUpdatedGroupPhotoForVisualIdentity=_needsUpdatedGroupPhotoForVisualIdentity;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly, copy, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
@property (copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
@property (strong, nonatomic) NSSet *pendingRecipients; // @synthesize pendingRecipients=_pendingRecipients;
@property (readonly, nonatomic) NSString *pinningIdentifier;
@property (copy, nonatomic) NSAttributedString *previewText; // @synthesize previewText=_previewText;
@property (readonly, nonatomic) NSString *rawAddressedName;
@property (readonly, nonatomic) CKEntity *recipient; // @dynamic recipient;
@property (readonly, nonatomic) unsigned long long recipientCount;
@property (readonly, copy, nonatomic) NSArray *recipientStrings;
@property (strong, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (strong, nonatomic) NSString *selectedLastAddressedHandle; // @synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle;
@property (strong, nonatomic) NSString *selectedLastAddressedSIMID; // @synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID;
@property (readonly, nonatomic, getter=shouldSendReadReceipts) BOOL sendReadReceipts;
@property (readonly, copy, nonatomic) NSString *senderIdentifier;
@property (readonly, nonatomic) IMService *sendingService;
@property (readonly, nonatomic) NSString *serviceDisplayName;
@property (readonly, nonatomic) BOOL shouldShowCharacterCount;
@property (nonatomic) BOOL shouldShowGroupNameUpdateBanner; // @synthesize shouldShowGroupNameUpdateBanner=_shouldShowGroupNameUpdateBanner;
@property (nonatomic) BOOL shouldShowGroupPhotoUpdateBanner; // @synthesize shouldShowGroupPhotoUpdateBanner=_shouldShowGroupPhotoUpdateBanner;
@property (readonly, nonatomic) long long spamCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMutatingGroupMembers;
@property (readonly, nonatomic) unsigned long long unreadCount; // @dynamic unreadCount;
@property (strong, nonatomic) CKComposition *unsentComposition; // @dynamic unsentComposition;
@property (readonly, nonatomic) int wasDetectedAsSMSCategory; // @synthesize wasDetectedAsSMSCategory=_wasDetectedAsSMSCategory;
@property (readonly, nonatomic) int wasDetectedAsSMSSpam; // @synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam;
@property (readonly, nonatomic) int wasDetectedAsSpam;
@property (readonly, nonatomic) int wasDetectedAsiMessageSpam; // @synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam;
@property (nonatomic) BOOL wasKnownSender; // @synthesize wasKnownSender=_wasKnownSender;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(BOOL)arg5 error:(id *)arg6;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (long long)_iMessage_maxAttachmentCount;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4;
+ (BOOL)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id *)arg4;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long *)arg4;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)arg1;
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3;
+ (id)conversationForContacts:(id)arg1 candidateConversation:(id)arg2;
+ (BOOL)isSMSSpamFilteringEnabled;
+ (id)newPendingConversation;
+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (BOOL)_allowedByScreenTime;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (BOOL)_chatSupportsTypingIndicators;
- (void)_clearTypingIndicatorsIfNecessary;
- (BOOL)_contactsForVisualIdentityHaveKeys:(id)arg1;
- (id)_contactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;
- (id)_conversationList;
- (void)_createConversationVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (BOOL)_earlyReturnHistoryLoad;
- (id)_groupPhotoFileURL;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (BOOL)_handleIsForThisConversation:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1 shouldListParticipants:(BOOL)arg2;
- (BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (id)_nameForHandle:(id)arg1;
- (BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (BOOL)_unknownFilteringEnabled;
- (void)_updateContactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;
- (void)_updateGroupNameForVisualIdentity;
- (void)_updateGroupPhotoForVisualIdentity;
- (void)acceptTransfer:(id)arg1;
- (id)activityForNewScene;
- (void)addRecipientHandles:(id)arg1;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canInsertMoreRecipients;
- (BOOL)canSendComposition:(id)arg1 error:(id *)arg2;
- (BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (void)clearConversationLoadFromSpotlight;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)contactNameByHandle;
- (BOOL)containsHandleWithUID:(id)arg1;
- (id)conversationVisualIdentityWithKeys:(id)arg1 requestedNumberOfContactsToFetch:(unsigned long long)arg2;
- (id)copyForPendingConversation;
- (id)date;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)didBecomeActive;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 shouldListParticipants:(BOOL)arg3;
- (id)ensureMessageWithGUIDIsLoaded:(id)arg1;
- (id)entityMatchingHandle:(id)arg1;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)fastPreviewTextIgnoringPluginContent;
- (void)fetchSuggestedNameIfNecessary;
- (id)groupPhotoData;
- (BOOL)hasLoadedFromSpotlight;
- (BOOL)hasReplyEnabled;
- (BOOL)hasVerifiedBusiness;
- (id)init;
- (id)initWithChat:(id)arg1;
- (BOOL)isAdHocGroupConversation;
- (BOOL)isAppleConversation;
- (BOOL)isBlockedByCommunicationLimits;
- (BOOL)isBusinessConversation;
- (BOOL)isDowngraded;
- (BOOL)isKnownSender;
- (BOOL)isMakoConversation;
- (BOOL)isPlaceholder;
- (void)loadAllMessages;
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadFrequentReplies;
- (void)loadMoreMessages;
- (void)loadMoreMessagesAfterLastMessage;
- (void)loadMoreMessagesBeforeFirstMessage;
- (void)markAllMessagesAsRead;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (long long)maximumRecipientsForSendingService;
- (id)messageWithComposition:(id)arg1;
- (id)messagesFromComposition:(id)arg1;
- (id)nameWithRawAddresses:(BOOL)arg1;
- (BOOL)noAvailableServices;
- (id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1;
- (id)orderedContactsForAvatarView;
- (id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2;
- (BOOL)outgoingBubbleColor;
- (id)pinnedConversationDisplayNamePreferringShortName:(BOOL)arg1;
- (void)refreshServiceForSending;
- (void)reloadIfNeeded;
- (void)removeRecipientHandles:(id)arg1;
- (void)resetCaches;
- (void)resetNameCaches;
- (void)resortMessagesIfNecessary;
- (BOOL)sendButtonColor;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(BOOL)arg2;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2;
- (void)setMutedUntilDate:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsUpdatedContactOrderForVisualIdentity;
- (void)setNeedsUpdatedGroupNameForVisualIdentity;
- (void)setNeedsUpdatedGroupPhotoForVisualIdentity;
- (void)setPendingComposeRecipients:(id)arg1;
- (void)setSendReadReceipts:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)supportsSurf;
- (id)uniqueIdentifier;
- (void)unmute;
- (void)updateConversationVisualIdentityDisplayNameWithSender:(id)arg1;
- (void)updateConversationVisualIdentityGroupPhotoWithSender:(id)arg1;
- (void)updateDisplayNameIfSMSSpam;
- (void)updateLastViewedDate;
- (void)updateUnsentCompositionByAppendingComposition:(id)arg1;
- (void)updateUserActivity;
- (void)updateWasKnownSender;
- (void)willBecomeInactive;

@end

