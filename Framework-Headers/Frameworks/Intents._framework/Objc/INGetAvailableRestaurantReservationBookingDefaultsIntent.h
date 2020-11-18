//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INGetAvailableRestaurantReservationBookingDefaultsIntentExport-Protocol.h>

@class INRestaurant, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport>
{
    INRestaurant *_restaurant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property (readonly) Class superclass;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

