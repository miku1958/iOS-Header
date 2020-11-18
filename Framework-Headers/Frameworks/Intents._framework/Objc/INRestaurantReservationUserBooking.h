//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INRestaurantReservationBooking.h>

#import <Intents/INRestaurantReservationUserBookingExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying>
{
    INRestaurantGuest *_guest;
    NSString *_advisementText;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    unsigned long long _status;
    NSDate *_dateStatusModified;
}

@property (copy, nonatomic) NSString *advisementText; // @synthesize advisementText=_advisementText;
@property (copy, nonatomic) NSDate *dateStatusModified; // @synthesize dateStatusModified=_dateStatusModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText; // @synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer; // @synthesize selectedOffer=_selectedOffer;
@property (nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 status:(unsigned long long)arg6 dateStatusModified:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

