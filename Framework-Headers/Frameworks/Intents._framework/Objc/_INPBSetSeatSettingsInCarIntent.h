//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetSeatSettingsInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
    } _has;
    BOOL _enableCooling;
    BOOL _enableHeating;
    BOOL _enableMassage;
    int _relativeLevelSetting;
    int _seat;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_level;
}

@property (strong, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCooling; // @synthesize enableCooling=_enableCooling;
@property (nonatomic) BOOL enableHeating; // @synthesize enableHeating=_enableHeating;
@property (nonatomic) BOOL enableMassage; // @synthesize enableMassage=_enableMassage;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasEnableCooling;
@property (nonatomic) BOOL hasEnableHeating;
@property (nonatomic) BOOL hasEnableMassage;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLevel;
@property (nonatomic) BOOL hasRelativeLevelSetting;
@property (nonatomic) BOOL hasSeat;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBInteger *level; // @synthesize level=_level;
@property (nonatomic) int relativeLevelSetting; // @synthesize relativeLevelSetting=_relativeLevelSetting;
@property (nonatomic) int seat; // @synthesize seat=_seat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (int)StringAsSeat:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)relativeLevelSettingAsString:(int)arg1;
- (id)seatAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

