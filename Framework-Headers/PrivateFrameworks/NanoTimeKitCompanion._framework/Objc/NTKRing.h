//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKRing : NSObject
{
    double _fillFraction;
    double _strokeWidth;
    double _backgroundRingAlpha;
    double _radius;
    long long _ringStyle;
}

@property double backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property double fillFraction; // @synthesize fillFraction=_fillFraction;
@property double radius; // @synthesize radius=_radius;
@property long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;
+ (id)fillFractionStringForFillFraction:(float)arg1;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;
- (double)_validFillFraction:(double)arg1;
- (void)fillFraction:(double)arg1;
- (id)fillFractionString;
- (id)fillFractionStringWithSymbol;
- (id)init;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4;
- (id)ringImage;

@end

