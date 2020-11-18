//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKSelectedRangeFormatter, HKUIMetricColors, HKValueRange, NSArray, NSString, UIFont, UILabel, UIStackView;
@protocol HKCurrentValueViewDataSourceValueRangeFormatter;

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKUIMetricColors *_metricColors;
    NSArray *_annotationLabels;
    long long _timeScope;
    HKValueRange *_lastDateRange;
    UIStackView *_dateStack;
    UILabel *_upperDateLabel;
    UILabel *_lowerDateLabel;
    UILabel *_dividerDateLabel;
    NSString *_lastUpperDateString;
    NSString *_lastLowerDateString;
    NSString *_lastCombinedDateString;
    UIFont *_majorFont;
    UIFont *_minorFont;
    id<HKCurrentValueViewDataSourceValueRangeFormatter> _dateRangeFormatter;
}

@property (strong, nonatomic) NSArray *annotationLabels; // @synthesize annotationLabels=_annotationLabels;
@property (strong, nonatomic) id<HKCurrentValueViewDataSourceValueRangeFormatter> dateRangeFormatter; // @synthesize dateRangeFormatter=_dateRangeFormatter;
@property (strong, nonatomic) UIStackView *dateStack; // @synthesize dateStack=_dateStack;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *dividerDateLabel; // @synthesize dividerDateLabel=_dividerDateLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *lastCombinedDateString; // @synthesize lastCombinedDateString=_lastCombinedDateString;
@property (strong) HKValueRange *lastDateRange; // @synthesize lastDateRange=_lastDateRange;
@property (strong, nonatomic) NSString *lastLowerDateString; // @synthesize lastLowerDateString=_lastLowerDateString;
@property (strong, nonatomic) NSString *lastUpperDateString; // @synthesize lastUpperDateString=_lastUpperDateString;
@property (strong, nonatomic) UILabel *lowerDateLabel; // @synthesize lowerDateLabel=_lowerDateLabel;
@property (strong, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
@property (strong, nonatomic) HKUIMetricColors *metricColors; // @synthesize metricColors=_metricColors;
@property (strong, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property (readonly, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property (readonly) Class superclass;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property (strong, nonatomic) UILabel *upperDateLabel; // @synthesize upperDateLabel=_upperDateLabel;

- (void).cxx_destruct;
- (void)_buildDateLabels;
- (BOOL)_isMultiSelectionDateRange;
- (void)_updateDateText;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2 dateRangeFormatter:(id)arg3;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (BOOL)showSeparators;
- (void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
