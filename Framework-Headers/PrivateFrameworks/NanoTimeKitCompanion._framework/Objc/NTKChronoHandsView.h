//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class NTKChronoPalette, NTKHandView;

@interface NTKChronoHandsView : NTKAnalogHandsView
{
    BOOL _isChronoAnimationRunning;
    BOOL _minuteHandUsesManualTime;
    unsigned long long _timeScale;
    NTKChronoPalette *_palette;
    NTKHandView *_chronoSecondHandView;
    NTKHandView *_chronoFlybackSecondHandView;
    NTKHandView *_chronoMinuteHandView;
    NTKHandView *_chronoFlybackMinuteHandView;
}

@property (readonly, nonatomic) NTKHandView *chronoFlybackMinuteHandView; // @synthesize chronoFlybackMinuteHandView=_chronoFlybackMinuteHandView;
@property (readonly, nonatomic) NTKHandView *chronoFlybackSecondHandView; // @synthesize chronoFlybackSecondHandView=_chronoFlybackSecondHandView;
@property (readonly, nonatomic) NTKHandView *chronoMinuteHandView; // @synthesize chronoMinuteHandView=_chronoMinuteHandView;
@property (readonly, nonatomic) NTKHandView *chronoSecondHandView; // @synthesize chronoSecondHandView=_chronoSecondHandView;
@property (nonatomic) BOOL minuteHandUsesManualTime; // @synthesize minuteHandUsesManualTime=_minuteHandUsesManualTime;
@property (strong, nonatomic) NTKChronoPalette *palette; // @synthesize palette=_palette;
@property (nonatomic) unsigned long long timeScale; // @synthesize timeScale=_timeScale;

+ (long long)preferredCountOfInstancesToCache;
- (void).cxx_destruct;
- (void)_enumerateChronoHandViews:(CDUnknownBlockType)arg1;
- (void)_enumerateFlybackChronoHands:(CDUnknownBlockType)arg1;
- (void)_enumeratePrimaryChronoHands:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_stopwatchCurrentLapTime;
- (double)_stopwatchCurrentTime;
- (BOOL)_stopwatchIsRunning;
- (BOOL)_stopwatchIsStopped;
- (long long)_stopwatchLapCount;
- (double)chronoDuration;
- (id)createSecondHandView;
- (id)createTinyBabyHandViewWithColor:(id)arg1;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (double)secondsAnimationFPS;
- (void)showChronoMode;
- (void)showTimeMode;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (void)updateLapHandsVisibility;
- (double)upperDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;

@end

