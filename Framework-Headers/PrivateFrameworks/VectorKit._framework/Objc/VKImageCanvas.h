//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, VKScreenCameraController;
@protocol MDRenderTarget, VKImageCanvasDelegate;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    VKScreenCameraController *_cameraController;
    shared_ptr_e963992e _taskContext;
    long long _mapType;
    struct DisplayStyle _mapDisplayStyle;
    unsigned char _emphasis;
    id<MDRenderTarget> _displayTarget;
    Renderer_3c643a9a *_mapRenderer;
    struct LayoutContext *_layoutContext;
    id<VKImageCanvasDelegate> _delegate;
    struct RunLoopController *_runLoopController;
}

@property (nonatomic) id<VKImageCanvasDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned char emphasis; // @synthesize emphasis=_emphasis;
@property (nonatomic) struct DisplayStyle mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) shared_ptr_e963992e taskContext;
@property (readonly, nonatomic) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (void)didLayout;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id)initWithMapEngine:(struct MapEngine *)arg1;
- (void)loadScene;
- (void)renderSceneWithEngine:(struct MapEngine *)arg1 completion:(function_30b369b8)arg2;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)update;

@end

