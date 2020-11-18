//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class MFLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFLibraryMessage : MFMailMessage
{
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
    unsigned long long _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    unsigned long long _conversationFlags;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;
- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (void)_initializeMetadata;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (id)account;
- (id)attachmentStorageLocation;
- (void)commit;
- (long long)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (void)dealloc;
- (BOOL)hasTemporaryUid;
- (unsigned long long)hash;
- (id)initWithLibraryID:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLibraryMessage;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartial;
- (id)library;
- (unsigned int)libraryID;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)mailbox;
- (unsigned int)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)metadataValueOfClass:(Class)arg1 forKey:(id)arg2;
- (unsigned int)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (id)remoteID;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (void)setIsPartial:(BOOL)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned int)uid;
- (unsigned long long)uniqueRemoteId;

@end
