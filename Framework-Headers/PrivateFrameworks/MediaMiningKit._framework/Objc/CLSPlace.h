//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSPrimitive.h>

@class CLCircularRegion, CLSBusinessItem, CLSLitePlacemark, NSArray, NSString;

@interface CLSPlace : CLSPrimitive
{
    NSString *_name;
    CLCircularRegion *_region;
    CLSLitePlacemark *_placemark;
    NSArray *_categories;
    CLSBusinessItem *_businessItem;
}

@property (readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
@property (readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;

+ (id)placeWithBusinessItem:(id)arg1;
+ (id)placeWithLocation:(id)arg1;
+ (id)placeWithPlacemark:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;

@end
