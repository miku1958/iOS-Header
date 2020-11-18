//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageAdditions : PBCodable <NSCopying>
{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageAdditions;
    BOOL _messagesAreNew;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int messagesAreNew:1;
    } _has;
}

@property (strong, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property (strong, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property (nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) BOOL hasMessagesAreNew;
@property (strong, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property (nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property (strong, nonatomic) NSMutableArray *messageAdditions; // @synthesize messageAdditions=_messageAdditions;
@property (nonatomic) BOOL messagesAreNew; // @synthesize messagesAreNew=_messagesAreNew;

+ (Class)messageAdditionType;
- (void).cxx_destruct;
- (void)addMessageAddition:(id)arg1;
- (void)clearMessageAdditions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageAdditionAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageAdditionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

