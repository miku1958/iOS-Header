//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIColor.h>

__attribute__((visibility("hidden")))
@interface UIDisplayP3Color : UIColor
{
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor *_cachedColor;
}

- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (BOOL)_isDeepColor;
- (double)alphaComponent;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (BOOL)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)getWhite:(double *)arg1 alpha:(double *)arg2;
- (unsigned long long)hash;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
