//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    struct CGRect _prevLayoutBounds;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_showEmptyViews;
- (void)_updateRingWithTemplate:(id)arg1;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end

