//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularClosedGaugeContentView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView
{
    NTKRichComplicationImageView *_imageView;
}

@property (strong, nonatomic) NTKRichComplicationImageView *imageView; // @synthesize imageView=_imageView;

- (void).cxx_destruct;
- (id)gaugeProviderFromTemplate:(id)arg1;
- (id)innerView;
- (void)setPaused:(BOOL)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
