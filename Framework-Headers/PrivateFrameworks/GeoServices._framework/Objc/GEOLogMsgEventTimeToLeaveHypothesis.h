//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    CDStruct_90e5f431 _has;
}

@property (nonatomic) int arrival; // @synthesize arrival=_arrival;
@property (nonatomic) int departure; // @synthesize departure=_departure;
@property (nonatomic) double earliestArrivalOffset; // @synthesize earliestArrivalOffset=_earliestArrivalOffset;
@property (nonatomic) double earliestDepartureOffset; // @synthesize earliestDepartureOffset=_earliestDepartureOffset;
@property (nonatomic) BOOL hasArrival;
@property (nonatomic) BOOL hasDeparture;
@property (nonatomic) BOOL hasEarliestArrivalOffset;
@property (nonatomic) BOOL hasEarliestDepartureOffset;
@property (nonatomic) BOOL hasLatestArrivalOffset;
@property (nonatomic) BOOL hasLatestDepartureOffset;
@property (nonatomic) BOOL hasNumberOfReroutes;
@property (nonatomic) BOOL hasTtlUiNotificationShown;
@property (nonatomic) double latestArrivalOffset; // @synthesize latestArrivalOffset=_latestArrivalOffset;
@property (nonatomic) double latestDepartureOffset; // @synthesize latestDepartureOffset=_latestDepartureOffset;
@property (nonatomic) unsigned int numberOfReroutes; // @synthesize numberOfReroutes=_numberOfReroutes;
@property (nonatomic) int ttlUiNotificationShown; // @synthesize ttlUiNotificationShown=_ttlUiNotificationShown;

- (int)StringAsArrival:(id)arg1;
- (int)StringAsDeparture:(id)arg1;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (id)arrivalAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)departureAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)ttlUiNotificationShownAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
