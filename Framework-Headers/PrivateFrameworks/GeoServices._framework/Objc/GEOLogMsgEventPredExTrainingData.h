//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying>
{
    double _chanceOfPrecipitation;
    double _chanceOfRain;
    double _chanceOfSnow;
    double _dayOfWeek;
    double _endTime;
    double _isTourist;
    double _secondsUntilEnd;
    double _secondsUntilStart;
    double _startTime;
    double _temperature;
    double _timeOfDay;
    double _timeSinceBackgrounded;
    GEOLatLng *_userLocation;
    int _actualTransportMode;
    int _distanceFromHereToHome;
    int _distanceFromHereToOrigin;
    int _distanceFromHereToParkedCar;
    int _distanceFromHereToWork;
    int _distanceFromHere;
    int _distanceFromOriginToDestination;
    int _entryType;
    int _mapType;
    int _predictedTransportMode;
    int _preferredTransportMode;
    BOOL _isInBasemode;
    BOOL _isTransitPossible;
    BOOL _routePlanningScreenPresented;
    struct {
        unsigned int has_chanceOfPrecipitation:1;
        unsigned int has_chanceOfRain:1;
        unsigned int has_chanceOfSnow:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_endTime:1;
        unsigned int has_isTourist:1;
        unsigned int has_secondsUntilEnd:1;
        unsigned int has_secondsUntilStart:1;
        unsigned int has_startTime:1;
        unsigned int has_temperature:1;
        unsigned int has_timeOfDay:1;
        unsigned int has_timeSinceBackgrounded:1;
        unsigned int has_actualTransportMode:1;
        unsigned int has_distanceFromHereToHome:1;
        unsigned int has_distanceFromHereToOrigin:1;
        unsigned int has_distanceFromHereToParkedCar:1;
        unsigned int has_distanceFromHereToWork:1;
        unsigned int has_distanceFromHere:1;
        unsigned int has_distanceFromOriginToDestination:1;
        unsigned int has_entryType:1;
        unsigned int has_mapType:1;
        unsigned int has_predictedTransportMode:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_isInBasemode:1;
        unsigned int has_isTransitPossible:1;
        unsigned int has_routePlanningScreenPresented:1;
    } _flags;
}

@property (nonatomic) int actualTransportMode;
@property (nonatomic) double chanceOfPrecipitation;
@property (nonatomic) double chanceOfRain;
@property (nonatomic) double chanceOfSnow;
@property (nonatomic) double dayOfWeek;
@property (nonatomic) int distanceFromHere;
@property (nonatomic) int distanceFromHereToHome;
@property (nonatomic) int distanceFromHereToOrigin;
@property (nonatomic) int distanceFromHereToParkedCar;
@property (nonatomic) int distanceFromHereToWork;
@property (nonatomic) int distanceFromOriginToDestination;
@property (nonatomic) double endTime;
@property (nonatomic) int entryType;
@property (nonatomic) BOOL hasActualTransportMode;
@property (nonatomic) BOOL hasChanceOfPrecipitation;
@property (nonatomic) BOOL hasChanceOfRain;
@property (nonatomic) BOOL hasChanceOfSnow;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasDistanceFromHere;
@property (nonatomic) BOOL hasDistanceFromHereToHome;
@property (nonatomic) BOOL hasDistanceFromHereToOrigin;
@property (nonatomic) BOOL hasDistanceFromHereToParkedCar;
@property (nonatomic) BOOL hasDistanceFromHereToWork;
@property (nonatomic) BOOL hasDistanceFromOriginToDestination;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasEntryType;
@property (nonatomic) BOOL hasIsInBasemode;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL hasIsTransitPossible;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasPredictedTransportMode;
@property (nonatomic) BOOL hasPreferredTransportMode;
@property (nonatomic) BOOL hasRoutePlanningScreenPresented;
@property (nonatomic) BOOL hasSecondsUntilEnd;
@property (nonatomic) BOOL hasSecondsUntilStart;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTemperature;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) BOOL hasTimeSinceBackgrounded;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (nonatomic) BOOL isInBasemode;
@property (nonatomic) double isTourist;
@property (nonatomic) BOOL isTransitPossible;
@property (nonatomic) int mapType;
@property (nonatomic) int predictedTransportMode;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) BOOL routePlanningScreenPresented;
@property (nonatomic) double secondsUntilEnd;
@property (nonatomic) double secondsUntilStart;
@property (nonatomic) double startTime;
@property (nonatomic) double temperature;
@property (nonatomic) double timeOfDay;
@property (nonatomic) double timeSinceBackgrounded;
@property (strong, nonatomic) GEOLatLng *userLocation;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsActualTransportMode:(id)arg1;
- (int)StringAsDistanceFromHere:(id)arg1;
- (int)StringAsDistanceFromHereToHome:(id)arg1;
- (int)StringAsDistanceFromHereToOrigin:(id)arg1;
- (int)StringAsDistanceFromHereToParkedCar:(id)arg1;
- (int)StringAsDistanceFromHereToWork:(id)arg1;
- (int)StringAsDistanceFromOriginToDestination:(id)arg1;
- (int)StringAsEntryType:(id)arg1;
- (int)StringAsMapType:(id)arg1;
- (int)StringAsPredictedTransportMode:(id)arg1;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (id)actualTransportModeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceFromHereAsString:(int)arg1;
- (id)distanceFromHereToHomeAsString:(int)arg1;
- (id)distanceFromHereToOriginAsString:(int)arg1;
- (id)distanceFromHereToParkedCarAsString:(int)arg1;
- (id)distanceFromHereToWorkAsString:(int)arg1;
- (id)distanceFromOriginToDestinationAsString:(int)arg1;
- (id)entryTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)predictedTransportModeAsString:(int)arg1;
- (id)preferredTransportModeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
