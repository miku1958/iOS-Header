//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ClockKitUI/CLKTimeFormatterObserver-Protocol.h>
#import <ClockKitUI/_CLKUITimeLabelManager-Protocol.h>

@class CLKClockTimerToken, CLKTimeFormatter, NSString, UIColor, UILabel, _CLKUIBasicTimeLabelManager;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver>
{
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    CLKClockTimerToken *_blinkTimerToken;
    BOOL _usesIsolatedBlinkerLabel;
    UILabel *_minutesBlinkerLabel;
    UILabel *_secondsBlinkerLabel;
    BOOL _animationsPaused;
    BOOL _showSeconds;
}

@property (nonatomic) BOOL animationsPaused; // @synthesize animationsPaused=_animationsPaused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize intrinsicSize;
@property (readonly, nonatomic) struct UIEdgeInsets opticalInsets;
@property (nonatomic) BOOL showSeconds; // @synthesize showSeconds=_showSeconds;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (double)_lastLineBaseline;
- (void)_startBlinking;
- (void)_startOrStopBlinking;
- (void)_stopBlinking;
- (void)_updateBlinkerAlphaForSecondFraction:(double)arg1;
- (void)dealloc;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;
- (void)layoutSubviews;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (struct CGSize)sizeThatFits;
- (void)sizeViewToFit;
- (void)timeFormatterReportingLiveTimeDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTimeText;
- (id)viewForLastBaselineLayout;

@end

