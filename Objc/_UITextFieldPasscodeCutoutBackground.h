//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView
{
    BOOL _customStrokeColor;
    BOOL _customFillColor;
    CAShapeLayer *_lighteningOutline;
    double _outlineAlpha;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, nonatomic) UIBezierPath *customPath;
@property (nonatomic) double outlineAlpha;

+ (id)_fillColor:(BOOL)arg1;
+ (id)_strokeColor:(BOOL)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_fillColor:(BOOL)arg1;
- (id)_layer;
- (double)_pathInset;
- (double)_pixelAlignment;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (void)_updateLightingOutlinePath;
- (void)_updatePath;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (double)lineWidth;
- (void)setActive:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidth:(double)arg1 updatePath:(BOOL)arg2;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end

