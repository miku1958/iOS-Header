//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVUnifiedGestureRecognizer.h>

#import <AssetViewer/ASVTurntableSingleFingerGestureDelegate-Protocol.h>
#import <AssetViewer/ASVTurntableTwoFingerGestureDelegate-Protocol.h>

@class ASVDeceleration, ASVRubberBand, ASVVelocitySample2D, MISSING_TYPE, NSString;
@protocol ASVTurntableGestureRecognizerDelegate;

@interface ASVTurntableGestureRecognizer : ASVUnifiedGestureRecognizer <ASVTurntableSingleFingerGestureDelegate, ASVTurntableTwoFingerGestureDelegate>
{
    BOOL _panThresholdPassed;
    BOOL _yawThresholdPassed;
    BOOL _pitchThresholdPassed;
    float _initialAssetPitch;
    float _lastOverallDeltaX;
    float _lastRubberBandedPitch;
    id<ASVTurntableGestureRecognizerDelegate> _turntableDelegate;
    MISSING_TYPE *_initialPanLocation;
    MISSING_TYPE *_lastPanLocation;
    double _lastPanTime;
    ASVRubberBand *_rubberBand;
    MISSING_TYPE *_yawThresholdLocation;
    MISSING_TYPE *_pitchThresholdLocation;
    ASVVelocitySample2D *_velocitySample;
    ASVVelocitySample2D *_previousVelocitySample;
    ASVDeceleration *_yawDeceleration;
    ASVDeceleration *_pitchDeceleration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float decelerationPitchDelta;
@property (readonly, nonatomic) float decelerationYawDelta;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float initialAssetPitch; // @synthesize initialAssetPitch=_initialAssetPitch;
@property (nonatomic) MISSING_TYPE *initialPanLocation; // @synthesize initialPanLocation=_initialPanLocation;
@property (nonatomic) float lastOverallDeltaX; // @synthesize lastOverallDeltaX=_lastOverallDeltaX;
@property (nonatomic) MISSING_TYPE *lastPanLocation; // @synthesize lastPanLocation=_lastPanLocation;
@property (nonatomic) double lastPanTime; // @synthesize lastPanTime=_lastPanTime;
@property (nonatomic) float lastRubberBandedPitch; // @synthesize lastRubberBandedPitch=_lastRubberBandedPitch;
@property (readonly, nonatomic) float maximumObjectScale;
@property (readonly, nonatomic) float minimumObjectScale;
@property (nonatomic) BOOL panThresholdPassed; // @synthesize panThresholdPassed=_panThresholdPassed;
@property (strong, nonatomic) ASVDeceleration *pitchDeceleration; // @synthesize pitchDeceleration=_pitchDeceleration;
@property (nonatomic) MISSING_TYPE *pitchThresholdLocation; // @synthesize pitchThresholdLocation=_pitchThresholdLocation;
@property (nonatomic) BOOL pitchThresholdPassed; // @synthesize pitchThresholdPassed=_pitchThresholdPassed;
@property (strong, nonatomic) ASVVelocitySample2D *previousVelocitySample; // @synthesize previousVelocitySample=_previousVelocitySample;
@property (strong, nonatomic) ASVRubberBand *rubberBand; // @synthesize rubberBand=_rubberBand;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<ASVTurntableGestureRecognizerDelegate> turntableDelegate; // @synthesize turntableDelegate=_turntableDelegate;
@property (strong, nonatomic) ASVVelocitySample2D *velocitySample; // @synthesize velocitySample=_velocitySample;
@property (strong, nonatomic) ASVDeceleration *yawDeceleration; // @synthesize yawDeceleration=_yawDeceleration;
@property (nonatomic) MISSING_TYPE *yawThresholdLocation; // @synthesize yawThresholdLocation=_yawThresholdLocation;
@property (nonatomic) BOOL yawThresholdPassed; // @synthesize yawThresholdPassed=_yawThresholdPassed;

- (void).cxx_destruct;
- (void)cancelDeceleration;
- (float)clampedScaleForScale:(float)arg1;
- (void)gesture:(id)arg1 beganPanningAtScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gesture:(id)arg1 pannedToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureEndedPanning:(id)arg1;
- (id)initWithTurntableDelegate:(id)arg1 feedbackGenerator:(id)arg2;
- (BOOL)isDecelerating;
- (void)pitchRangeWithMinPitch:(float *)arg1 maxPitch:(float *)arg2;
- (void)setEnabledGestureTypes:(unsigned long long)arg1;
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;
- (void)startSnappingPitch;
- (void)startSpinningPitchWithInitialVelocity:(float)arg1;
- (void)startSpinningYawWithInitialVelocity:(float)arg1;
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;

@end

