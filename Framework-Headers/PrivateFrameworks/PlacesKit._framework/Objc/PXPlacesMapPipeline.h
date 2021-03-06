//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapPipelineComponentProvider-Protocol.h>

@class NSString, PXPlacesImageCache;
@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider>
{
    id<PXPlacesMapLayout> _layout;
    id<PXPlacesMapUpdatePlan> _updatePlan;
    id<PXPlacesMapRenderer> _renderer;
    id<PXPlacesMapSelectionHandler> _selectionHandler;
    PXPlacesImageCache *_imageCache;
}

@property (readonly, nonatomic) id<PXPlacesGeotaggedItemDataSource> dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) PXPlacesImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property (readonly) id<PXPlacesMapLayout> layout; // @synthesize layout=_layout;
@property (readonly) id<PXPlacesMapRenderer> renderer; // @synthesize renderer=_renderer;
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property (readonly) Class superclass;
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan; // @synthesize updatePlan=_updatePlan;

- (void).cxx_destruct;
- (void)cancel;
- (id)executeRemoval;
- (id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4;

@end

