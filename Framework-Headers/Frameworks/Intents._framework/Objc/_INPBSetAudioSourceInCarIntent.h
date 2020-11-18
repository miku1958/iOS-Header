//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _audioSource;
    _INPBIntentMetadata *_intentMetadata;
    int _relativeAudioSourceReference;
    struct {
        unsigned int audioSource:1;
        unsigned int relativeAudioSourceReference:1;
    } _has;
}

@property (nonatomic) int audioSource; // @synthesize audioSource=_audioSource;
@property (nonatomic) BOOL hasAudioSource;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRelativeAudioSourceReference;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int relativeAudioSourceReference; // @synthesize relativeAudioSourceReference=_relativeAudioSourceReference;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (id)audioSourceAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

