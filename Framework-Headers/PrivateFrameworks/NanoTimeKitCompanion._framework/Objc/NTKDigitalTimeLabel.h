//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUITimeLabel.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class NSString, NTKDigitalTimeLabelStyle, UIColor;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView>
{
    UIColor *_shadowColor;
    BOOL _usesLegibility;
    BOOL _frozen;
    UIColor *_overrideColor;
}

@property (strong, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property (copy, nonatomic) NTKDigitalTimeLabelStyle *style; // @dynamic style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;

- (void).cxx_destruct;
- (id)_labelColorFromFaceColor:(unsigned long long)arg1 device:(id)arg2;
- (id)_newUnderlyingLabel:(BOOL)arg1;
- (void)_tritiumBoldTextStatusDidChange:(id)arg1;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)applyFaceColor:(unsigned long long)arg1 device:(id)arg2;
- (void)applyFaceFromColor:(unsigned long long)arg1 toColor:(unsigned long long)arg2 fraction:(float)arg3 device:(id)arg4;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)layoutSubviews;
- (void)setFrameUsingCurrentStyle;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeOffset:(double)arg1;

@end

