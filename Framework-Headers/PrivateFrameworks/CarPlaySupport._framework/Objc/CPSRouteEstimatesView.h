//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CPSLabeledValueView, NSCalendar, NSDateComponentsFormatter, NSDateFormatter, NSMeasurement, NSTimeZone;

@interface CPSRouteEstimatesView : UIView
{
    double _estimatedTimeRemaining;
    unsigned long long _timeRemainingColor;
    CPSLabeledValueView *_timeRemainingView;
    unsigned long long _tripEstimateStyle;
    CPSLabeledValueView *_arrivalTimeView;
    CPSLabeledValueView *_distanceRemainingView;
    NSDateFormatter *_arrivalDateFormatter;
    NSDateComponentsFormatter *_remainingTimeFormatter;
    NSCalendar *_calendar;
}

@property (readonly, nonatomic) NSDateFormatter *arrivalDateFormatter; // @synthesize arrivalDateFormatter=_arrivalDateFormatter;
@property (readonly, nonatomic) CPSLabeledValueView *arrivalTimeView; // @synthesize arrivalTimeView=_arrivalTimeView;
@property (copy, nonatomic) NSTimeZone *arrivalTimeZone; // @dynamic arrivalTimeZone;
@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (copy, nonatomic) NSMeasurement *distanceRemaining; // @dynamic distanceRemaining;
@property (readonly, nonatomic) CPSLabeledValueView *distanceRemainingView; // @synthesize distanceRemainingView=_distanceRemainingView;
@property (nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property (readonly, nonatomic) NSDateComponentsFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property (nonatomic) unsigned long long timeRemainingColor; // @synthesize timeRemainingColor=_timeRemainingColor;
@property (readonly, nonatomic) CPSLabeledValueView *timeRemainingView; // @synthesize timeRemainingView=_timeRemainingView;
@property (nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;

- (void).cxx_destruct;
- (id)_defaultColorForStyle:(unsigned long long)arg1;
- (id)_greenColorForStyle:(unsigned long long)arg1;
- (id)_orangeColorForStyle:(unsigned long long)arg1;
- (id)_redColorForStyle:(unsigned long long)arg1;
- (void)_setArrivalTime:(id)arg1;
- (void)_setDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)_setTimeRemaining:(id)arg1 units:(id)arg2;
- (id)_timeRemainingColorForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)_updateTextColors;
- (id)initWithStyle:(unsigned long long)arg1;

@end
