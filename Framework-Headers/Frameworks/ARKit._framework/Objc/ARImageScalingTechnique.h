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
    unsigned char _downscaleFactor;
}

@property (readonly, nonatomic) unsigned char downscaleFactor; // @synthesize downscaleFactor=_downscaleFactor;

- (void)dealloc;
- (id)initWithDownscaleFactor:(unsigned char)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;

@end
