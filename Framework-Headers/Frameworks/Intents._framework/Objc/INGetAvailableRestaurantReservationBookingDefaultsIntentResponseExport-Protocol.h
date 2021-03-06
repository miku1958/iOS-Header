//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, NSDate, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject, JSExport>

@property (readonly, copy, nonatomic) NSDate *defaultBookingDate;
@property (readonly, nonatomic) unsigned long long defaultPartySize;
@property (copy, nonatomic) NSNumber *maximumPartySize;
@property (copy, nonatomic) NSNumber *minimumPartySize;
@property (copy, nonatomic) INImage *providerImage;

- (id)init;
@end

