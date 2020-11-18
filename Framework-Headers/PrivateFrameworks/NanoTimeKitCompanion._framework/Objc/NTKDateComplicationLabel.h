//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/NTKControl-Protocol.h>
#import <NanoTimeKitCompanion/NTKDateComplicationDisplay-Protocol.h>

@class CLKFont, NSString, UIColor, UILabel, UIView;
@protocol NTKComplicationDisplayObserver;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl>
{
    BOOL _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    struct CGSize _cachedSize;
    BOOL _cachedSizeIsValid;
    BOOL _usesLegibility;
    BOOL _legibilityHidden;
    id<NTKComplicationDisplayObserver> displayObserver;
    long long _sizeStyle;
    CLKFont *_font;
    UIColor *_numberColor;
    unsigned long long _overrideDateStyle;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
@property (readonly, nonatomic) double _lastLineBaseline;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (strong, nonatomic) CLKFont *font; // @synthesize font=_font;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL legibilityHidden; // @synthesize legibilityHidden=_legibilityHidden;
@property (strong, nonatomic) UIColor *numberColor; // @synthesize numberColor=_numberColor;
@property (nonatomic) unsigned long long overrideDateStyle; // @synthesize overrideDateStyle=_overrideDateStyle;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly, nonatomic) long long sizeStyle; // @synthesize sizeStyle=_sizeStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property (nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;

- (void).cxx_destruct;
- (void)_applyAccentColorAttributes;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (double)_cornerRadius;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (struct CGSize)_highlightInset;
- (void)_invalidateInternalLabelSize;
- (double)_legibtilityShadowRadius;
- (void)_setFont:(id)arg1;
- (void)_setText:(id)arg1;
- (id)initWithSizeStyle:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setContentsMultiplyColor:(id)arg1 animated:(BOOL)arg2 withDuration:(double)arg3;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned long long)arg2;
- (BOOL)shouldCancelTouchesInScrollview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

