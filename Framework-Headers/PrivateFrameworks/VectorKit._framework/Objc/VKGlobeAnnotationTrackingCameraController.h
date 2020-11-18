//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKAnnotationTrackingCameraController.h>

__attribute__((visibility("hidden")))
@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
{
    struct GlobeView {
        CDUnknownFunctionPointerType *;
        struct AnchorManagerPrivate *;
        struct Scene *;
        struct Context *;
        struct DtmCacheNode *;
        struct DtmRequestManager *;
        struct FreezeViewNode *;
        struct Projection;
        struct FrameLatLon;
        BOOL;
        basic_string_805fe43b;
        basic_string_805fe43b;
        struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound>>;
        struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey>>;
        BOOL;
        unsigned int;
        unsigned int;
        unsigned int;
        unsigned int;
        struct VKClassicGlobeCanvas *;
        BOOL;
        BOOL;
        int;
        struct AnimationManager;
        struct Timer;
        double;
        BOOL;
        double;
        double;
        double;
        struct FrameLatLon;
        struct C3mmRequestManager *;
        struct RenderableGroup *;
        unsigned int;
        double;
        BOOL;
        BOOL;
        struct LabelDataManagerPrivate *;
        BOOL;
        BOOL;
        BOOL;
        BOOL;
        struct RouteLineManager *;
        struct GlobeCleanupLoader *;
        struct CompleteGlobeTileSetCullingGraph *;
        struct CompleteGlobeTileSetLoader *;
        struct TileSetNode *;
        struct GlobeTileRenderManager *;
        struct CullingNode *;
        struct EarthAdjustedViewNode *;
        struct UserViewNode *;
        struct View *;
        struct BasicViewNode *;
        struct GlobeMainViewNode *;
        struct C3bRequestManager *;
        float;
        BOOL;
        struct shared_ptr<bool>;
        struct HeightRequestManager *;
        struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>>>>;
        struct Mutex;
        struct shared_ptr<altitude::Stylesheet>;
        struct FlyoverTour *;
        BOOL;
        struct TriggerManager *;
        struct Viewport;
        struct AnimationReferenceTimer;
        BOOL;
        struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *>>;
        struct GeoServicesLoader *;
        struct ManifestManager *;
        struct GlobeDispatch *;
    } *_globeView;
    struct Anchor {
        CDUnknownFunctionPointerType *;
    } *_anchor;
    CDStruct_071ac149 _currentAnimationStartCoordinate;
    CDStruct_2c43369c _currentAnimationPresentationStartCoordinate;
    CDStruct_2c43369c _currentAnimationEndCoordinate;
}

@property (nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;

- (Matrix_443f5d51)_centerCursor;
- (void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3;
- (void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)init;

@end

