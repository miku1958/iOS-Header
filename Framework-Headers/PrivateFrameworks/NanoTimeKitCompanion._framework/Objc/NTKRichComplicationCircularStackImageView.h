//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationImageView;

@interface NTKRichComplicationCircularStackImageView : NTKRichComplicationCircularBaseView
{
    NTKRichComplicationImageView *_line1ImageView;
    NTKColoringLabel *_line2Label;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)setPaused:(BOOL)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
