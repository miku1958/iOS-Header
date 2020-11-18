//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideOptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSDate *_estimatedPickupDate;
    INPriceRange *_priceRange;
    NSNumber *_usesMeteredFare;
    NSString *_disclaimerMessage;
    NSArray *_availablePartySizeOptions;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_specialPricing;
    INImage *_specialPricingBadgeImage;
    NSArray *_fareLineItems;
    NSUserActivity *_userActivityForBookingInApplication;
}

@property (copy, nonatomic) NSArray *availablePartySizeOptions; // @synthesize availablePartySizeOptions=_availablePartySizeOptions;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt; // @synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disclaimerMessage; // @synthesize disclaimerMessage=_disclaimerMessage;
@property (copy, nonatomic) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems; // @synthesize fareLineItems=_fareLineItems;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property (copy, nonatomic) NSString *specialPricing; // @synthesize specialPricing=_specialPricing;
@property (copy, nonatomic) INImage *specialPricingBadgeImage; // @synthesize specialPricingBadgeImage=_specialPricingBadgeImage;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUserActivity *userActivityForBookingInApplication; // @synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication;
@property (copy, nonatomic) NSNumber *usesMeteredFare; // @synthesize usesMeteredFare=_usesMeteredFare;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

