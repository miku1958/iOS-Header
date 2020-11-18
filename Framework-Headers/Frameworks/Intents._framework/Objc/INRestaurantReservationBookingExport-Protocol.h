//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INRestaurant, NSArray, NSDate, NSString;

@protocol INRestaurantReservationBookingExport <NSObject, JSExport>

@property (nonatomic, getter=isBookingAvailable) BOOL bookingAvailable;
@property (copy, nonatomic) NSDate *bookingDate;
@property (copy, nonatomic) NSString *bookingDescription;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (copy, nonatomic) NSArray *offers;
@property (nonatomic) unsigned long long partySize;
@property (nonatomic) BOOL requiresEmailAddress;
@property (nonatomic) BOOL requiresManualRequest;
@property (nonatomic) BOOL requiresName;
@property (nonatomic) BOOL requiresPhoneNumber;
@property (copy, nonatomic) INRestaurant *restaurant;

- (id)init;
@end
