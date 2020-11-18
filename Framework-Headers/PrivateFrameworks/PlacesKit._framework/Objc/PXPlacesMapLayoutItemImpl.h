//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayoutItem-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>
{
    NSMutableOrderedSet *_layoutGeotaggables;
    struct CLLocationCoordinate2D _coordinate;
}

@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSOrderedSet *geotaggables;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableOrderedSet *layoutGeotaggables; // @synthesize layoutGeotaggables=_layoutGeotaggables;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addGeotaggable:(id)arg1;
- (void)addGeotaggables:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutItem:(id)arg1;

@end
