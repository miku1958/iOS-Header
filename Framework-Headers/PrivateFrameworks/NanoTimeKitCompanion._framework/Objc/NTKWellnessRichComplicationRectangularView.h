//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NSLayoutConstraint, NTKColoringLabel, NTKWellnessRichComplicationChartView, UIImageView, UIView;

@interface NTKWellnessRichComplicationRectangularView : NTKRichComplicationRectangularBaseView
{
    UIView *_chartTitleView;
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_moveLabel;
    UIImageView *_moveGlyphView;
    NSLayoutConstraint *_moveGlyphTitleLabelTrailingConstraint;
    NTKColoringLabel *_exerciseLabel;
    UIImageView *_exerciseGlyphView;
    NTKColoringLabel *_standLabel;
    UIImageView *_standGlyphView;
    NTKWellnessRichComplicationChartView *_chartView;
    NSArray *_flatViews;
    NSArray *_accentViews;
}

@property (strong, nonatomic) NSArray *accentViews; // @synthesize accentViews=_accentViews;
@property (strong, nonatomic) UIView *chartTitleView; // @synthesize chartTitleView=_chartTitleView;
@property (strong, nonatomic) NTKWellnessRichComplicationChartView *chartView; // @synthesize chartView=_chartView;
@property (strong, nonatomic) UIImageView *exerciseGlyphView; // @synthesize exerciseGlyphView=_exerciseGlyphView;
@property (strong, nonatomic) NTKColoringLabel *exerciseLabel; // @synthesize exerciseLabel=_exerciseLabel;
@property (strong, nonatomic) NSArray *flatViews; // @synthesize flatViews=_flatViews;
@property (strong, nonatomic) NSLayoutConstraint *moveGlyphTitleLabelTrailingConstraint; // @synthesize moveGlyphTitleLabelTrailingConstraint=_moveGlyphTitleLabelTrailingConstraint;
@property (strong, nonatomic) UIImageView *moveGlyphView; // @synthesize moveGlyphView=_moveGlyphView;
@property (strong, nonatomic) NTKColoringLabel *moveLabel; // @synthesize moveLabel=_moveLabel;
@property (strong, nonatomic) UIImageView *standGlyphView; // @synthesize standGlyphView=_standGlyphView;
@property (strong, nonatomic) NTKColoringLabel *standLabel; // @synthesize standLabel=_standLabel;
@property (strong, nonatomic) NTKColoringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setAccentViewsVisibility:(BOOL)arg1;
- (void)_setupViews;
- (void)_updateViews:(id)arg1 withFilter:(id)arg2;
- (id)init;
- (void)setNeedsLayout;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
