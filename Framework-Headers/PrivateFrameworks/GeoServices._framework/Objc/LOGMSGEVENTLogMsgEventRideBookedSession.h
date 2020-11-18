//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying>
{
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
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
        unsigned int statusIssue:1;
        unsigned int bookedUsingMaps:1;
        unsigned int cancelled:1;
        unsigned int contactedDriver:1;
        unsigned int invalidVehicleLocation:1;
        unsigned int missingVehicleLocation:1;
        unsigned int tappedProactiveTrayItem:1;
        unsigned int viewedDetails:1;
        unsigned int viewedInProactiveTray:1;
    } _has;
}

@property (nonatomic) BOOL bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (nonatomic) BOOL contactedDriver; // @synthesize contactedDriver=_contactedDriver;
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
@property (strong, nonatomic) NSMutableArray *intentResponseFailures; // @synthesize intentResponseFailures=_intentResponseFailures;
@property (nonatomic) BOOL invalidVehicleLocation; // @synthesize invalidVehicleLocation=_invalidVehicleLocation;
@property (nonatomic) BOOL missingVehicleLocation; // @synthesize missingVehicleLocation=_missingVehicleLocation;
@property (strong, nonatomic) NSString *rideAppId; // @synthesize rideAppId=_rideAppId;
@property (strong, nonatomic) NSString *rideAppVersion; // @synthesize rideAppVersion=_rideAppVersion;
@property (strong, nonatomic) NSString *rideBookedSessionId; // @synthesize rideBookedSessionId=_rideBookedSessionId;
@property (nonatomic) int statusIssue; // @synthesize statusIssue=_statusIssue;
@property (nonatomic) BOOL tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetails; // @synthesize viewedDetails=_viewedDetails;
@property (nonatomic) BOOL viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;

+ (Class)intentResponseFailureType;
- (void).cxx_destruct;
- (int)StringAsStatusIssue:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

