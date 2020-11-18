//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSMutableArray *_bccs;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    NSString *_messageId;
    NSString *_messageIdHeader;
    unsigned int _status;
    NSString *_subject;
    NSMutableArray *_tos;
    struct {
        unsigned int status:1;
    } _has;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (strong, nonatomic) NSMutableArray *bccs; // @synthesize bccs=_bccs;
@property (strong, nonatomic) NSMutableArray *ccs; // @synthesize ccs=_ccs;
@property (strong, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property (strong, nonatomic) NSData *dateReceived; // @synthesize dateReceived=_dateReceived;
@property (strong, nonatomic) NSData *dateSent; // @synthesize dateSent=_dateSent;
@property (strong, nonatomic) NSString *from; // @synthesize from=_from;
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasDateReceived;
@property (readonly, nonatomic) BOOL hasDateSent;
@property (readonly, nonatomic) BOOL hasFrom;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) BOOL hasMessageIdHeader;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasSubject;
@property (strong, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (strong, nonatomic) NSString *messageIdHeader; // @synthesize messageIdHeader=_messageIdHeader;
@property (nonatomic) unsigned int status; // @synthesize status=_status;
@property (strong, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (strong, nonatomic) NSMutableArray *tos; // @synthesize tos=_tos;

- (void).cxx_destruct;
- (void)addBcc:(id)arg1;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)bccAtIndex:(unsigned long long)arg1;
- (unsigned long long)bccsCount;
- (id)ccAtIndex:(unsigned long long)arg1;
- (unsigned long long)ccsCount;
- (void)clearBccs;
- (void)clearCcs;
- (void)clearTos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)toAtIndex:(unsigned long long)arg1;
- (unsigned long long)tosCount;
- (void)writeTo:(id)arg1;

@end

