//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSAttributedString, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAttributedTextImageGenerator : CIFilter
{
    NSAttributedString *inputText;
    NSNumber *inputScaleFactor;
}

@property (strong, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property (strong, nonatomic) NSAttributedString *inputText; // @synthesize inputText;

+ (id)customAttributes;
- (id)outputImage;

@end
