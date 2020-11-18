//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIImageWriter : CIFilter
{
    CIImage *inputImage;
    NSString *inputFilename;
    NSNumber *inputShouldDumpInputValues;
    CIFilter *inputOriginalFilter;
}

@property (strong) NSString *inputFilename; // @synthesize inputFilename;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) CIFilter *inputOriginalFilter; // @synthesize inputOriginalFilter;
@property (strong) NSNumber *inputShouldDumpInputValues; // @synthesize inputShouldDumpInputValues;

+ (id)customAttributes;
- (id)outputImage;

@end

