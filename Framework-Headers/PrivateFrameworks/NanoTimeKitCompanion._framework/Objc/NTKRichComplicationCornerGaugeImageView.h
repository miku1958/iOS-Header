//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeCustomView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerGaugeImageView : NTKRichComplicationCornerGaugeCustomView
{
    NTKRichComplicationImageView *_imageView;
}

@property (readonly, nonatomic) NTKRichComplicationImageView *imageView; // @synthesize imageView=_imageView;

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_outerView;
- (void)setPaused:(BOOL)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end

