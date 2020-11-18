//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPassThroughSelectFrom3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputImage1;
    CIImage *inputImage2;
    NSNumber *inputSelected;
}

@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) CIImage *inputImage1; // @synthesize inputImage1;
@property (strong) CIImage *inputImage2; // @synthesize inputImage2;
@property (copy, nonatomic) NSNumber *inputSelected; // @synthesize inputSelected;

- (id)outputImage;

@end

