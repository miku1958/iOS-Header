//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@interface TSUColor : NSObject <NSCopying>
{
    struct CGColor *mCGColor;
}

@property (readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithPlatformColor:(id)arg1;
+ (id)colorWithRGBAComponents:(const double *)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;
- (id)UIColor;
- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)darkenedColorByFactor:(double)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(double *)arg1;
- (id)grayscaleColor;
- (double)greenComponent;
- (unsigned long long)hash;
- (double)hueComponent;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithPlatformColor:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGrayscaleColor;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (id)lightenedColorByFactor:(double)arg1;
- (double)luminance;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)platformColor;
- (double)redComponent;
- (double)saturationComponent;

@end

