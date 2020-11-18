//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView
{
    CALayer *_innerCircleLayer;
    BOOL _isShowingStaleColor;
    BOOL _shouldInnerPulse;
    BOOL _shouldShowOuterRing;
    UIImage *_innerImageMask;
    BOOL _rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
    CALayer *_baseDimmingLayer;
}

@property (strong, nonatomic) UIImage *innerImageMask; // @synthesize innerImageMask=_innerImageMask;
@property (nonatomic) BOOL rotateInnerImageToMatchCourse; // @synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse;
@property (nonatomic) BOOL shouldInnerPulse; // @synthesize shouldInnerPulse=_shouldInnerPulse;
@property (nonatomic) BOOL shouldShowOuterRing; // @synthesize shouldShowOuterRing=_shouldShowOuterRing;

+ (double)baseDiameter;
+ (double)innerDiameter;
+ (double)outerRingWidth;
- (void).cxx_destruct;
- (struct CGColor *)_accuracyFillColor;
- (id)_animationToSynchronizePulse:(id *)arg1;
- (id)_baseDimmingLayer;
- (id)_baseLayer;
- (void)_dealloc;
- (id)_innerPulseAnimation;
- (id)_layerToMatchAccuracyRing;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_setMapDisplayStyle:(CDStruct_80aa614a)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setupLayers;
- (void)_updateAccuracyColors;
- (void)_updateBaseImage;
- (void)_updateInnerCourseRotation;
- (void)_updateInnerImage;
- (void)_updateInnerMaskLayer;
- (void)_updateLayers;
- (void)_updatePulseAnimation;
- (void)_updatePulseColor;
- (void)didMoveToWindow;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)tintColorDidChange;

@end

