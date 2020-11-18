//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (TSDAdditions)
+ (id)colorInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)randomColor;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)grayscaleColor;
- (id)initInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)invertedColor;
- (BOOL)isOpaque;
- (double)luminance;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
@end

