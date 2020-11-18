//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModuleView.h>

@class CALayer, NSCalendar, NSDate, NSDateComponentsFormatter, UILabel, UIView;
@protocol NTKTimeTravelModuleViewTapClient;

@interface NTKTimeTravelModuleView : NTKModuleView
{
    UIView *_backgroundView;
    UILabel *_timeScrubDifferenceLabel;
    UILabel *_timeScrubNowLabel;
    NSDate *_date;
    NSDateComponentsFormatter *_offsetDateFormatter;
    BOOL _is24HourMode;
    BOOL _shouldUseNowText;
    NSCalendar *_cal;
    CALayer *_borderLayer;
    double _nowLabelCenterY;
    id<NTKTimeTravelModuleViewTapClient> _tapDelegate;
}

@property (weak, nonatomic) id<NTKTimeTravelModuleViewTapClient> tapDelegate; // @synthesize tapDelegate=_tapDelegate;

+ (double)_actualCornerRadius;
+ (double)cornerRadius;
+ (id)timeTravelColor;
- (void).cxx_destruct;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;
- (void)_layoutContentView;
- (void)_setupBorder;
- (id)initWithMaximumWidth:(double)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareToAppear;
- (void)scrubToDate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

