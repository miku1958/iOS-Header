//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReservation-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBTimestamp, _INPBURLValue;

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int reservationStatus:1;
    } _has;
    int _reservationStatus;
    _INPBURLValue *_url;
    NSArray *_actions;
    _INPBTimestamp *_bookingTime;
    _INPBDataString *_itemReference;
    NSString *_reservationHolderName;
    NSString *_reservationNumber;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (strong, nonatomic) _INPBTimestamp *bookingTime; // @synthesize bookingTime=_bookingTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBookingTime;
@property (readonly, nonatomic) BOOL hasItemReference;
@property (readonly, nonatomic) BOOL hasReservationHolderName;
@property (readonly, nonatomic) BOOL hasReservationNumber;
@property (nonatomic) BOOL hasReservationStatus;
@property (readonly, nonatomic) BOOL hasUrl;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBDataString *itemReference; // @synthesize itemReference=_itemReference;
@property (copy, nonatomic) NSString *reservationHolderName; // @synthesize reservationHolderName=_reservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber; // @synthesize reservationNumber=_reservationNumber;
@property (nonatomic) int reservationStatus; // @synthesize reservationStatus=_reservationStatus;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBURLValue *url; // @synthesize url=_url;

+ (Class)actionsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsReservationStatus:(id)arg1;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(id)arg1;
- (void)clearActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reservationStatusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
