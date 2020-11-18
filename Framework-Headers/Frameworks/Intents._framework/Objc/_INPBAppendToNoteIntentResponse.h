//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBNote;

@interface _INPBAppendToNoteIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBNote *_note;
}

@property (readonly, nonatomic) BOOL hasNote;
@property (strong, nonatomic) _INPBNote *note; // @synthesize note=_note;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

