//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _defroster;
    _INPBIntentMetadata *_intentMetadata;
    BOOL _enable;
    struct {
        unsigned int defroster:1;
        unsigned int enable:1;
    } _has;
}

@property (nonatomic) int defroster; // @synthesize defroster=_defroster;
@property (nonatomic) BOOL enable; // @synthesize enable=_enable;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL hasEnable;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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

