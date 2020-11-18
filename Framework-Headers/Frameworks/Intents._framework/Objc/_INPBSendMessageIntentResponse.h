//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendMessageIntentResponse-Protocol.h>

@class NSString, _INPBMessage;

@interface _INPBSendMessageIntentResponse : PBCodable <_INPBSendMessageIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBMessage *_sentMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSentMessage;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBMessage *sentMessage; // @synthesize sentMessage=_sentMessage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

