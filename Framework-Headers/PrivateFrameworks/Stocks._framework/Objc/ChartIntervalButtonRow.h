//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ChartIntervalButton, NSArray;
@protocol ChartIntervalButtonRowDelegate;

@interface ChartIntervalButtonRow : UIView
{
    id<ChartIntervalButtonRowDelegate> _delegate;
    NSArray *_intervalButtons;
    ChartIntervalButton *_selectedButton;
    long long _maxChartInterval;
}

@property (weak, nonatomic) id<ChartIntervalButtonRowDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSArray *intervalButtons; // @synthesize intervalButtons=_intervalButtons;
@property (nonatomic) long long maxChartInterval; // @synthesize maxChartInterval=_maxChartInterval;
@property (weak, nonatomic) ChartIntervalButton *selectedButton; // @synthesize selectedButton=_selectedButton;

- (void).cxx_destruct;
- (id)initWithMaxChartInterval:(long long)arg1 chartIntervalButtonRowDelegate:(id)arg2;
- (void)intervalButtonsTapped:(id)arg1;
- (long long)intervalForTouchLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)selectChartIntervalButtonForInterval:(long long)arg1;
- (void)sizeToBoldLabels;
- (void)updateMaxChartInterval:(long long)arg1;

@end

