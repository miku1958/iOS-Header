//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKActivityRingView, HKActivitySummary, HKUnit, NSMutableArray, UIFont, UIImageView, UILabel, UILayoutGuide;

@interface HKActivityTodayWidgetView : UIView
{
    HKActivityRingView *_ringView;
    HKActivitySummary *_activitySummary;
    HKUnit *_activeEnergyUnit;
    HKUnit *_basalEnergyUnit;
    UIImageView *_ringViewSnapshot;
    UILabel *_moveTitleLabel;
    UILabel *_moveValueLabel;
    UILabel *_exerciseTitleLabel;
    UILabel *_exerciseValueLabel;
    UILabel *_standTitleLabel;
    UILabel *_standValueLabel;
    UIFont *_smallCapsValueFont;
    UIView *_textContainerView;
    UILayoutGuide *_labelsTopLayoutGuide;
    UILayoutGuide *_labelsBottomLayoutGuide;
    NSMutableArray *_sizeDepedentConstraints;
}

@property (strong, nonatomic) NSMutableArray *sizeDepedentConstraints; // @synthesize sizeDepedentConstraints=_sizeDepedentConstraints;

+ (id)_integerFormatter;
+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)_animateCurrentActivitySummary;
- (void)_constrainLabels;
- (void)_renderRingImage;
- (void)_textSizeDidUpdate:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateMoveValueLabelWithSummary:(id)arg1;
- (void)_updateStandTitleLabelWithSummary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 activeEnergyUnit:(id)arg2 basalEnergyUnit:(id)arg3;
- (void)setActiveEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2;
- (void)setActivitySummary:(id)arg1 animated:(BOOL)arg2;
- (void)setIsWheelchairUser:(BOOL)arg1;
- (void)setupExerciseLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupMoveLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupRingViews;
- (void)setupStandLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextWithNewActivitySummary:(id)arg1;

@end

