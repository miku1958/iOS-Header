//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheapBilateral : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSource;
    NSNumber *inputSigmaSpace;
    NSNumber *inputSigmaRange;
}

@property (strong, nonatomic) NSNumber *inputSigmaRange; // @synthesize inputSigmaRange;
@property (strong, nonatomic) NSNumber *inputSigmaSpace; // @synthesize inputSigmaSpace;
@property (strong, nonatomic) CIImage *inputSource; // @synthesize inputSource;

+ (id)customAttributes;
- (id)outputImage;

@end

