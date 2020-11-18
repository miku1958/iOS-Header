//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView
{
    NTKColoringImageView *_fillFractionRing;
    double _fillFraction;
    BOOL _didDrawOnce;
    UIColor *_ringOverrideColor;
}

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_wantsPlatter;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setUsesMediumLayout:(BOOL)arg1;
- (void)updateRingWithOverrideColor:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;

@end

