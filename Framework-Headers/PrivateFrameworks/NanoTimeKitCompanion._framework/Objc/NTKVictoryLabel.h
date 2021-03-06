//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class UIColor;

@interface NTKVictoryLabel : NTKColoringLabel
{
    BOOL _requiresDrawingRectAdjustments;
    double _additionalPaddingInsets;
    UIColor *_outlineColor;
    double _outlineAlpha;
    NTKVictoryLabel *_outlineLabel;
    struct CGVector _drawingRectOffset;
}

@property (nonatomic) double additionalPaddingInsets; // @synthesize additionalPaddingInsets=_additionalPaddingInsets;
@property (nonatomic) struct CGVector drawingRectOffset; // @synthesize drawingRectOffset=_drawingRectOffset;
@property (nonatomic) double outlineAlpha; // @synthesize outlineAlpha=_outlineAlpha;
@property (strong, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property (strong, nonatomic) NTKVictoryLabel *outlineLabel; // @synthesize outlineLabel=_outlineLabel;
@property (nonatomic) BOOL requiresDrawingRectAdjustments; // @synthesize requiresDrawingRectAdjustments=_requiresDrawingRectAdjustments;

+ (id)fontDescriptorWithVictoryStyle:(unsigned long long)arg1;
+ (id)loadFonts:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(BOOL)arg3;
+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2;
+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(BOOL)arg3;
- (void).cxx_destruct;
- (void)_applyDrawingOffsetForTextIfNeeded:(id)arg1;
- (void)_layoutOutlineLabelIfNeeded;
- (BOOL)_shouldHideOutlineLabel;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)outlinedLabelAttributedStringFromAttributedString:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillColor:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setOutlineColor:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;

@end

