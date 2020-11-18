//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder;

@interface RBMetalRenderState : NSObject
{
    unsigned int _flags;
    int _blendMode;
    float _alpha;
    id<MTLCommandBuffer> _commandBuffer;
    MTLRenderPassDescriptor *_descriptor;
    unsigned long long _formatKey;
    id<MTLRenderCommandEncoder> _encoder;
    struct CGSize _size;
    CDStruct_5f3a0cd7 _bounds;
    struct CGAffineTransform _CTM;
}

@property (nonatomic) struct CGAffineTransform CTM; // @synthesize CTM=_CTM;
@property (nonatomic) float alpha; // @synthesize alpha=_alpha;
@property (nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property (nonatomic) CDStruct_5f3a0cd7 bounds; // @synthesize bounds=_bounds;
@property (strong, nonatomic) id<MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property (strong, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (strong, nonatomic) id<MTLRenderCommandEncoder> encoder; // @synthesize encoder=_encoder;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (nonatomic) unsigned long long formatKey; // @synthesize formatKey=_formatKey;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;

- (void)dealloc;

@end
