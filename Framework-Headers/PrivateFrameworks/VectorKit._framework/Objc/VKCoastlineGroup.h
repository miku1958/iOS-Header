//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKCoastlineGroup : NSObject
{
    shared_ptr_c5d816ee _styleQuery;
    unsigned int _tilePointSize;
    struct unique_ptr<ggl::MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh>>> _coastlineMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh>>> _glowMeshVendor;
}

@property (readonly, nonatomic) const MeshVendor_303b8b6a *coastlineMeshVendor;
@property (readonly, nonatomic) const MeshVendor_43d71dca *glowMeshVendor;
@property (readonly, nonatomic) shared_ptr_c5d816ee styleQuery; // @synthesize styleQuery=_styleQuery;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoastlineFeature:(CDStruct_6ac9d495 *)arg1;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee)arg1 tilePointSize:(unsigned int)arg2;

@end
