//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBusReservation-Protocol.h>

@class NSString, _INPBBusTrip, _INPBReservation, _INPBSeat;

@interface _INPBBusReservation : PBCodable <_INPBBusReservation, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBBusTrip *_busTrip;
    _INPBReservation *_reservation;
    _INPBSeat *_reservedSeat;
}

@property (strong, nonatomic) _INPBBusTrip *busTrip; // @synthesize busTrip=_busTrip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBusTrip;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservedSeat;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
@property (strong, nonatomic) _INPBSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
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

