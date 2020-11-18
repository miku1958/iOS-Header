//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _airCirculationMode;
    int _climateZone;
    _INPBInteger *_fanSpeedIndex;
    _INPBDouble *_fanSpeedPercentage;
    _INPBIntentMetadata *_intentMetadata;
    int _relativeFanSpeedSetting;
    int _relativeTemperatureSetting;
    _INPBTemperature *_temperature;
    BOOL _enableAirConditioner;
    BOOL _enableAutoMode;
    BOOL _enableClimateControl;
    BOOL _enableFan;
    struct {
        unsigned int airCirculationMode:1;
        unsigned int climateZone:1;
        unsigned int relativeFanSpeedSetting:1;
        unsigned int relativeTemperatureSetting:1;
        unsigned int enableAirConditioner:1;
        unsigned int enableAutoMode:1;
        unsigned int enableClimateControl:1;
        unsigned int enableFan:1;
    } _has;
}

@property (nonatomic) int airCirculationMode; // @synthesize airCirculationMode=_airCirculationMode;
@property (nonatomic) int climateZone; // @synthesize climateZone=_climateZone;
@property (nonatomic) BOOL enableAirConditioner; // @synthesize enableAirConditioner=_enableAirConditioner;
@property (nonatomic) BOOL enableAutoMode; // @synthesize enableAutoMode=_enableAutoMode;
@property (nonatomic) BOOL enableClimateControl; // @synthesize enableClimateControl=_enableClimateControl;
@property (nonatomic) BOOL enableFan; // @synthesize enableFan=_enableFan;
@property (strong, nonatomic) _INPBInteger *fanSpeedIndex; // @synthesize fanSpeedIndex=_fanSpeedIndex;
@property (strong, nonatomic) _INPBDouble *fanSpeedPercentage; // @synthesize fanSpeedPercentage=_fanSpeedPercentage;
@property (nonatomic) BOOL hasAirCirculationMode;
@property (nonatomic) BOOL hasClimateZone;
@property (nonatomic) BOOL hasEnableAirConditioner;
@property (nonatomic) BOOL hasEnableAutoMode;
@property (nonatomic) BOOL hasEnableClimateControl;
@property (nonatomic) BOOL hasEnableFan;
@property (readonly, nonatomic) BOOL hasFanSpeedIndex;
@property (readonly, nonatomic) BOOL hasFanSpeedPercentage;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRelativeFanSpeedSetting;
@property (nonatomic) BOOL hasRelativeTemperatureSetting;
@property (readonly, nonatomic) BOOL hasTemperature;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int relativeFanSpeedSetting; // @synthesize relativeFanSpeedSetting=_relativeFanSpeedSetting;
@property (nonatomic) int relativeTemperatureSetting; // @synthesize relativeTemperatureSetting=_relativeTemperatureSetting;
@property (strong, nonatomic) _INPBTemperature *temperature; // @synthesize temperature=_temperature;
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

