//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class CALayer, UIColor;

@interface NTKExplorerHandsView : NTKAnalogHandsView
{
    CALayer *_secondHandDot;
    CALayer *_minuteHandDot;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
    UIColor *_hourAndMinuteHandDotColor;
    UIColor *_secondHandDotColor;
}

@property (strong, nonatomic) UIColor *hourAndMinuteHandDotColor; // @synthesize hourAndMinuteHandDotColor=_hourAndMinuteHandDotColor;
@property (strong, nonatomic) UIColor *secondHandDotColor; // @synthesize secondHandDotColor=_secondHandDotColor;

- (void).cxx_destruct;
- (void)_addTransitionLayers;
- (void)_removeTransitionLayers;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setInlayColor:(id)arg1;

@end
