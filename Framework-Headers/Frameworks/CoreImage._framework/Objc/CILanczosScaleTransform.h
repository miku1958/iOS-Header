//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
}

@property (strong, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;

+ (id)customAttributes;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;

@end

