//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC19HealthVisualization24HighlightCalendarDayView : UIView
{
    MISSING_TYPE *model;
    MISSING_TYPE *dayLabel;
    MISSING_TYPE *todayIndicatorLayer;
    MISSING_TYPE *ringsRenderer;
    MISSING_TYPE *activityRingsView;
}

@property (nonatomic, readonly) long long axCircleState;
@property (nonatomic, readonly) NSDate *axDate;
@property (nonatomic, readonly) long long axProbability;
@property (nonatomic, readonly) NSString *axProjectionKind;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
