//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSArray;

@interface NTKNumeralsHourViewsManager : NSObject
{
    CLKDevice *_device;
    NSArray *_hourViews;
    long long _visibleHour;
    long long _visibleComplicationSlot;
    BOOL _areComplicationsOff;
    BOOL _adjustingForStatusIndicator;
    BOOL _hasUpperComplication;
}

- (void).cxx_destruct;
- (struct CGPoint)_currentHourViewPlacementForEditMode:(long long)arg1 faceConfiguration:(id)arg2;
- (double)_hourAlphaForEditMode:(long long)arg1;
- (id)_hourViewForHour:(long long)arg1 loadIfNeeded:(BOOL)arg2;
- (void)_update12AdjustmentForStatusIndicator;
- (id)_visibleHourView;
- (void)addHourViewsToSuperview:(id)arg1;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 faceConfiguration:(id)arg4;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)configureForEditMode:(long long)arg1;
- (id)initWithStyleFromFaceConfiguration:(id)arg1 forDevice:(id)arg2;
- (BOOL)needHourAnimationForChangeToHour:(long long)arg1 toFaceConfiguration:(id)arg2;
- (void)removeHourViews;
- (void)setAdjustsForStatusIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateVisibleHour:(long long)arg1 targetUtilitySlot:(long long)arg2 faceConfiguration:(id)arg3 animationProgress:(double)arg4 forEditMode:(long long)arg5;

@end

