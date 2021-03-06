//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSArray, NSNumber;

@interface NUBrushMaskGenerator : CIFilter
{
    NSNumber *_inputRadius;
    NSNumber *_inputSoftness;
    NSNumber *_inputOpacity;
    NSArray *_inputPoints;
    NSNumber *_inputTiled;
    NSNumber *_inputClosed;
    NSNumber *_inputPressureMode;
}

@property (strong, nonatomic) NSNumber *inputClosed; // @synthesize inputClosed=_inputClosed;
@property (strong, nonatomic) NSNumber *inputOpacity; // @synthesize inputOpacity=_inputOpacity;
@property (strong, nonatomic) NSArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property (strong, nonatomic) NSNumber *inputPressureMode; // @synthesize inputPressureMode=_inputPressureMode;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
@property (strong, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness=_inputSoftness;
@property (strong, nonatomic) NSNumber *inputTiled; // @synthesize inputTiled=_inputTiled;

- (void).cxx_destruct;
- (id)_applyOpacity:(double)arg1 toMask:(id)arg2;
- (id)outputImage;
- (void)setDefaults;

@end

