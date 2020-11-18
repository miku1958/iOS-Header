//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIBarcodeDescriptor;

__attribute__((visibility("hidden")))
@interface CIBarcodeGenerator : CIFilter
{
    CIBarcodeDescriptor *inputBarcodeDescriptor;
}

@property (copy, nonatomic) CIBarcodeDescriptor *inputBarcodeDescriptor; // @synthesize inputBarcodeDescriptor;

+ (id)customAttributes;
- (struct CGImage *)outputCGImage;
- (struct CGImage *)outputCGImageForAztecCodeDescriptor;
- (struct CGImage *)outputCGImageForDataMatrixCodeDescriptor;
- (struct CGImage *)outputCGImageForPDF417CodeDescriptor;
- (struct CGImage *)outputCGImageForQRCodeDescriptor;
- (id)outputImage;

@end
