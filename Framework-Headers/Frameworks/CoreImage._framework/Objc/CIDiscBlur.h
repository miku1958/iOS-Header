//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDiscBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;
- (void)dealloc;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

