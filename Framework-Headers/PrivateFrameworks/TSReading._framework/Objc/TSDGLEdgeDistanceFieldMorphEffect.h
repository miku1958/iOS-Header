//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDGLShader;

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject
{
    BOOL _didTeardown;
    struct CGSize _outgoingTextureSize;
    struct CGSize _incomingTextureSize;
    struct CGRect _outgoingTextBounds;
    struct CGRect _incomingTextBounds;
    struct CGPoint _skewAngleOffsetX;
    BOOL _didSetupSkewAngleOffsetX;
    BOOL _isTextStyleIdenticalExceptSize;
    unsigned int _outgoingTextureName;
    unsigned int _incomingTextureName;
    TSDGLShader *_shader;
}

@property (readonly, nonatomic) unsigned int incomingTextureName; // @synthesize incomingTextureName=_incomingTextureName;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;
@property (readonly, nonatomic) unsigned int outgoingTextureName; // @synthesize outgoingTextureName=_outgoingTextureName;
@property (readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;

- (void)dealloc;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize)arg2 outgoingTextBounds:(struct CGRect)arg3 outgoingColor:(CDStruct_f2e236b6)arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize)arg6 incomingTextBounds:(struct CGRect)arg7 incomingColor:(CDStruct_f2e236b6)arg8;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (struct CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform)p_affineTransformConvertingRect:(struct CGRect)arg1 intoRect:(struct CGRect)arg2 atPercent:(double)arg3;
- (struct CGAffineTransform)p_affineTransformWithSkewAngleOffsetX:(struct CGPoint)arg1 textureSize:(struct CGSize)arg2;
- (double)p_errorFromApplyingSkewAngleOffsetX:(struct CGPoint)arg1 toOutgoingScanlines:(double *)arg2 incomingScanlines:(double *)arg3 samples:(unsigned long long)arg4;
- (void)p_fillScanlineLocations:(double *)arg1 samples:(unsigned long long)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize)arg4;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 generateTextureMatrices:(BOOL)arg3;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 outgoingTextureMatrix:(struct CGAffineTransform)arg3 incomingTextureMatrix:(struct CGAffineTransform)arg4;
- (void)teardown;
- (struct CGPoint)textureMatchingSkewAngleOffsetX;

@end

