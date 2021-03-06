//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CameraEditKit/CEKAbstractSlider-Protocol.h>
#import <CameraEditKit/CEKSliderTickMarksDelegate-Protocol.h>
#import <CameraEditKit/UIScrollViewDelegate-Protocol.h>

@class CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKSliderDotView, CEKSliderTickMarksView, NSString, UIColor, UILabel, UIScrollView, UIView;
@protocol CEKSliderDelegate, CEKTickMarksConfiguration;

@interface CEKSlider : UIControl <UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider>
{
    struct {
        BOOL respondsToWillBeginScrolling;
        BOOL respondsToDidScroll;
        BOOL respondsToWillEndScrolling;
        BOOL respondsToDidEndScrolling;
        BOOL respondsToWillUpdateValue;
    } _delegateFlags;
    BOOL __animating;
    BOOL __overscrolling;
    BOOL __active;
    BOOL __reAdjustingOffsets;
    BOOL __dimmed;
    double _labelVerticalPadding;
    long long _sliderVerticalAlignment;
    double _sliderVerticalOffset;
    long long _textOrientation;
    unsigned long long _fontStyle;
    id<CEKSliderDelegate> _delegate;
    double _animationDuration;
    double _maximumValue;
    double _minimumValue;
    double _value;
    double _defaultValue;
    double _markedValue;
    long long _tickMarkCount;
    UIColor *_tickMarkColor;
    UIColor *_prominentTickMarkColor;
    NSString *_title;
    long long _valueLabelVisibility;
    UIScrollView *__contentScrollView;
    CEKSliderTickMarksView *__tickMarksView;
    UIView *__levelIndicatorView;
    CEKSliderDotView *__dotView;
    CEKEdgeGradientView *__edgeGradientView;
    unsigned long long __tickMarkIndex;
    CEKSelectionFeedbackGenerator *__feedbackGenerator;
    UILabel *__titleLabel;
    UILabel *__valueLabel;
    UIView *__levelIndicatorBackgroundView;
    CDStruct_ae5a35ae _gradientInsets;
    struct CGSize _tickMarkSize;
}

@property (nonatomic, getter=_isActive, setter=_setActive:) BOOL _active; // @synthesize _active=__active;
@property (nonatomic, getter=_isAnimating, setter=_setAnimating:) BOOL _animating; // @synthesize _animating=__animating;
@property (readonly, nonatomic) UIScrollView *_contentScrollView; // @synthesize _contentScrollView=__contentScrollView;
@property (nonatomic, getter=_isDimmed, setter=_setDimmed:) BOOL _dimmed; // @synthesize _dimmed=__dimmed;
@property (readonly, nonatomic) CEKSliderDotView *_dotView; // @synthesize _dotView=__dotView;
@property (strong, nonatomic, setter=_setEdgeGradientView:) CEKEdgeGradientView *_edgeGradientView; // @synthesize _edgeGradientView=__edgeGradientView;
@property (readonly, nonatomic) CEKSelectionFeedbackGenerator *_feedbackGenerator; // @synthesize _feedbackGenerator=__feedbackGenerator;
@property (strong, nonatomic) UIView *_levelIndicatorBackgroundView; // @synthesize _levelIndicatorBackgroundView=__levelIndicatorBackgroundView;
@property (readonly, nonatomic) UIView *_levelIndicatorView; // @synthesize _levelIndicatorView=__levelIndicatorView;
@property (nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) BOOL _overscrolling; // @synthesize _overscrolling=__overscrolling;
@property (nonatomic, getter=_isreAdjustingOffsets) BOOL _reAdjustingOffsets; // @synthesize _reAdjustingOffsets=__reAdjustingOffsets;
@property (nonatomic, setter=_setTickMarkIndex:) unsigned long long _tickMarkIndex; // @synthesize _tickMarkIndex=__tickMarkIndex;
@property (readonly, nonatomic) CEKSliderTickMarksView *_tickMarksView; // @synthesize _tickMarksView=__tickMarksView;
@property (strong, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property (strong, nonatomic) UILabel *_valueLabel; // @synthesize _valueLabel=__valueLabel;
@property (nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property (weak, nonatomic) id<CEKSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property (nonatomic) CDStruct_ae5a35ae gradientInsets; // @synthesize gradientInsets=_gradientInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) double labelVerticalPadding; // @synthesize labelVerticalPadding=_labelVerticalPadding;
@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) double markedValue; // @synthesize markedValue=_markedValue;
@property (nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property (nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property (strong, nonatomic) UIColor *prominentTickMarkColor; // @synthesize prominentTickMarkColor=_prominentTickMarkColor;
@property (nonatomic) long long sliderVerticalAlignment; // @synthesize sliderVerticalAlignment=_sliderVerticalAlignment;
@property (nonatomic) double sliderVerticalOffset; // @synthesize sliderVerticalOffset=_sliderVerticalOffset;
@property (readonly) Class superclass;
@property (nonatomic) long long textOrientation; // @synthesize textOrientation=_textOrientation;
@property (strong, nonatomic) UIColor *tickMarkColor; // @synthesize tickMarkColor=_tickMarkColor;
@property (nonatomic) long long tickMarkCount; // @synthesize tickMarkCount=_tickMarkCount;
@property (nonatomic) struct CGSize tickMarkSize; // @synthesize tickMarkSize=_tickMarkSize;
@property (nonatomic) double tickMarkSpacing;
@property (readonly, nonatomic) id<CEKTickMarksConfiguration> tickMarksConfiguration;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) BOOL useLegibilityShadows;
@property (nonatomic) BOOL useTickMarkLegibilityShadows;
@property (nonatomic) double value; // @synthesize value=_value;
@property (nonatomic) long long valueLabelVisibility; // @synthesize valueLabelVisibility=_valueLabelVisibility;

- (void).cxx_destruct;
- (void)_clampValuesAndUpdateScrollPosition:(BOOL)arg1;
- (void)_createGradientIfNeeded;
- (void)_setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setNormalizedValue:(double)arg1;
- (void)_setShowValueLabel:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setValue:(double)arg1 shouldSendActions:(BOOL)arg2 shouldUpdateScrollPosition:(BOOL)arg3;
- (void)_sliderDidEndScrolling;
- (void)_updateColorsAnimated:(BOOL)arg1;
- (void)_updateEnableAppearanceStateAnimated:(BOOL)arg1;
- (void)_updateFonts;
- (void)_updateLegibilityBackground;
- (void)_updateMarkedViewAnimated:(BOOL)arg1;
- (void)_updateScrollViewPosition;
- (void)_updateValueLabel;
- (double)_xOffsetForMarkedValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)removeGradients;
- (void)resetToDefault;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 dimmed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setMarkedValue:(double)arg1 animated:(BOOL)arg2;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setTransparentGradients;
- (void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1;
- (double)xOffsetForValue:(double)arg1;

@end

