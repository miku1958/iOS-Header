//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned char _style;
    unsigned long long _unreadCount;
    long long _rowID;
    BOOL _isArchived;
    BOOL _isFiltered;
    BOOL _hasHadSuccessfulQuery;
}

@property (readonly, strong) IMDAccount *account;
@property (copy) NSString *accountID;
@property (copy) NSString *chatIdentifier;
@property (readonly, strong) NSDictionary *chatProperties;
@property (readonly, strong) NSDictionary *dictionaryRepresentation;
@property (copy) NSString *displayName;
@property (copy) NSString *groupID;
@property (copy) NSString *guid;
@property BOOL hasHadSuccessfulQuery;
@property (readonly) BOOL isArchived;
@property BOOL isFiltered;
@property (copy) NSString *lastAddressedLocalHandle;
@property (strong) IMMessageItem *lastMessage;
@property (copy) NSArray *participants;
@property (strong) NSDictionary *properties;
@property (copy) NSString *roomName;
@property long long rowID;
@property (readonly, strong) IMDService *service;
@property (copy) NSString *serviceName;
@property (readonly, strong) IMDServiceSession *serviceSession;
@property long long state;
@property unsigned char style;
@property unsigned long long unreadCount;

- (void)_setRowID:(long long)arg1;
- (void)_setUnreadCount:(unsigned long long)arg1;
- (void)_updateCachedParticipants;
- (void)_updateLastMessage:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (id)copyDictionaryRepresentation:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentationIncludingLastMessage;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12 isFiltered:(BOOL)arg13 hasHadSuccessfulQuery:(BOOL)arg14;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)storeAndBroadcastChatChanges;
- (void)updateDisplayName:(id)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateHasHadSuccessfulQuery:(BOOL)arg1;
- (void)updateIsFiltered:(BOOL)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateProperties:(id)arg1;

@end

