//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBSearchForMessagesIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messages;
}

@property (strong, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)messagesType;
+ (id)options;
- (void).cxx_destruct;
- (void)addMessages:(id)arg1;
- (void)clearMessages;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

