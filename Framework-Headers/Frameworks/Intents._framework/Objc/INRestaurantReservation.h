//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INReservation.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding>
{
    INDateComponentsRange *_reservationDuration;
    NSNumber *_partySize;
    CLPlacemark *_restaurantLocation;
}

@property (readonly, copy, nonatomic) NSNumber *partySize; // @synthesize partySize=_partySize;
@property (readonly, copy, nonatomic) INDateComponentsRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
@property (readonly, copy, nonatomic) CLPlacemark *restaurantLocation; // @synthesize restaurantLocation=_restaurantLocation;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservationDuration:(id)arg8 partySize:(id)arg9 restaurantLocation:(id)arg10;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9;
- (BOOL)isEqual:(id)arg1;

@end

