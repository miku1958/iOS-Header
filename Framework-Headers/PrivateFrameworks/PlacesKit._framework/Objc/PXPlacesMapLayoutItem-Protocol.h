//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSOrderedSet;
@protocol PXPlacesMapLayoutItem;

@protocol PXPlacesMapLayoutItem <NSObject>

@property struct CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) NSOrderedSet *geotaggables;

- (BOOL)isEqualToLayoutItem:(id<PXPlacesMapLayoutItem>)arg1;
@end

