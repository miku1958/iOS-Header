//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/HUQuickControlSliderGestureTransformerDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HUDisplayLinkApplier, HUElasticApplier, HUQuickControlSliderGestureTransformer, HUQuickControlViewProfile, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol HUQuickControlIncrementalConvertibleProfile;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _userInteractionActive;
    BOOL _hasSecondaryValue;
    BOOL _firstTouchDown;
    HUQuickControlSliderGestureTransformer *_gestureTransformer;
    UILongPressGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    HUElasticApplier *_primaryValueSmoothingApplier;
    HUElasticApplier *_secondaryValueSmoothingApplier;
    HUDisplayLinkApplier *_controlVerticalStretchingApplier;
    HUElasticApplier *_controlHorizontalCompressionApplier;
    double _activeGestureValue;
    unsigned long long _activeGestureValueType;
    CDStruct_ef18196a _modelValue;
}

@property (nonatomic) double activeGestureValue; // @synthesize activeGestureValue=_activeGestureValue;
@property (nonatomic) unsigned long long activeGestureValueType; // @synthesize activeGestureValueType=_activeGestureValueType;
@property (strong, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier; // @synthesize controlHorizontalCompressionApplier=_controlHorizontalCompressionApplier;
@property (strong, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier; // @synthesize controlVerticalStretchingApplier=_controlVerticalStretchingApplier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown; // @synthesize firstTouchDown=_firstTouchDown;
@property (strong, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer; // @synthesize gestureTransformer=_gestureTransformer;
@property (nonatomic) BOOL hasSecondaryValue; // @synthesize hasSecondaryValue=_hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_c3b9c2ee modelValue; // @synthesize modelValue=_modelValue;
@property (strong, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (strong, nonatomic) HUElasticApplier *primaryValueSmoothingApplier; // @synthesize primaryValueSmoothingApplier=_primaryValueSmoothingApplier;
@property (strong, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier; // @synthesize secondaryValueSmoothingApplier=_secondaryValueSmoothingApplier;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;

- (void).cxx_destruct;
- (id)_allAppliers;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 firstTouchDown:(BOOL)arg2;
- (unsigned long long)_findClosestValueFromTouchLocation:(struct CGPoint)arg1;
- (void)_handleControlPanGesture:(id)arg1;
- (void)_handleControlTapGesture:(id)arg1;
- (CDStruct_c3b9c2ee)_rawViewValueRange;
- (double)_rubberBandedStretchProgress;
- (id)_rubberBandingValueNormalizer;
- (void)_setupAllValueAppliersIfNecessary;
- (void)_setupStretchingAppliers;
- (id)_setupValueApplierForValueType:(unsigned long long)arg1;
- (double)_sliderValueForLocation:(struct CGPoint)arg1;
- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 roundValue:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(unsigned long long)arg2;
- (id)_valueNormalizerWithOptions:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)gestureDidEndForGestureTransformer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)setViewVisible:(BOOL)arg1;
- (id)value;

@end

