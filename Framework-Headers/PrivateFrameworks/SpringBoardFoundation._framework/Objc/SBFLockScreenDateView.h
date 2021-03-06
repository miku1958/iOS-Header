//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSTimeZone, SBFLockScreenDateSubtitleDateView, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, UIColor, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView
{
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    SBFLockScreenDateSubtitleView *_customSubtitleView;
    NSTimeZone *_timeZone;
    BOOL _useCompactDateFormat;
    NSDate *_date;
    UIColor *_overrideTextColor;
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
    double _dateToTimeStretch;
    double _timeLegibilityStrength;
    double _subtitleLegibilityStrength;
    double _maximumSubtitleWidth;
    struct CGRect _restingFrame;
}

@property (nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property (readonly, nonatomic) double contentAlpha;
@property (strong, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView; // @synthesize customSubtitleView=_customSubtitleView;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) double dateToTimeStretch; // @synthesize dateToTimeStretch=_dateToTimeStretch;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic) double maximumSubtitleWidth; // @synthesize maximumSubtitleWidth=_maximumSubtitleWidth;
@property (nonatomic) struct CGRect restingFrame; // @synthesize restingFrame=_restingFrame;
@property (readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) double subtitleLegibilityStrength; // @synthesize subtitleLegibilityStrength=_subtitleLegibilityStrength;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_overrideTextColor;
@property (readonly, nonatomic) double timeBaselineOffsetFromOrigin;
@property (nonatomic) double timeLegibilityStrength; // @synthesize timeLegibilityStrength=_timeLegibilityStrength;
@property (nonatomic) BOOL useCompactDateFormat; // @synthesize useCompactDateFormat=_useCompactDateFormat;

+ (double)defaultHeight;
+ (id)timeFont;
+ (CDStruct_91d2e2b9)timeFontMetrics;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_setDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_setSubtitleAlpha:(double)arg1;
- (struct CGRect)_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2;
- (id)_timeLabel;
- (struct CGRect)_timeLabelFrameForAlignmentPercent:(double)arg1;
- (struct UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1;
- (void)_updateLabelAlpha;
- (void)_updateLabels;
- (void)_updateUsesCompactDateFormat;
- (struct CGRect)chargingVisualInformationTimeFrame;
- (struct CGRect)chargingVisualInformationTimeSubtitleFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)presentationExtentForAlignmentPercent:(double)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFormat;

@end

