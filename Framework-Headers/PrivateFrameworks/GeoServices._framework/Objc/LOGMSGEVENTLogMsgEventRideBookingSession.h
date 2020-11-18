//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying>
{
    double _distanceToPickupInMeters;
    double _durationOfSessionInSeconds;
    long long _timestamp;
    GEOLatLng *_destinationBlurred;
    int _endState;
    int _endView;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    unsigned int _numberOfAvailableExtensions;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    int _statusIssue;
    BOOL _comparedRideOptions;
    BOOL _exploredOtherOptions;
    BOOL _installedApp;
    BOOL _movedPickupLocation;
    BOOL _paymentIsApplePay;
    BOOL _showedSurgePricingAlert;
    BOOL _switchedApp;
    BOOL _unavailable;
    struct {
        unsigned int distanceToPickupInMeters:1;
        unsigned int durationOfSessionInSeconds:1;
        unsigned int timestamp:1;
        unsigned int endState:1;
        unsigned int endView:1;
        unsigned int numberOfAvailableExtensions:1;
        unsigned int statusIssue:1;
        unsigned int comparedRideOptions:1;
        unsigned int exploredOtherOptions:1;
        unsigned int installedApp:1;
        unsigned int movedPickupLocation:1;
        unsigned int paymentIsApplePay:1;
        unsigned int showedSurgePricingAlert:1;
        unsigned int switchedApp:1;
        unsigned int unavailable:1;
    } _has;
}

@property (nonatomic) BOOL comparedRideOptions; // @synthesize comparedRideOptions=_comparedRideOptions;
@property (strong, nonatomic) GEOLatLng *destinationBlurred; // @synthesize destinationBlurred=_destinationBlurred;
@property (nonatomic) double distanceToPickupInMeters; // @synthesize distanceToPickupInMeters=_distanceToPickupInMeters;
@property (nonatomic) double durationOfSessionInSeconds; // @synthesize durationOfSessionInSeconds=_durationOfSessionInSeconds;
@property (nonatomic) int endState; // @synthesize endState=_endState;
@property (nonatomic) int endView; // @synthesize endView=_endView;
@property (strong, nonatomic) NSMutableArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property (nonatomic) BOOL exploredOtherOptions; // @synthesize exploredOtherOptions=_exploredOtherOptions;
@property (nonatomic) BOOL hasComparedRideOptions;
@property (readonly, nonatomic) BOOL hasDestinationBlurred;
@property (nonatomic) BOOL hasDistanceToPickupInMeters;
@property (nonatomic) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasEndView;
@property (nonatomic) BOOL hasExploredOtherOptions;
@property (nonatomic) BOOL hasInstalledApp;
@property (nonatomic) BOOL hasMovedPickupLocation;
@property (nonatomic) BOOL hasNumberOfAvailableExtensions;
@property (readonly, nonatomic) BOOL hasOriginBlurred;
@property (nonatomic) BOOL hasPaymentIsApplePay;
@property (readonly, nonatomic) BOOL hasRideAppId;
@property (readonly, nonatomic) BOOL hasRideAppVersion;
@property (readonly, nonatomic) BOOL hasRideBookingSessionId;
@property (readonly, nonatomic) BOOL hasRideType;
@property (nonatomic) BOOL hasShowedSurgePricingAlert;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) BOOL hasSwitchedApp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnavailable;
@property (nonatomic) BOOL installedApp; // @synthesize installedApp=_installedApp;
@property (strong, nonatomic) NSMutableArray *intentResponseFailures; // @synthesize intentResponseFailures=_intentResponseFailures;
@property (nonatomic) BOOL movedPickupLocation; // @synthesize movedPickupLocation=_movedPickupLocation;
@property (nonatomic) unsigned int numberOfAvailableExtensions; // @synthesize numberOfAvailableExtensions=_numberOfAvailableExtensions;
@property (strong, nonatomic) GEOLatLng *originBlurred; // @synthesize originBlurred=_originBlurred;
@property (nonatomic) BOOL paymentIsApplePay; // @synthesize paymentIsApplePay=_paymentIsApplePay;
@property (strong, nonatomic) NSString *rideAppId; // @synthesize rideAppId=_rideAppId;
@property (strong, nonatomic) NSString *rideAppVersion; // @synthesize rideAppVersion=_rideAppVersion;
@property (strong, nonatomic) NSString *rideBookingSessionId; // @synthesize rideBookingSessionId=_rideBookingSessionId;
@property (strong, nonatomic) NSString *rideType; // @synthesize rideType=_rideType;
@property (nonatomic) BOOL showedSurgePricingAlert; // @synthesize showedSurgePricingAlert=_showedSurgePricingAlert;
@property (nonatomic) int statusIssue; // @synthesize statusIssue=_statusIssue;
@property (nonatomic) BOOL switchedApp; // @synthesize switchedApp=_switchedApp;
@property (nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) BOOL unavailable; // @synthesize unavailable=_unavailable;

+ (Class)errorMessageType;
+ (Class)intentResponseFailureType;
- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsEndView:(id)arg1;
- (int)StringAsStatusIssue:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearErrorMessages;
- (void)clearIntentResponseFailures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endStateAsString:(int)arg1;
- (id)endViewAsString:(int)arg1;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorMessagesCount;
- (unsigned long long)hash;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

