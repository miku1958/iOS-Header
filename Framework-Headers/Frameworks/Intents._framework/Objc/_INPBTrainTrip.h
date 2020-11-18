//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTrainTrip-Protocol.h>

@class NSString, _INPBDateTime, _INPBDateTimeRange, _INPBLocationValue;

@interface _INPBTrainTrip : PBCodable <_INPBTrainTrip, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSString *_arrivalPlatform;
    _INPBLocationValue *_arrivalStationLocation;
    NSString *_departurePlatform;
    _INPBLocationValue *_departureStationLocation;
    _INPBDateTime *_onlineCheckInTime;
    NSString *_provider;
    NSString *_trainName;
    NSString *_trainNumber;
    _INPBDateTimeRange *_tripDuration;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (copy, nonatomic) NSString *arrivalPlatform; // @synthesize arrivalPlatform=_arrivalPlatform;
@property (strong, nonatomic) _INPBLocationValue *arrivalStationLocation; // @synthesize arrivalStationLocation=_arrivalStationLocation;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *departurePlatform; // @synthesize departurePlatform=_departurePlatform;
@property (strong, nonatomic) _INPBLocationValue *departureStationLocation; // @synthesize departureStationLocation=_departureStationLocation;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (readonly, nonatomic) BOOL hasArrivalStationLocation;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (readonly, nonatomic) BOOL hasDepartureStationLocation;
@property (readonly, nonatomic) BOOL hasOnlineCheckInTime;
@property (readonly, nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasTrainName;
@property (readonly, nonatomic) BOOL hasTrainNumber;
@property (readonly, nonatomic) BOOL hasTripDuration;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBDateTime *onlineCheckInTime; // @synthesize onlineCheckInTime=_onlineCheckInTime;
@property (copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trainName; // @synthesize trainName=_trainName;
@property (copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber=_trainNumber;
@property (strong, nonatomic) _INPBDateTimeRange *tripDuration; // @synthesize tripDuration=_tripDuration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
