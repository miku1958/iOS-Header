//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ScreenTimeSettingsUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, STBarView, STDashedVerticalDivider, STPaddleView, STUsageReportGraphDataSet, UIImage, UIImageView, UILabel, UILayoutGuide, UIView;

@interface STUsageGraphViewController : UIViewController <UIGestureRecognizerDelegate>
{
    BOOL _includePaddle;
    BOOL _useVibrancy;
    STUsageReportGraphDataSet *_dataSet;
    long long _selectedWeekday;
    STBarView *_selectedBarView;
    unsigned long long _week;
    unsigned long long _day;
    UIView *_titleView;
    STPaddleView *_paddleView;
    UIView *_paddleConnectorView;
    NSLayoutConstraint *_paddleViewCenterXConstraint;
    NSLayoutConstraint *_paddleViewConnectorCenterXConstraint;
    NSArray *_verticalDividers;
    NSArray *_horizontalDividers;
    NSArray *_barViews;
    NSArray *_barIndicators;
    NSArray *_barViewHeightConstraints;
    NSArray *_verticalLayoutGuides;
    UILayoutGuide *_graphLayoutGuide;
    UILayoutGuide *_xAxisLabelSectionLayoutGuide;
    UILayoutGuide *_yAxisLabelSectionLayoutGuide;
    UILayoutGuide *_barSectionLayoutGuide;
    NSLayoutConstraint *_yAxisLabelSectionWidthConstraint;
    UIImageView *_weeklyAverageLine;
    UILabel *_weeklyAverageLabel;
    UILayoutGuide *_weeklyAverageLayoutGuide;
    NSLayoutConstraint *_weeklyAverageHeightConstraint;
    NSLayoutConstraint *_weeklyAverageTrailingConstraint;
    UIView *_vibrancyEffectContentView;
    STDashedVerticalDivider *_selectedVerticalDivider;
    STBarView *_pressedBarView;
    double _graphHeight;
}

@property (copy) NSArray *barIndicators; // @synthesize barIndicators=_barIndicators;
@property (strong) UILayoutGuide *barSectionLayoutGuide; // @synthesize barSectionLayoutGuide=_barSectionLayoutGuide;
@property (copy) NSArray *barViewHeightConstraints; // @synthesize barViewHeightConstraints=_barViewHeightConstraints;
@property (copy) NSArray *barViews; // @synthesize barViews=_barViews;
@property (readonly) UIImage *dashedAverageLineImage;
@property (strong, nonatomic) STUsageReportGraphDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property unsigned long long day; // @synthesize day=_day;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double graphHeight; // @synthesize graphHeight=_graphHeight;
@property (strong) UILayoutGuide *graphLayoutGuide; // @synthesize graphLayoutGuide=_graphLayoutGuide;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *horizontalDividers; // @synthesize horizontalDividers=_horizontalDividers;
@property (readonly) BOOL includePaddle; // @synthesize includePaddle=_includePaddle;
@property (readonly) double maximumYAxisLabelWidth;
@property (strong) UIView *paddleConnectorView; // @synthesize paddleConnectorView=_paddleConnectorView;
@property (strong) STPaddleView *paddleView; // @synthesize paddleView=_paddleView;
@property (strong) NSLayoutConstraint *paddleViewCenterXConstraint; // @synthesize paddleViewCenterXConstraint=_paddleViewCenterXConstraint;
@property (strong) NSLayoutConstraint *paddleViewConnectorCenterXConstraint; // @synthesize paddleViewConnectorCenterXConstraint=_paddleViewConnectorCenterXConstraint;
@property (strong, nonatomic) STBarView *pressedBarView; // @synthesize pressedBarView=_pressedBarView;
@property (strong) STBarView *selectedBarView; // @synthesize selectedBarView=_selectedBarView;
@property (strong) STDashedVerticalDivider *selectedVerticalDivider; // @synthesize selectedVerticalDivider=_selectedVerticalDivider;
@property (nonatomic) long long selectedWeekday; // @synthesize selectedWeekday=_selectedWeekday;
@property (readonly) Class superclass;
@property (readonly) UIView *titleView; // @synthesize titleView=_titleView;
@property (readonly) BOOL useVibrancy; // @synthesize useVibrancy=_useVibrancy;
@property (copy) NSArray *verticalDividers; // @synthesize verticalDividers=_verticalDividers;
@property (copy) NSArray *verticalLayoutGuides; // @synthesize verticalLayoutGuides=_verticalLayoutGuides;
@property (strong) UIView *vibrancyEffectContentView; // @synthesize vibrancyEffectContentView=_vibrancyEffectContentView;
@property unsigned long long week; // @synthesize week=_week;
@property (strong) NSLayoutConstraint *weeklyAverageHeightConstraint; // @synthesize weeklyAverageHeightConstraint=_weeklyAverageHeightConstraint;
@property (strong) UILabel *weeklyAverageLabel; // @synthesize weeklyAverageLabel=_weeklyAverageLabel;
@property (strong) UILayoutGuide *weeklyAverageLayoutGuide; // @synthesize weeklyAverageLayoutGuide=_weeklyAverageLayoutGuide;
@property (strong) UIImageView *weeklyAverageLine; // @synthesize weeklyAverageLine=_weeklyAverageLine;
@property (strong) NSLayoutConstraint *weeklyAverageTrailingConstraint; // @synthesize weeklyAverageTrailingConstraint=_weeklyAverageTrailingConstraint;
@property (strong) UILayoutGuide *xAxisLabelSectionLayoutGuide; // @synthesize xAxisLabelSectionLayoutGuide=_xAxisLabelSectionLayoutGuide;
@property (strong) UILayoutGuide *yAxisLabelSectionLayoutGuide; // @synthesize yAxisLabelSectionLayoutGuide=_yAxisLabelSectionLayoutGuide;
@property (strong) NSLayoutConstraint *yAxisLabelSectionWidthConstraint; // @synthesize yAxisLabelSectionWidthConstraint=_yAxisLabelSectionWidthConstraint;

- (void).cxx_destruct;
- (id)_closestBarViewToPoint:(struct CGPoint)arg1;
- (void)_handleLongPressGestureForBarSelection:(id)arg1;
- (void)_handleLongPressGestureForPaddle:(id)arg1;
- (void)_selectBarView:(id)arg1;
- (void)_setUpHorizontalDividerLabels;
- (void)_showPaddleForBarView:(id)arg1;
- (void)_stUsageGraphViewControllerCommonInit;
- (void)_updateBarViewsAndIndicators;
- (id)createBarIndicatorWithImageName:(id)arg1 barView:(id)arg2;
- (id)createBarViewWithDataPoint:(id)arg1 layoutGuide:(id)arg2 previousView:(id)arg3 previousLayoutGuide:(id)arg4 layoutGuideWidthMultiplier:(double)arg5;
- (id)createDividerWithView:(id)arg1 layoutGuide:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(double)arg4;
- (id)createFirstDivider;
- (id)createWeeklyAverageLineWithLayoutGuide:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleView:(id)arg1 graphHeight:(double)arg2 includePaddle:(BOOL)arg3 useVibrancy:(BOOL)arg4;
- (void)loadView;
- (void)setDataSet:(id)arg1 animated:(BOOL)arg2;
- (void)setUpBarViewHeightContraints;
- (void)setUpGraphWithLabelFormatter:(id)arg1;
- (void)setUpWeeklyAverageLine:(BOOL)arg1;
- (void)setYAxisLabelSectionWidth:(double)arg1;
- (void)viewDidLayoutSubviews;

@end
