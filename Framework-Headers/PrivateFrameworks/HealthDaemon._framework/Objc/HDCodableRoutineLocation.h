//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableRoutineLocation : PBCodable <NSCopying>
{
    double _confidence;
    double _latitude;
    double _longitude;
    double _uncertainty;
    NSData *_geoData;
    int _locationOfInterestType;
    NSString *_uuid;
    NSMutableArray *_visits;
    struct {
        unsigned int confidence:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int uncertainty:1;
        unsigned int locationOfInterestType:1;
    } _has;
}

@property (nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (strong, nonatomic) NSData *geoData; // @synthesize geoData=_geoData;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLocationOfInterestType;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasUncertainty;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (nonatomic) int locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
@property (nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;

- (void).cxx_destruct;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithLocationOfInterest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)writeTo:(id)arg1;

@end

