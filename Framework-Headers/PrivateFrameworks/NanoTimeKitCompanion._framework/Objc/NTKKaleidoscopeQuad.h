//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class CLKUITexture, MISSING_TYPE, NTKKaleidoscopeResourceManager;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface NTKKaleidoscopeQuad : CLKUIQuad
{
    NTKKaleidoscopeResourceManager *_loader;
    id<MTLBuffer> _geomBuffer;
    id<MTLRenderPipelineState> _mtlPipelineOpaque;
    id<MTLRenderPipelineState> _mtlPipelineBlend;
    MISSING_TYPE *_aspect;
    float _alpha;
    float _rotation;
    float _dialRadius;
    CLKUITexture *_primaryLumaTexture;
    CLKUITexture *_primaryChromaTexture;
    CLKUITexture *_secondaryTexture;
    unsigned long long _shaderType;
    MISSING_TYPE *_sampleCenter;
    MISSING_TYPE *_sampleRadius;
}

@property (nonatomic) float alpha; // @synthesize alpha=_alpha;
@property (nonatomic) float dialRadius; // @synthesize dialRadius=_dialRadius;
@property (strong, nonatomic) CLKUITexture *primaryChromaTexture; // @synthesize primaryChromaTexture=_primaryChromaTexture;
@property (strong, nonatomic) CLKUITexture *primaryLumaTexture; // @synthesize primaryLumaTexture=_primaryLumaTexture;
@property (nonatomic) float rotation; // @synthesize rotation=_rotation;
@property (nonatomic) MISSING_TYPE *sampleCenter; // @synthesize sampleCenter=_sampleCenter;
@property (nonatomic) MISSING_TYPE *sampleRadius; // @synthesize sampleRadius=_sampleRadius;
@property (strong, nonatomic) CLKUITexture *secondaryTexture; // @synthesize secondaryTexture=_secondaryTexture;
@property (readonly, nonatomic) unsigned long long shaderType; // @synthesize shaderType=_shaderType;

+ (id)quadWithShaderType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)geomBuffer;
- (id)initWithShaderType:(unsigned long long)arg1;
- (id)mtlPipelineBlend;
- (id)mtlPipelineOpaque;
- (BOOL)prepareForTime:(double)arg1;
- (void)purge;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)setupForQuadView:(id)arg1;

@end

