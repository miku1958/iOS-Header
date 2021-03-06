//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMorphologyRectangle : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputWidth;
    NSNumber *inputHeight;
}

@property (strong, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;

+ (id)customAttributes;
- (BOOL)_doMinimum;
- (BOOL)_isIdentity;
- (id)outputImage;

@end

