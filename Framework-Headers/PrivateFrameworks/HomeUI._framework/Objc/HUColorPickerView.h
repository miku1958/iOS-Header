//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HUColorWheelView, HUQuickControlColorViewProfile, HUQuickControlMagnifierView, NSString, UILongPressGestureRecognizer;
@protocol HUColorWheelSpace, HUQuickControlColorPickerViewInteractionDelegate;

@interface HUColorPickerView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    id<HUQuickControlColorPickerViewInteractionDelegate> _interactionDelegate;
    HUQuickControlColorViewProfile *_profile;
    unsigned long long _reachabilityState;
    unsigned long long _colorPickerMode;
    double _magnifierLength;
    unsigned long long _mirroringAxisBias;
    HUColorWheelView *_colorWheelView;
    HUQuickControlMagnifierView *_magnifierView;
    UILongPressGestureRecognizer *_gestureRecognizer;
    double _touchDownTimestamp;
    struct {
        double angle;
        double radius;
    } _selectedColorCoordinate;
    CDStruct_dbd0f16f _selectedColor;
}

@property (nonatomic) unsigned long long colorPickerMode; // @synthesize colorPickerMode=_colorPickerMode;
@property (readonly, nonatomic) id<HUColorWheelSpace> colorWheelSpace;
@property (strong, nonatomic) HUColorWheelView *colorWheelView; // @synthesize colorWheelView=_colorWheelView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUQuickControlColorPickerViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (nonatomic) double magnifierLength; // @synthesize magnifierLength=_magnifierLength;
@property (nonatomic) struct CGPoint magnifierLocation;
@property (strong, nonatomic) HUQuickControlMagnifierView *magnifierView; // @synthesize magnifierView=_magnifierView;
@property (nonatomic) unsigned long long mirroringAxisBias; // @synthesize mirroringAxisBias=_mirroringAxisBias;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property (strong, nonatomic) id secondaryValue;
@property (nonatomic) CDStruct_dbd0f16f selectedColor; // @synthesize selectedColor=_selectedColor;
@property (nonatomic) CDStruct_c3b9c2ee selectedColorCoordinate; // @synthesize selectedColorCoordinate=_selectedColorCoordinate;
@property (readonly) Class superclass;
@property (nonatomic) double touchDownTimestamp; // @synthesize touchDownTimestamp=_touchDownTimestamp;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value;
@property (nonatomic) double wheelHoleRadius;

- (void).cxx_destruct;
- (void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
- (id)_colorWheelSpaceForMode:(unsigned long long)arg1;
- (void)_handleGesture:(id)arg1;
- (void)_updateDerivedSelectedColorCoordinate;
- (void)_updateMagnifierPosition;
- (void)_updateMagnifierTransformForTouchLocation:(struct CGPoint)arg1;
- (void)_updateMagnifierView;
- (void)_updateMirroringAxisBiasIfNecessary;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)layoutSubviews;

@end

