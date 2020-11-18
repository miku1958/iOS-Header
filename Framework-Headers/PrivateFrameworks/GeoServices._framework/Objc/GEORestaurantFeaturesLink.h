//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOPDRestaurantReservationLink, NSArray, NSMapTable;

__attribute__((visibility("hidden")))
@interface GEORestaurantFeaturesLink : NSObject
{
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) NSArray *featureProviders;
@property (readonly, nonatomic) NSArray *featureTypes;
@property (readonly, nonatomic) BOOL hasFeatures;
@property (strong, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink; // @synthesize restaurantReservationLink=_restaurantReservationLink;

- (id)applicationsForVendorID:(id)arg1;
- (void)dealloc;
- (id)displayNameForVendorID:(id)arg1;
- (unsigned long long)extensionModeForVendorID:(id)arg1;
- (id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2;

@end

