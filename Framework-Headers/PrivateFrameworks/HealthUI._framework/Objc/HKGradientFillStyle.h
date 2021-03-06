//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle
{
    UIColor *_firstColor;
    UIColor *_secondColor;
    double _fillPercentage;
    long long _fillDirection;
    double _gradientSize;
}

@property (nonatomic) long long fillDirection; // @synthesize fillDirection=_fillDirection;
@property (nonatomic) double fillPercentage; // @synthesize fillPercentage=_fillPercentage;
@property (strong, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
@property (nonatomic) double gradientSize; // @synthesize gradientSize=_gradientSize;
@property (strong, nonatomic) UIColor *secondColor; // @synthesize secondColor=_secondColor;

- (void).cxx_destruct;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (BOOL)_useReversedFillDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

