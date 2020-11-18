//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface FUChartPointView : UIView
{
    int _pointStyle;
    UIColor *_color;
    double _radius;
}

@property (nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) int pointStyle; // @synthesize pointStyle=_pointStyle;
@property (nonatomic) double radius; // @synthesize radius=_radius;

+ (id)pointWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;
- (void)_drawBullseyeCircleInContext:(struct CGContext *)arg1;
- (void)_drawBullseyeSquareInContext:(struct CGContext *)arg1;
- (void)_drawGlowingCircleInContext:(struct CGContext *)arg1;
- (void)_drawHollowCircleInContext:(struct CGContext *)arg1;
- (void)_drawHollowSquareInContext:(struct CGContext *)arg1;
- (void)_drawSolidCircleInContext:(struct CGContext *)arg1;
- (void)_drawSolidSquareInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

