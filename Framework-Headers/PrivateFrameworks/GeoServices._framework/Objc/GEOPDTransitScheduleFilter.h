//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDeparturePredicate, PBUnknownFields;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange _operatingHoursRange;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    CDStruct_65124bb5 _has;
}

@property (strong, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown; // @synthesize departurePredicateCountdown=_departurePredicateCountdown;
@property (strong, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp; // @synthesize departurePredicateStamp=_departurePredicateStamp;
@property (readonly, nonatomic) BOOL hasDeparturePredicateCountdown;
@property (readonly, nonatomic) BOOL hasDeparturePredicateStamp;
@property (nonatomic) BOOL hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

