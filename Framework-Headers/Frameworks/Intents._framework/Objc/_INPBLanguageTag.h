//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface _INPBLanguageTag : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_tag;
}

@property (readonly, nonatomic) BOOL hasTag;
@property (strong, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

