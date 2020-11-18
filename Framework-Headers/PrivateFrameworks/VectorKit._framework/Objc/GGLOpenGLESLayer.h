//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

#import <VectorKit/GGLLayer-Protocol.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface GGLOpenGLESLayer : CAEAGLLayer <GGLLayer>
{
    id<GGLLayerDelegate> _delegate;
    shared_ptr_2063da68 _device;
    struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext>> _context;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _texture;
    struct CGSize _backingSize;
}

@property (readonly) int backingFormat;
@property (readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id<GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
@property (readonly, nonatomic) struct Texture *texture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_createLayerRenderBuffer;
- (void)_deleteLayerRenderBuffer;
- (void)dealloc;
- (void)didEnterBackground;
- (id)initWithDevice:(shared_ptr_2063da68)arg1;
- (void)layoutSublayers;
- (void)onTimerFired:(double)arg1;
- (void)setContentsScale:(double)arg1;

@end

