//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MetalKit/CALayerDelegate-Protocol.h>
#import <MetalKit/NSCoding-Protocol.h>

@class MTLRenderPassDescriptor, NSString;
@protocol MTKViewDelegate, MTLDevice, MTLDrawable, MTLTexture;

@interface MTKView : UIView <NSCoding, CALayerDelegate>
{
    BOOL _framebufferOnly;
    BOOL _presentsWithTransaction;
    BOOL _enableSetNeedsDisplay;
    BOOL _autoResizeDrawable;
    BOOL _paused;
    unsigned int _clearStencil;
    id<MTKViewDelegate> _delegate;
    id<MTLDevice> _device;
    id<MTLDrawable> _currentDrawable;
    unsigned long long _colorPixelFormat;
    unsigned long long _depthStencilPixelFormat;
    unsigned long long _sampleCount;
    double _clearDepth;
    id<MTLTexture> _depthStencilTexture;
    id<MTLTexture> _multisampleColorTexture;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    long long _preferredFramesPerSecond;
    struct CGColorSpace *_colorspace;
    struct CGSize _drawableSize;
    CDStruct_3ead2808 _clearColor;
}

@property (nonatomic) BOOL autoResizeDrawable; // @synthesize autoResizeDrawable=_autoResizeDrawable;
@property (nonatomic) CDStruct_3ead2808 clearColor; // @synthesize clearColor=_clearColor;
@property (nonatomic) double clearDepth; // @synthesize clearDepth=_clearDepth;
@property (nonatomic) unsigned int clearStencil; // @synthesize clearStencil=_clearStencil;
@property (nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
@property (nonatomic) struct CGColorSpace *colorspace; // @synthesize colorspace=_colorspace;
@property (readonly, nonatomic) id<MTLDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor; // @synthesize currentRenderPassDescriptor=_currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTKViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long depthStencilPixelFormat; // @synthesize depthStencilPixelFormat=_depthStencilPixelFormat;
@property (readonly, nonatomic) id<MTLTexture> depthStencilTexture; // @synthesize depthStencilTexture=_depthStencilTexture;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<MTLDevice> device; // @synthesize device=_device;
@property (nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property (nonatomic) BOOL enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay;
@property (nonatomic) BOOL framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<MTLTexture> multisampleColorTexture; // @synthesize multisampleColorTexture=_multisampleColorTexture;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property (nonatomic) BOOL presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
@property (nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property (readonly) Class superclass;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)draw;
- (void)encodeWithCoder:(id)arg1;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)releaseDrawables;

@end
