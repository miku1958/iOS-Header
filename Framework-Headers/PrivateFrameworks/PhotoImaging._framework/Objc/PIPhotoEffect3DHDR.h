//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIPhotoEffect3DHDR : CIFilter
{
    float _inputThreshold;
    CIImage *_inputImage;
    CIImage *_inputDepthMap;
}

@property (strong) CIImage *inputDepthMap; // @synthesize inputDepthMap=_inputDepthMap;
@property (strong) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property float inputThreshold; // @synthesize inputThreshold=_inputThreshold;

+ (id)kernel;
- (void).cxx_destruct;
- (id)outputImage;
- (id)photoEffectName;

@end

