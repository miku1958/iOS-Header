//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLRenderCommandEncoder, TSDAnimationRandomGenerator, TSDMTLDataBuffer, TSDMTLParticleSystem;

@protocol TSDMTLParticleSystem <NSObject>

@property (readonly, nonatomic) id<TSDMTLDataBuffer> dataBuffer;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) BOOL shouldUseMetal;

+ (id<TSDMTLParticleSystem>)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id<TSDAnimationRandomGenerator>)arg6 pipelineDescriptor:(MTLRenderPipelineDescriptor *)arg7 device:(id<MTLDevice>)arg8;
+ (id<TSDMTLParticleSystem>)newParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id<TSDAnimationRandomGenerator>)arg7 pipelineDescriptor:(MTLRenderPipelineDescriptor *)arg8 device:(id<MTLDevice>)arg9;
- (void)drawMetalWithEncoder:(id<MTLRenderCommandEncoder>)arg1;
- (void)setupMetalWithPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
@end
