//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayout-Protocol.h>

@class NSString;
@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout>
{
    id<PXPlacesGeotaggedItemDataSource> _dataSource;
    id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;
- (void)reset;

@end

