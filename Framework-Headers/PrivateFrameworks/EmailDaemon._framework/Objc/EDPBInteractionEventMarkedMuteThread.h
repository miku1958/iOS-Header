//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying>
{
    long long _conversationId;
    BOOL _value;
    struct {
        unsigned int conversationId:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value; // @synthesize value=_value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)withHasher:(id)arg1 setConversationID:(long long)arg2 data:(id)arg3;
- (void)writeTo:(id)arg1;

@end

