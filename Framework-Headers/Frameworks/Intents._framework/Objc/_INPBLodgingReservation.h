//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLodgingReservation-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@interface _INPBLodgingReservation : PBCodable <_INPBLodgingReservation, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBLocation *_lodgingBusinessLocation;
    _INPBInteger *_numberOfAdults;
    _INPBInteger *_numberOfChildren;
    _INPBReservation *_reservation;
    _INPBDateTimeRange *_reservationDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLodgingBusinessLocation;
@property (readonly, nonatomic) BOOL hasNumberOfAdults;
@property (readonly, nonatomic) BOOL hasNumberOfChildren;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservationDuration;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBLocation *lodgingBusinessLocation; // @synthesize lodgingBusinessLocation=_lodgingBusinessLocation;
@property (strong, nonatomic) _INPBInteger *numberOfAdults; // @synthesize numberOfAdults=_numberOfAdults;
@property (strong, nonatomic) _INPBInteger *numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property (strong, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
@property (strong, nonatomic) _INPBDateTimeRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

