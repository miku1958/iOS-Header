//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKWorkoutRichComplicationCircularContentView;

@interface NTKWorkoutRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView
{
    NTKWorkoutRichComplicationCircularContentView *_richView;
}

- (void).cxx_destruct;
- (id)_animatedImagesName;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_workoutImageName;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
