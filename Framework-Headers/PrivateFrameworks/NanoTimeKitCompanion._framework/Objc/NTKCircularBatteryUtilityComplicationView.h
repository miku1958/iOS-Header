//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitySmallRingTextComplicationView.h>

#import <NanoTimeKitCompanion/NTKBatteryComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularBatteryUtilityComplicationView : NTKUtilitySmallRingTextComplicationView <NTKBatteryComplicationDisplay>
{
    long long _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void)_applyForegroundAlpha;
- (void)_updateRingColor;
- (void)setLevel:(float)arg1;
- (void)setState:(long long)arg1;

@end
