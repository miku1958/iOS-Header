//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMRepositoryObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMContentItem-Protocol.h>
#import <Email/EMExtendedContentItem-Protocol.h>
#import <Email/EMMessageBuilder-Protocol.h>
#import <Email/EMMessageListItem-Protocol.h>
#import <Email/EMMutableMessageListItem-Protocol.h>

@class ECMessageFlags, ECSubject, EMMailDropMetadata, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString, NSUUID;
@protocol ECEmailAddressConvertible, EMCollectionItemID;

@interface EMMessage : EMRepositoryObject <EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem>
{
    unsigned long long _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s _mailboxesLock;
    BOOL _isVIP;
    BOOL _isBlocked;
    BOOL _hasAttachments;
    BOOL _isToMe;
    BOOL _isCCMe;
    BOOL _isAvailableLocally;
    int _exchangeEventUID;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    ECMessageFlags *_flags;
    long long _conversationNotificationLevel;
    long long _conversationID;
    NSArray *_toList;
    NSArray *_ccList;
    long long _dataTransferByteCount;
    long long _storageByteCount;
    EMMailDropMetadata *_mailDropMetadata;
    CDUnknownBlockType _loaderBlock;
    long long __internalID;
    id<ECEmailAddressConvertible> _senderAddress;
    NSArray *_bccList;
    NSUUID *_documentID;
}

@property (readonly, copy, nonatomic) NSString *UTType;
@property long long _internalID; // @synthesize _internalID=__internalID;
@property (readonly, copy, nonatomic) NSArray *availableRepresentations;
@property (copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property (readonly, copy) NSArray *ccList;
@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly) long long conversationID;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) long long dataTransferByteCount;
@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) EMMessage *displayMessage;
@property (readonly) id<EMCollectionItemID> displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) int exchangeEventUID;
@property (readonly, copy) NSIndexSet *flagColors;
@property (readonly) ECMessageFlags *flags;
@property (readonly) BOOL hasAttachments;
@property (readonly) BOOL hasUnflagged;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAvailableLocally;
@property (readonly) BOOL isBlocked;
@property (readonly) BOOL isCCMe;
@property (readonly) BOOL isEditable;
@property (nonatomic) BOOL isSinglePagePDF; // @dynamic isSinglePagePDF;
@property (readonly) BOOL isToMe;
@property (readonly) BOOL isVIP;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (copy, nonatomic) CDUnknownBlockType loaderBlock; // @synthesize loaderBlock=_loaderBlock;
@property (readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (readonly, copy) NSArray *mailboxObjectIDs;
@property (readonly, copy) NSArray *mailboxes;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly, nonatomic) EMMessageRepository *repository;
@property (strong, nonatomic) id<ECEmailAddressConvertible> senderAddress; // @synthesize senderAddress=_senderAddress;
@property (readonly, copy) NSArray *senderList;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly, nonatomic) long long storageByteCount;
@property (readonly) ECSubject *subject;
@property (readonly, copy) NSString *summary;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsArchiving;
@property (readonly, copy) NSArray *toList;

+ (id)UTType;
+ (id)_predicateForMessagesWithObjectIDConstantValue:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)combinedFlagsForMessageListItemFlags:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1;
+ (id)combinedFlagsForMessageListItems:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)externalDataTypeIdentifiers;
+ (id)log;
+ (id)predicateForExcludingMessageWithObjectID:(id)arg1;
+ (id)predicateForExcludingMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForMessageWithInternalID:(long long)arg1;
+ (id)predicateForMessageWithItemID:(id)arg1 mailboxPredicate:(id)arg2 mailboxTypeResolver:(id)arg3;
+ (id)predicateForMessageWithMIMEMessageIDHeader:(id)arg1;
+ (id)predicateForMessageWithObjectID:(id)arg1;
+ (id)predicateForMessagesWithObjectIDs:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInitWithBuilder:(CDUnknownBlockType)arg1;
- (id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (BOOL)isInManagedAccountWithSourceMailboxScope:(id)arg1;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAvailableRepresentations:(id)arg1;
- (void)setCachedMetadata:(id)arg1 forKey:(id)arg2;
- (void)setCcList:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDataTransferByteCount:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayMessageItemID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExchangeEventUID:(int)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setHasAttachments:(BOOL)arg1;
- (void)setHasUnflagged:(BOOL)arg1;
- (void)setIsAvailableLocally:(BOOL)arg1;
- (void)setIsBlocked:(BOOL)arg1;
- (void)setIsCCMe:(BOOL)arg1;
- (void)setIsToMe:(BOOL)arg1;
- (void)setIsVIP:(BOOL)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)setSenderList:(id)arg1;
- (void)setStorageByteCount:(long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setToList:(id)arg1;
- (void)setUTType:(id)arg1;

@end
