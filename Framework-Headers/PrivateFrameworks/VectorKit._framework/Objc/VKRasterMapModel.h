//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import <VectorKit/VKMapLayer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned long long _mapLayer;
    BOOL _rasterViewer;
    BOOL _showingNoDataPlaceholders;
    shared_ptr_b80d91ee _styleQuery;
    shared_ptr_479d1306 _gglClutTexture;
    struct Pos2DUVMesh *_unitMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _clutRenderState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mapLayerPosition;
@property (nonatomic) BOOL rasterViewer; // @synthesize rasterViewer=_rasterViewer;
@property (readonly, getter=isShowingNoDataPlaceholders) BOOL showingNoDataPlaceholders; // @synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders;
@property (readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 roadAlpha:(float)arg4;
- (void)gglSetupClutTextureForLevelOfDetail:(unsigned long long)arg1 scale:(double)arg2;
- (id)init;
- (void)reset;
- (BOOL)shouldEnableCLUT;
- (shared_ptr_f06afc6c)styleManager;
- (void)stylesheetDidChange;

@end
