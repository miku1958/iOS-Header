//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/INSpeakable-Protocol.h>

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject <INSpeakable>
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_engramID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSString *_lastAddressedSIMID;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned long long _unreadCount;
    long long _rowID;
    long long _cloudKitSyncState;
    NSString *_originalGroupID;
    NSString *_serverChangeToken;
    long long _lastReadMessageTimeStamp;
    NSDate *_lastSentMessageDate;
    long long _lastMessageTimeStampOnLoad;
    unsigned char _style;
    BOOL _createEngramGroupOnMessageSend;
    BOOL _pendingENGroupParticipantUpdate;
    BOOL _isArchived;
    BOOL _isFiltered;
    BOOL _isBlackholed;
    BOOL _hasHadSuccessfulQuery;
    BOOL _wasReportedAsJunk;
    BOOL _meCardUpdated;
    NSString *_cloudKitRecordID;
    NSString *_srCloudKitRecordID;
    NSString *_lastSeenMessageGuid;
    NSString *_srServerChangeToken;
    long long _srCloudKitSyncState;
    NSDictionary *_nicknamesForParticipants;
    unsigned long long _numMessagesSent;
}

@property (readonly, strong) IMDAccount *account;
@property (copy) NSString *accountID;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (copy) NSString *chatIdentifier;
@property (readonly, strong) NSDictionary *chatProperties;
@property (copy) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
@property long long cloudKitSyncState;
@property BOOL createEngramGroupOnMessageSend; // @synthesize createEngramGroupOnMessageSend=_createEngramGroupOnMessageSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong) NSDictionary *dictionaryRepresentation;
@property (copy) NSString *displayName;
@property (copy, setter=setEngramID:) NSString *engramID;
@property (copy, setter=setGroupID:) NSString *groupID;
@property (copy) NSString *guid;
@property BOOL hasHadSuccessfulQuery;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) BOOL isArchived;
@property BOOL isBlackholed;
@property BOOL isFiltered;
@property (readonly, nonatomic) BOOL isUnnamedChat;
@property (copy) NSString *lastAddressedLocalHandle;
@property (copy) NSString *lastAddressedSIMID;
@property (strong) IMMessageItem *lastMessage;
@property long long lastMessageTimeStampOnLoad;
@property (nonatomic) long long lastReadMessageTimeStamp;
@property (readonly, copy) NSString *lastSeenMessageGuid; // @synthesize lastSeenMessageGuid=_lastSeenMessageGuid;
@property (readonly, strong) NSDate *lastSentMessageDate;
@property BOOL meCardUpdated; // @synthesize meCardUpdated=_meCardUpdated;
@property (readonly, nonatomic) NSDictionary *nicknamesForParticipants; // @synthesize nicknamesForParticipants=_nicknamesForParticipants;
@property unsigned long long numMessagesSent; // @synthesize numMessagesSent=_numMessagesSent;
@property (readonly, copy) NSString *originalGroupID;
@property (copy) NSArray *participants;
@property BOOL pendingENGroupParticipantUpdate; // @synthesize pendingENGroupParticipantUpdate=_pendingENGroupParticipantUpdate;
@property (readonly, nonatomic) NSString *personCentricID;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (strong) NSDictionary *properties;
@property (copy) NSString *roomName;
@property (setter=_setRowID:) long long rowID;
@property (copy, nonatomic) NSString *serverChangeToken;
@property (readonly, strong) IMDService *service;
@property (copy) NSString *serviceName;
@property (readonly, strong) IMDServiceSession *serviceSession;
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (copy) NSString *srCloudKitRecordID; // @synthesize srCloudKitRecordID=_srCloudKitRecordID;
@property long long srCloudKitSyncState; // @synthesize srCloudKitSyncState=_srCloudKitSyncState;
@property (copy) NSString *srServerChangeToken; // @synthesize srServerChangeToken=_srServerChangeToken;
@property long long state;
@property unsigned char style;
@property (readonly) Class superclass;
@property (setter=_setUnreadCount:) unsigned long long unreadCount;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property BOOL wasReportedAsJunk; // @synthesize wasReportedAsJunk=_wasReportedAsJunk;

+ (id)_recordType;
- (id)_chatRegistry;
- (id)_ckUniqueID;
- (id)_copyCKRecordFromExistingCKMetadataIsUsingStringRay:(BOOL)arg1 zoneID:(id)arg2 salt:(id)arg3;
- (void)_persistMergedIDMergedChatsIfNeeded:(id)arg1;
- (id)_personIdentity;
- (void)_updateCachedParticipants;
- (void)_updateLastMessage:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (BOOL)applyChangesUsingCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (id)cloudKitChatID;
- (id)cloudKitDebugDescription;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2 isUsingStingRay:(BOOL)arg3;
- (id)copyDictionaryRepresentation:(BOOL)arg1;
- (void)dealloc;
- (id)dictionaryRepresentationIncludingLastMessage;
- (long long)engroupCreationDate;
- (id)generateNewGroupID;
- (int)getNumberOfTimesRespondedToThread;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 lastAddressedSIMID:(id)arg10 properties:(id)arg11 state:(long long)arg12 style:(unsigned char)arg13 isFiltered:(BOOL)arg14 hasHadSuccessfulQuery:(BOOL)arg15 engramID:(id)arg16 serverChangeToken:(id)arg17 cloudKitSyncState:(long long)arg18 originalGroupID:(id)arg19 lastReadMessageTimeStamp:(long long)arg20 lastMessageTimeStampOnLoad:(long long)arg21 srServerChangeToken:(id)arg22 srCloudKitSyncState:(long long)arg23 cloudKitRecordID:(id)arg24 srCloudKitRecordID:(id)arg25 isBlackholed:(BOOL)arg26;
- (id)initWithCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (BOOL)isBusinessChat;
- (BOOL)isNewerThan:(id)arg1;
- (BOOL)isOlderThan:(id)arg1;
- (BOOL)isSMSSpam;
- (BOOL)isiMessageSpam;
- (id)lastSeenMessageGUID;
- (void)meCardHasUpdated;
- (int)messageHandshakeState;
- (BOOL)receivedBlackholeError;
- (id)recordName;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)resetCKSyncState;
- (void)setLastSentMessageDate:(id)arg1;
- (void)setOriginalGroupID:(id)arg1;
- (int)smsHandshakeState;
- (void)storeAndBroadcastChatChanges;
- (void)tearDownToneNotificationSessionIfNeeded;
- (void)updateCloudKitRecordID:(id)arg1;
- (void)updateCloudKitSyncState:(long long)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)updateEngramID:(id)arg1;
- (void)updateEngroupCreationDate:(long long)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateHasHadSuccessfulQuery:(BOOL)arg1;
- (void)updateIsBlackholed:(BOOL)arg1;
- (void)updateIsFiltered:(BOOL)arg1;
- (void)updateIsSMSSpamChatProperty:(BOOL)arg1;
- (void)updateIsiMessageSpam:(BOOL)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)updateLastAddressedSIMID:(id)arg1;
- (void)updateLastReadMessageTimeStampIfNeeded:(long long)arg1;
- (void)updateLastSeenMessageGuidIfNeeded:(id)arg1;
- (void)updateMessageHandshakeState:(int)arg1;
- (void)updateNicknamesForParticipants:(id)arg1;
- (void)updateNumberOfTimesRespondedToThread;
- (void)updateOriginalGroupID:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)updateReceivedBlackholeError:(BOOL)arg1;
- (void)updateSMSHandshakeState:(int)arg1;
- (void)updateSMSSpamExtensionNameChatProperty:(id)arg1;
- (void)updateSRCloudKitSyncState:(long long)arg1;
- (void)updateSRServerChangeToken:(id)arg1;
- (void)updateServerChangeToken:(id)arg1;
- (void)updateShouldForceToSMS:(BOOL)arg1;
- (void)updateSrCloudKitRecordID:(id)arg1;

@end
