//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGGraphPlacesResolver : NSObject
{
}

+ (id)_businessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 inCache:(id)arg2;
+ (id)_clusteredRegionsFromFeeder:(id)arg1;
+ (id)poiStringFromSpatialLookupCategory:(long long)arg1;
+ (id)resolvePlacesForMomentNode:(id)arg1 feeder:(id)arg2;
+ (id)resolvedPlaceForRegion:(id)arg1 withPlaceItems:(id)arg2;

@end
