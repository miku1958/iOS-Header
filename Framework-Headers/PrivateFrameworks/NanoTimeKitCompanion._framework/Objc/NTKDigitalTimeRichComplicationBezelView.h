//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationBezelView : NTKRichComplicationBezelBaseTextView
{
    NTKDigitalTimeLabel *_timeLabel;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)timeOffsetChanged;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateDate;
- (void)updateMonochromeColor;

@end
