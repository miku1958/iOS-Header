//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBBaseMessageFields-Protocol.h>
#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBInteractionEventReadChanged : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _mailboxId;
    long long _messageId;
    int _mailboxType;
    BOOL _value;
    CDStruct_1b0f2210 _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long mailboxId;
@property (nonatomic) long long mailboxId; // @synthesize mailboxId=_mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property (nonatomic) long long messageId;
@property (nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property (nonatomic) BOOL value; // @synthesize value=_value;

- (int)StringAsMailboxType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;
- (void)writeTo:(id)arg1;

@end

