//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@protocol INRideOptionExport <NSObject, JSExport>

@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) INPriceRange *priceRange;
@property (copy, nonatomic) NSString *specialPricing;
@property (copy, nonatomic) INImage *specialPricingBadgeImage;
@property (strong, nonatomic) NSUserActivity *userActivityForBookingInApplication;
@property (copy, nonatomic) NSNumber *usesMeteredFare;

- (id)init;
@end

