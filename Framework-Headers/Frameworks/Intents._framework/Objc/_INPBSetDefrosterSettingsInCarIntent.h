//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetDefrosterSettingsInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <_INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int defroster:1;
        unsigned int enable:1;
    } _has;
    BOOL _enable;
    int _defroster;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (strong, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defroster; // @synthesize defroster=_defroster;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enable; // @synthesize enable=_enable;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL hasEnable;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsDefroster:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defrosterAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

