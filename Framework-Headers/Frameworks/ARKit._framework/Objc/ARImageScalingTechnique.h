//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique
{
    struct OpaqueVTPixelTransferSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_scaledPixelBufferPool;
    BOOL _shouldUseScaleFactor;
    unsigned char _downscaleFactor;
    unsigned int _conversionPixelFormatType;
    struct CGSize _scaledSize;
}

@property (nonatomic) unsigned int conversionPixelFormatType; // @synthesize conversionPixelFormatType=_conversionPixelFormatType;
@property (readonly, nonatomic) unsigned char downscaleFactor; // @synthesize downscaleFactor=_downscaleFactor;
@property (readonly, nonatomic) struct CGSize scaledSize; // @synthesize scaledSize=_scaledSize;

- (void)dealloc;
- (id)initWithDownscaleFactor:(unsigned char)arg1;
- (id)initWithScaledSize:(struct CGSize)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;

@end
