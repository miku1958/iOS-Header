//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView
{
    NTKSolarRichComplicationFullColorImageView *_solarImageView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
