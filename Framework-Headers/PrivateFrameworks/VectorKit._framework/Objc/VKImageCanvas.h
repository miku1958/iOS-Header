//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKAnimationRunner-Protocol.h>
#import <VectorKit/VKWorldDelegate-Protocol.h>

@class GEOMapRegion, GGLImageCanvas, NSString, VKCamera, VKDispatch, VKScreenCameraController, VKTimer, VKWorld;
@protocol VKImageCanvasDelegate;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject <VKWorldDelegate, VKAnimationRunner>
{
    VKWorld *_world;
    VKCamera *_camera;
    VKScreenCameraController *_cameraController;
    VKDispatch *_dispatch;
    long long _mapType;
    struct DisplayStyle _mapDisplayStyle;
    GGLImageCanvas *_displayTarget;
    struct unique_ptr<md::RenderTree, std::__1::default_delete<md::RenderTree>> _mapScene;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue>> _renderQueue;
    struct unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext>> _layoutContext;
    id<VKImageCanvasDelegate> _delegate;
    VKTimer *_layoutTimer;
    BOOL _shouldDrawWhileLoading;
    double _frameTimestamp;
    BOOL _needsLayout;
}

@property (readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<VKImageCanvasDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct DisplayStyle mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property (readonly, nonatomic) double pitch;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VKWorld *world; // @synthesize world=_world;
@property (readonly, nonatomic) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_spinScene:(id)arg1;
- (void)_spinSceneWillRender:(BOOL)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)cancelLoad;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (void)didLayout;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id)initWithTarget:(id)arg1 device:(struct Device *)arg2 homeQueue:(id)arg3;
- (void)loadScene;
- (void)renderSceneWithRenderer:(struct Renderer *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runAnimation:(id)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setSize:(struct CGSize)arg1;
- (void)update;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end

