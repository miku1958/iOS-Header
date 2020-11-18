//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView
{
    UIColor *_color;
    double _separatorThickness;
    long long _dashStyle;
    double _leadingMargin;
    double _trailingMargin;
}

@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) long long dashStyle; // @synthesize dashStyle=_dashStyle;
@property (nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property (nonatomic) double separatorThickness; // @synthesize separatorThickness=_separatorThickness;
@property (nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;

+ (id)_hkecg_separatorView;
- (void).cxx_destruct;
- (void)_applyStyleToContext:(struct CGContext *)arg1;
- (BOOL)_isVertical;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isOpaque;

@end
