//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface BCUIRingView : UIView
{
    double _ringStart;
    double _ringEnd;
    double _lineWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
}

@property (copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property (nonatomic) double ringEnd; // @synthesize ringEnd=_ringEnd;
@property (nonatomic) double ringStart; // @synthesize ringStart=_ringStart;
@property (copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_invalidatePath;
- (id)_shapeLayer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)mt_applyVisualStyling:(id)arg1;
- (void)setFractionComplete:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
