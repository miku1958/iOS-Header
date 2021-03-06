//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedPupilLocalizer : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIterations;
    NSNumber *inputScale;
    NSNumber *inputDecay;
    NSNumber *inputGamma;
    NSNumber *inputClip;
    NSNumber *inputLocalizationRadius;
    CIVector *inputExtent;
    NSNumber *inputDebug;
    CIVector *inputAxisLong;
    CIVector *inputAxisShort;
    CIVector *inputPupilCenter;
    NSNumber *inputSearchAxisLong;
    NSNumber *inputSearchAxisShort;
}

@property (strong, nonatomic) CIVector *inputAxisLong; // @synthesize inputAxisLong;
@property (strong, nonatomic) CIVector *inputAxisShort; // @synthesize inputAxisShort;
@property (strong, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property (strong, nonatomic) NSNumber *inputDebug; // @synthesize inputDebug;
@property (strong, nonatomic) NSNumber *inputDecay; // @synthesize inputDecay;
@property (strong, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property (strong, nonatomic) NSNumber *inputGamma; // @synthesize inputGamma;
@property (strong, nonatomic) NSNumber *inputIterations; // @synthesize inputIterations;
@property (strong, nonatomic) NSNumber *inputLocalizationRadius; // @synthesize inputLocalizationRadius;
@property (strong, nonatomic) CIVector *inputPupilCenter; // @synthesize inputPupilCenter;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (strong, nonatomic) NSNumber *inputSearchAxisLong; // @synthesize inputSearchAxisLong;
@property (strong, nonatomic) NSNumber *inputSearchAxisShort; // @synthesize inputSearchAxisShort;

- (id)outputImage;

@end

