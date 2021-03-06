//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeSpecular : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputSpecularMask;
    NSNumber *inputSpecularThreshold;
    NSNumber *inputSpecIntensity;
    NSNumber *inputDebugFlag;
}

@property (strong, nonatomic) NSNumber *inputDebugFlag; // @synthesize inputDebugFlag;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIImage *inputSource; // @synthesize inputSource;
@property (strong, nonatomic) NSNumber *inputSpecIntensity; // @synthesize inputSpecIntensity;
@property (strong, nonatomic) CIImage *inputSpecularMask; // @synthesize inputSpecularMask;
@property (strong, nonatomic) NSNumber *inputSpecularThreshold; // @synthesize inputSpecularThreshold;

- (id)outputImage;

@end

