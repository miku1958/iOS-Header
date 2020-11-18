//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CPSLabeledValueView, CPSTravelEstimatesStringFormatter, NSTimeZone;

@interface CPSRouteEstimatesView : UIView
{
    CPSLabeledValueView *_timeRemainingView;
    CPSLabeledValueView *_arrivalTimeView;
    CPSLabeledValueView *_distanceRemainingView;
    CPSTravelEstimatesStringFormatter *_travelEstimatesStringFormatter;
    unsigned long long _timeRemainingColor;
}

@property (readonly, nonatomic) CPSLabeledValueView *arrivalTimeView; // @synthesize arrivalTimeView=_arrivalTimeView;
@property (copy, nonatomic) NSTimeZone *arrivalTimeZone; // @dynamic arrivalTimeZone;
@property (readonly, nonatomic) CPSLabeledValueView *distanceRemainingView; // @synthesize distanceRemainingView=_distanceRemainingView;
@property (nonatomic) unsigned long long timeRemainingColor; // @synthesize timeRemainingColor=_timeRemainingColor;
@property (readonly, nonatomic) CPSLabeledValueView *timeRemainingView; // @synthesize timeRemainingView=_timeRemainingView;
@property (readonly, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter; // @synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter;

- (void).cxx_destruct;
- (void)_updateTextColors;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setTripEstimateStyle:(unsigned long long)arg1;

@end
