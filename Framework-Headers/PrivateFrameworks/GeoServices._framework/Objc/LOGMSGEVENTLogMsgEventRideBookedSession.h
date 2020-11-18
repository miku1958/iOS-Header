//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusIssue;
    BOOL _bookedUsingMaps;
    BOOL _cancelled;
    BOOL _contactedDriver;
    BOOL _invalidVehicleLocation;
    BOOL _missingVehicleLocation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetails;
    BOOL _viewedInProactiveTray;
    struct {
        unsigned int has_statusIssue:1;
        unsigned int has_bookedUsingMaps:1;
        unsigned int has_cancelled:1;
        unsigned int has_contactedDriver:1;
        unsigned int has_invalidVehicleLocation:1;
        unsigned int has_missingVehicleLocation:1;
        unsigned int has_tappedProactiveTrayItem:1;
        unsigned int has_viewedDetails:1;
        unsigned int has_viewedInProactiveTray:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookedSessionId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL contactedDriver;
@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasContactedDriver;
@property (nonatomic) BOOL hasInvalidVehicleLocation;
@property (nonatomic) BOOL hasMissingVehicleLocation;
@property (readonly, nonatomic) BOOL hasRideAppId;
@property (readonly, nonatomic) BOOL hasRideAppVersion;
@property (readonly, nonatomic) BOOL hasRideBookedSessionId;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetails;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (strong, nonatomic) NSMutableArray *intentResponseFailures;
@property (nonatomic) BOOL invalidVehicleLocation;
@property (nonatomic) BOOL missingVehicleLocation;
@property (strong, nonatomic) NSString *rideAppId;
@property (strong, nonatomic) NSString *rideAppVersion;
@property (strong, nonatomic) NSString *rideBookedSessionId;
@property (nonatomic) int statusIssue;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetails;
@property (nonatomic) BOOL viewedInProactiveTray;

+ (Class)intentResponseFailureType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsStatusIssue:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
