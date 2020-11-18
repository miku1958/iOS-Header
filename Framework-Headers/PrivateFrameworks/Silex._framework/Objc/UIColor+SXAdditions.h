//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (SXAdditions)

@property (readonly, nonatomic) double brightness;

+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
- (BOOL)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)hex;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)invertedBrightness;
- (id)invertedLightness;
- (id)invertedRGB;
- (double)relativeLuminance;
@end
