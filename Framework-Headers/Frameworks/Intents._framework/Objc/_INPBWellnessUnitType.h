//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessUnitType-Protocol.h>

@class NSString;

@interface _INPBWellnessUnitType : PBCodable <_INPBWellnessUnitType, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int bloodGlucoseUnit:1;
        unsigned int bloodPressureUnit:1;
        unsigned int energyUnit:1;
        unsigned int heartRateUnit:1;
        unsigned int lengthUnit:1;
        unsigned int massUnit:1;
        unsigned int respiratoryRateUnit:1;
        unsigned int temperatureUnit:1;
        unsigned int timeUnit:1;
        unsigned int volumeUnit:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _bloodGlucoseUnit;
    int _bloodPressureUnit;
    int _energyUnit;
    int _heartRateUnit;
    int _lengthUnit;
    int _massUnit;
    int _respiratoryRateUnit;
    int _temperatureUnit;
    int _timeUnit;
    int _volumeUnit;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (nonatomic) int bloodGlucoseUnit; // @synthesize bloodGlucoseUnit=_bloodGlucoseUnit;
@property (nonatomic) int bloodPressureUnit; // @synthesize bloodPressureUnit=_bloodPressureUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int energyUnit; // @synthesize energyUnit=_energyUnit;
@property (nonatomic) BOOL hasBloodGlucoseUnit;
@property (nonatomic) BOOL hasBloodPressureUnit;
@property (nonatomic) BOOL hasEnergyUnit;
@property (nonatomic) BOOL hasHeartRateUnit;
@property (nonatomic) BOOL hasLengthUnit;
@property (nonatomic) BOOL hasMassUnit;
@property (nonatomic) BOOL hasRespiratoryRateUnit;
@property (nonatomic) BOOL hasTemperatureUnit;
@property (nonatomic) BOOL hasTimeUnit;
@property (nonatomic) BOOL hasVolumeUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic) int heartRateUnit; // @synthesize heartRateUnit=_heartRateUnit;
@property (nonatomic) int lengthUnit; // @synthesize lengthUnit=_lengthUnit;
@property (nonatomic) int massUnit; // @synthesize massUnit=_massUnit;
@property (nonatomic) int respiratoryRateUnit; // @synthesize respiratoryRateUnit=_respiratoryRateUnit;
@property (readonly) Class superclass;
@property (nonatomic) int temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
@property (nonatomic) int timeUnit; // @synthesize timeUnit=_timeUnit;
@property (nonatomic) int volumeUnit; // @synthesize volumeUnit=_volumeUnit;

+ (BOOL)supportsSecureCoding;
- (int)StringAsBloodGlucoseUnit:(id)arg1;
- (int)StringAsBloodPressureUnit:(id)arg1;
- (int)StringAsEnergyUnit:(id)arg1;
- (int)StringAsHeartRateUnit:(id)arg1;
- (int)StringAsLengthUnit:(id)arg1;
- (int)StringAsMassUnit:(id)arg1;
- (int)StringAsRespiratoryRateUnit:(id)arg1;
- (int)StringAsTemperatureUnit:(id)arg1;
- (int)StringAsTimeUnit:(id)arg1;
- (int)StringAsVolumeUnit:(id)arg1;
- (id)bloodGlucoseUnitAsString:(int)arg1;
- (id)bloodPressureUnitAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)energyUnitAsString:(int)arg1;
- (id)heartRateUnitAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lengthUnitAsString:(int)arg1;
- (id)massUnitAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)respiratoryRateUnitAsString:(int)arg1;
- (id)temperatureUnitAsString:(int)arg1;
- (id)timeUnitAsString:(int)arg1;
- (id)volumeUnitAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
