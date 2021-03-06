//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDeparture-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSDate, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    GEOFormattedString *_realTimeStatus;
    unsigned long long _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _isCanceled;
    struct {
        unsigned int has_absDepartureTime:1;
        unsigned int has_absLiveDepartureTime:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_isCanceled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_realTimeStatus:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) double absDepartureTime;
@property (nonatomic) double absLiveDepartureTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAbsDepartureTime;
@property (nonatomic) BOOL hasAbsLiveDepartureTime;
@property (nonatomic) BOOL hasIsCanceled;
@property (readonly, nonatomic) BOOL hasRealTimeStatus;
@property (nonatomic) BOOL hasReferenceTripId;
@property (readonly, nonatomic) BOOL hasVehicleNumber;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isCanceled;
@property (readonly, nonatomic) BOOL isPastDeparture;
@property (readonly, nonatomic) NSDate *liveDepartureDate;
@property (readonly, nonatomic) long long liveStatus;
@property (readonly, nonatomic) id<GEOServerFormattedString> liveStatusString;
@property (strong, nonatomic) GEOFormattedString *realTimeStatus;
@property (nonatomic) unsigned long long referenceTripId;
@property (readonly, nonatomic) NSDate *scheduledDepartureDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long tripIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) NSString *vehicleIdentifier;
@property (strong, nonatomic) NSString *vehicleNumber;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

