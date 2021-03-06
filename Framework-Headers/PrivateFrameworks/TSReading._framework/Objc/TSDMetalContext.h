//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, NSMutableSet, TSDMetalShader;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder;

@interface TSDMetalContext : NSObject
{
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _currentBuffer;
    id<MTLCommandQueue> _commandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    MTLRenderPassDescriptor *_passDescriptor;
    TSDMetalShader *_shader;
    id<MTLRenderCommandEncoder> _renderEncoder;
    struct CGColorSpace *_destinationColorSpace;
    NSMutableSet *_retainedObjects;
    struct CGSize _layerSize;
    struct {
        double currentTime;
        double displayLinkPresentationTime;
        double elapsedShowTime;
    } _timingInfo;
}

@property (weak, nonatomic) id<MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property (weak, nonatomic) id<MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property (nonatomic) unsigned long long currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property (nonatomic) struct CGColorSpace *destinationColorSpace; // @synthesize destinationColorSpace=_destinationColorSpace;
@property (weak, nonatomic) id<MTLDevice> device; // @synthesize device=_device;
@property (nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property (weak, nonatomic) MTLRenderPassDescriptor *passDescriptor; // @synthesize passDescriptor=_passDescriptor;
@property (nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property (weak, nonatomic) id<MTLRenderCommandEncoder> renderEncoder; // @synthesize renderEncoder=_renderEncoder;
@property (strong, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
@property (weak, nonatomic) TSDMetalShader *shader; // @synthesize shader=_shader;
@property (nonatomic) CDStruct_39925896 timingInfo; // @synthesize timingInfo=_timingInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)retainObject:(id)arg1;

@end

