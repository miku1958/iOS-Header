//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol _UISwitchInternalViewProtocol;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding>
{
    UILongPressGestureRecognizer *_pressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView<_UISwitchInternalViewProtocol> *_control;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    BOOL _on;
    double _enabledAlpha;
}

@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *offImage;
@property (nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
@property (strong, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;
@property (strong, nonatomic) UIImage *onImage;
@property (strong, nonatomic) UIColor *onTintColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *thumbTintColor;
@property (strong, nonatomic) UIColor *tintColor;

+ (Class)_internalViewClass;
- (void).cxx_destruct;
- (void)_animateToOn:(BOOL)arg1 withDuration:(double)arg2 sendAction:(BOOL)arg3;
- (void)_commonInitNewLook;
- (void)_commonInitNewLookNeue1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_encodeFrameWithCoder:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (BOOL)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (double)_knobBounceDamping;
- (double)_knobBounceDuration;
- (double)_knobBounceMass;
- (double)_knobBounceStiffness;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)_onTintColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_scriptingInfo;
- (void)_setKnobBounceDamping:(double)arg1;
- (void)_setKnobBounceDuration:(double)arg1;
- (void)_setKnobBounceMass:(double)arg1;
- (void)_setKnobBounceStiffness:(double)arg1;
- (void)_setOnTintColor:(id)arg1;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_shouldAlterCodedFrame;
- (BOOL)_useOldSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setAlpha:(double)arg1;
- (void)setAlternateColors:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

