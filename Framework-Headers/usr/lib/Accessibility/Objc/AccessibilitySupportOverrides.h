//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AccessibilitySupportOverrides : NSObject
{
    NSNumber *_boldText;
    NSNumber *_increaseContrast;
    NSNumber *_reduceTransparency;
    NSNumber *_reduceMotion;
    NSNumber *_onOffLabels;
    NSNumber *_buttonShapes;
    NSNumber *_grayscale;
    NSNumber *_smartInvert;
    NSNumber *_differentiateWithoutColor;
}

@property (strong, nonatomic) NSNumber *boldText; // @synthesize boldText=_boldText;
@property (strong, nonatomic) NSNumber *buttonShapes; // @synthesize buttonShapes=_buttonShapes;
@property (strong, nonatomic) NSNumber *differentiateWithoutColor; // @synthesize differentiateWithoutColor=_differentiateWithoutColor;
@property (strong, nonatomic) NSNumber *grayscale; // @synthesize grayscale=_grayscale;
@property (strong, nonatomic) NSNumber *increaseContrast; // @synthesize increaseContrast=_increaseContrast;
@property (strong, nonatomic) NSNumber *onOffLabels; // @synthesize onOffLabels=_onOffLabels;
@property (strong, nonatomic) NSNumber *reduceMotion; // @synthesize reduceMotion=_reduceMotion;
@property (strong, nonatomic) NSNumber *reduceTransparency; // @synthesize reduceTransparency=_reduceTransparency;
@property (strong, nonatomic) NSNumber *smartInvert; // @synthesize smartInvert=_smartInvert;

+ (id)shared;
- (void).cxx_destruct;
- (void)_addFilter:(id)arg1;
- (void)_installGrayscaleFilter;
- (void)_installInvertColorsFilter;
- (void)_removeFilterWithName:(id)arg1;

@end
