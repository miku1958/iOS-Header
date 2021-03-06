//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice, MTLTexture;

@interface PXGColorProgram : NSObject
{
    unsigned int _param_count;
    unsigned int _num_trc_luts;
    unsigned int *_trc_lut_widths;
    unsigned short _numInputs;
    unsigned int _opcodes;
    id<MTLDevice> _device;
    struct CGColorSpace *_sourceColorSpace;
    struct CGColorSpace *_destinationColorSpace;
    unsigned long long _flags;
    id<MTLBuffer> _params;
    id<MTLTexture> _TRCLUTs;
    id<MTLTexture> _colorCube;
}

@property (readonly, nonatomic) id<MTLTexture> TRCLUTs; // @synthesize TRCLUTs=_TRCLUTs;
@property (readonly, nonatomic) id<MTLTexture> colorCube; // @synthesize colorCube=_colorCube;
@property (readonly, nonatomic) struct CGColorSpace *destinationColorSpace; // @synthesize destinationColorSpace=_destinationColorSpace;
@property (readonly, nonatomic) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL needsHDRToSDRConversion;
@property (readonly, nonatomic) unsigned short numInputs; // @synthesize numInputs=_numInputs;
@property (readonly, nonatomic) unsigned int opcodes; // @synthesize opcodes=_opcodes;
@property (readonly, nonatomic) id<MTLBuffer> params; // @synthesize params=_params;
@property (readonly, nonatomic) struct CGColorSpace *sourceColorSpace; // @synthesize sourceColorSpace=_sourceColorSpace;

- (void).cxx_destruct;
- (BOOL)_compactProgramWithConversionInfo:(struct CGColorConversionInfo *)arg1 cubeSize:(int)arg2 cubeOnly:(BOOL)arg3;
- (BOOL)_generateProgram;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)arg1 sourceColorSpace:(struct CGColorSpace *)arg2 destinationColorSpace:(struct CGColorSpace *)arg3 flags:(unsigned long long)arg4;

@end

