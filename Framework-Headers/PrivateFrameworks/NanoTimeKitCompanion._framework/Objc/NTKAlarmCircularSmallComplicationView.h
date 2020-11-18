//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

#import <NanoTimeKitCompanion/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKAlarmComplicationDisplay-Protocol.h>

@class NSDate, NSString, NTKColoringLabel, NTKDigitalTimeLabel, NTKStackedImagesComplicationImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKAlarmCircularSmallComplicationView : NTKCircularComplicationView <NTKAlarmComplicationDisplay, CLKTimeFormatterObserver>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKColoringLabel *_designatorLabel;
    NTKColoringLabel *_alternativeTimeLabel;
    NTKStackedImagesComplicationImageView *_image;
    BOOL _showAlternativeTimeLabel;
    NSDate *_alarmDate;
    double _snoozeDuration;
    long long _alarmState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setShowAlternativeLabel:(BOOL)arg1;
- (void)_updateImage;
- (void)_updateLabelsForFontChange;
- (void)_updateTime;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setUsesMediumLayout:(BOOL)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;

@end
