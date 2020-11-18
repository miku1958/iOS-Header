//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import <VectorKit/VKStyleManagerObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    int _sourceTileZtoStencilOffset;
    int _extraStencil;
    struct ClearItem *_clearItem;
    struct map<gss::StylesheetQuery<gss::PropertyID>*, std::__1::unique_ptr<md::RoadStyling, std::__1::default_delete<md::RoadStyling>>, std::__1::less<gss::StylesheetQuery<gss::PropertyID>*>, std::__1::allocator<std::__1::pair<gss::StylesheetQuery<gss::PropertyID>*const, std::__1::unique_ptr<md::RoadStyling, std::__1::default_delete<md::RoadStyling>>>>> _activeRoadStyles;
    struct map<gss::StylesheetQuery<gss::PropertyID>*, std::__1::unique_ptr<md::TrafficSpeedStyling, std::__1::default_delete<md::TrafficSpeedStyling>>, std::__1::less<gss::StylesheetQuery<gss::PropertyID>*>, std::__1::allocator<std::__1::pair<gss::StylesheetQuery<gss::PropertyID>*const, std::__1::unique_ptr<md::TrafficSpeedStyling, std::__1::default_delete<md::TrafficSpeedStyling>>>>> _activeTrafficStyles;
    struct unique_ptr<md::RoadSharedResources, std::__1::default_delete<md::RoadSharedResources>> _roadSharedResources;
    struct unique_ptr<md::PatternedSharedResources, std::__1::default_delete<md::PatternedSharedResources>> _patternedSharedResources;
    struct set<gss::StylesheetQuery<gss::PropertyID>*, std::__1::less<gss::StylesheetQuery<gss::PropertyID>*>, std::__1::allocator<gss::StylesheetQuery<gss::PropertyID>*>> _frameStyles;
    struct set<gss::StylesheetQuery<gss::PropertyID>*, std::__1::less<gss::StylesheetQuery<gss::PropertyID>*>, std::__1::allocator<gss::StylesheetQuery<gss::PropertyID>*>> _frameInFlightStyles;
    struct set<gss::StylesheetQuery<gss::PropertyID>*, std::__1::less<gss::StylesheetQuery<gss::PropertyID>*>, std::__1::allocator<gss::StylesheetQuery<gss::PropertyID>*>> _frameOutdatedStyles;
    BOOL _trafficEnabled;
    double _layoutTimestamp;
    unsigned long long _mapLayerPosition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double layoutTimestamp; // @synthesize layoutTimestamp=_layoutTimestamp;
@property (nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
@property (readonly, nonatomic) shared_ptr_a3c46825 styleManager;
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assignRoadStyling:(struct RoadLayer *)arg1;
- (void)assignTrafficStyling:(id)arg1 withContext:(struct RoadLayoutContext *)arg2;
- (unsigned char)commandBufferId;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (shared_ptr_430519ce)featureMarkerInTile:(id)arg1 atPoint:(Matrix_6e1d3589 *)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (BOOL)supportsTrafficCasing;
- (void)syncActiveStyles;
- (BOOL)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg1;
- (void)willStopDrawingTiles:(id)arg1;

@end

