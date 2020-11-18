//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapRenderer-Protocol.h>

@class MKOverlayRenderer, PXPlacesMapView;
@protocol MKOverlay, PXPlacesGeotaggedItemDataSource, PXPlacesMapLayoutItem;

@protocol PXPlacesMapOverlayRenderer <PXPlacesMapRenderer>

@property (weak) id<PXPlacesGeotaggedItemDataSource> dataSource;

- (id<MKOverlay>)overlayForLayoutItem:(id<PXPlacesMapLayoutItem>)arg1;
- (MKOverlayRenderer *)rendererForOverlay:(id<MKOverlay>)arg1 andMapView:(PXPlacesMapView *)arg2;
@end
