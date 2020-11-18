//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventCategorys:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performers:1;
        unsigned int wrote_poiIds:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_expectedAttendance:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *eventCategorys;
@property (strong, nonatomic) NSMutableArray *eventDateTimes;
@property (strong, nonatomic) GEOPDMapsIdentifier *eventId;
@property (nonatomic) int expectedAttendance;
@property (readonly, nonatomic) BOOL hasEventId;
@property (nonatomic) BOOL hasExpectedAttendance;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (strong, nonatomic) GEOLocalizedString *name;
@property (strong, nonatomic) NSMutableArray *performers;
@property (strong, nonatomic) NSMutableArray *poiIds;
@property (strong, nonatomic) GEOTimezone *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)eventCategoryType;
+ (Class)eventDateTimeType;
+ (BOOL)isValid:(id)arg1;
+ (Class)performerType;
+ (Class)poiIdType;
- (void).cxx_destruct;
- (void)_addNoFlagsEventCategory:(id)arg1;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (void)_addNoFlagsPerformer:(id)arg1;
- (void)_addNoFlagsPoiId:(id)arg1;
- (void)_readEventCategorys;
- (void)_readEventDateTimes;
- (void)_readEventId;
- (void)_readName;
- (void)_readPerformers;
- (void)_readPoiIds;
- (void)_readTimezone;
- (void)addEventCategory:(id)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)addPerformer:(id)arg1;
- (void)addPoiId:(id)arg1;
- (void)clearEventCategorys;
- (void)clearEventDateTimes;
- (void)clearPerformers;
- (void)clearPoiIds;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCategorysCount;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDateTimesCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)performerAtIndex:(unsigned long long)arg1;
- (unsigned long long)performersCount;
- (id)poiIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)poiIdsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
