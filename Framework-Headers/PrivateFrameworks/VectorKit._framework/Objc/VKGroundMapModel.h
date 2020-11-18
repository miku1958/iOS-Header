//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

__attribute__((visibility("hidden")))
@interface VKGroundMapModel : VKVectorMapModel
{
    shared_ptr_696716c4 _groundCoverViewConstantData;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::PolygonFill::Fill>> _groundCoverPolygonConstantData;
    struct shared_ptr<ggl::PolygonFill::MeshPipelineState> _groundCoverPipelineState;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> _groundCoverMesh;
    struct unique_ptr<ggl::PolygonFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonFill::MeshPipelineSetup>> _groundCoverPipelineSetup;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _groundCoverRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _groundCoverStencilRenderState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _groundCoverRenderItem;
    int _groundTileZtoStencilOffset;
    struct ClearItem *_clearItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generateGroundCoverRenderItemsForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (unsigned long long)mapLayerPosition;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)stylesheetDidChange;

@end

