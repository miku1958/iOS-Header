//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAGradientLayer.h>

#import <MapKit/MKUserLocationHeadingAnimatableIndicator-Protocol.h>
#import <MapKit/MKUserLocationHeadingIndicator-Protocol.h>

@class CAShapeLayer, NSString, UIColor, UITraitCollection, _MKPuckAnnotationView;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingConeLayer : CAGradientLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator>
{
    _MKPuckAnnotationView *_userLocationView;
    CAShapeLayer *_maskLayer;
    double _headingAccuracy;
    BOOL _shouldMatchAccuracyRadius;
    UIColor *_tintColor;
    double _halfMinAngle;
    UITraitCollection *_traitCollection;
    double _lastAccuracyRadius;
    double _minimumAccuracyRadius;
    unsigned long long _mapType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property (nonatomic) double minimumAccuracyRadius; // @synthesize minimumAccuracyRadius=_minimumAccuracyRadius;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

- (void).cxx_destruct;
- (id)_accuracyGradientLocationsForAccuracyRadius:(double)arg1;
- (void)_animateToOpacity:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_colorsForAccuracyRadius:(double)arg1;
- (void)_createMaskLayer;
- (double)_opacityForAccuracy:(double)arg1 locationAccuracy:(double)arg2;
- (BOOL)_shouldShowHeadingForAccuracy:(double)arg1;
- (void)_updateColors;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (void)animateToSetVisible:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserLocationView:(id)arg1 shouldMatchAccuracyRadius:(BOOL)arg2 minimumPresentationAngle:(double)arg3;
- (void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(id)arg1;

@end

