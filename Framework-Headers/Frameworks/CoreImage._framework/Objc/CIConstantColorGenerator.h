//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter
{
    CIColor *inputColor;
}

@property (strong, nonatomic) CIColor *inputColor; // @synthesize inputColor;

+ (id)customAttributes;
- (id)outputImage;

@end

