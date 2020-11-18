//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDeparturePredicate, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitSchedule : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange _operatingHoursRange;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    NSMutableArray *_departureSequences;
    CDStruct_65124bb5 _has;
}

@property (strong, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown; // @synthesize departurePredicateCountdown=_departurePredicateCountdown;
@property (strong, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp; // @synthesize departurePredicateStamp=_departurePredicateStamp;
@property (strong, nonatomic) NSMutableArray *departureSequences; // @synthesize departureSequences=_departureSequences;
@property (readonly, nonatomic) BOOL hasDeparturePredicateCountdown;
@property (readonly, nonatomic) BOOL hasDeparturePredicateStamp;
@property (nonatomic) BOOL hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)departureSequenceType;
+ (id)transitScheduleForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)addDepartureSequence:(id)arg1;
- (void)clearDepartureSequences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)departureSequenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureSequencesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

