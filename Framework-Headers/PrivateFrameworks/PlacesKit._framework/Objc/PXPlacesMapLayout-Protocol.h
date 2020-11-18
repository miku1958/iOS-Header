//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@class PXPlacesMapViewPort;
@protocol PXPlacesGeotaggable, PXPlacesGeotaggedItemDataSource, PXPlacesGeotaggedItemDataSourceChange, PXPlacesMapLayoutItem, PXPlacesMapLayoutResult;

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>

@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;

- (id<PXPlacesMapLayoutResult>)layoutForViewPort:(PXPlacesMapViewPort *)arg1 andDataSourceChange:(id<PXPlacesGeotaggedItemDataSourceChange>)arg2;
- (id<PXPlacesMapLayoutItem>)layoutItemForGeotaggable:(id<PXPlacesGeotaggable>)arg1;
@end

