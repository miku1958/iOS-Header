//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCalendar, NSMutableArray, PKSpendingSummary, UIFont;

@interface PKSpendingSummaryChartView : UIView
{
    NSMutableArray *_valueLabels;
    NSMutableArray *_legendLabels;
    NSMutableArray *_horizontalAxis;
    NSMutableArray *_bars;
    UIFont *_fontForLabels;
    UIFont *_fontForValues;
    PKSpendingSummary *_summary;
    double _chartMaxAmount;
    double _groupsMaxAmount;
    unsigned long long _axisCount;
    unsigned long long _presentationStyle;
    NSCalendar *_currentCalendar;
    BOOL _isCompactUI;
    BOOL _showLegend;
    BOOL _blurDisabled;
    BOOL _visible;
}

@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property (nonatomic) BOOL showLegend; // @synthesize showLegend=_showLegend;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

- (void).cxx_destruct;
- (void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

