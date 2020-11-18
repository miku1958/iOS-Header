//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying>
{
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    BOOL _excludeFromShuffle;
    struct {
        unsigned int mediaType:1;
        unsigned int excludeFromShuffle:1;
    } _has;
}

@property (nonatomic) BOOL excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property (nonatomic) BOOL hasExcludeFromShuffle;
@property (readonly, nonatomic) BOOL hasIdentifierSet;
@property (nonatomic) BOOL hasMediaType;
@property (strong, nonatomic) _MPCProtoItemIdentifierSet *identifierSet; // @synthesize identifierSet=_identifierSet;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

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
