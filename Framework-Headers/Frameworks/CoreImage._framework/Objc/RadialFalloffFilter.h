//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RadialFalloffFilter : CIFilter
{
    CIVector *inputExtent;
    CIImage *inputCenter;
    NSNumber *inputFalloff;
    NSNumber *inputRadius;
    NSNumber *inputAnisotropic;
}

@property (strong, nonatomic) NSNumber *inputAnisotropic; // @synthesize inputAnisotropic;
@property (strong, nonatomic) CIImage *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property (strong, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

- (id)outputImage;

@end

