//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class AVMicaPackage, AVUserInteractionObserverGestureRecognizer, NSNumber, NSString, NSTimer, UIViewPropertyAnimator;

@interface AVButton : UIButton
{
    BOOL _wasLongPressed;
    BOOL _treatsForcePressAsLongPress;
    BOOL _multipleTouchesEndsTracking;
    BOOL _disablesHighlightWhenLongPressed;
    BOOL _wasForcePressTriggered;
    BOOL _collapsed;
    BOOL _included;
    BOOL _hasAlternateAppearance;
    BOOL _hasFullScreenAppearance;
    double _forceThreshold;
    double _force;
    double _maximumForceSinceTrackingBegan;
    NSString *_imageName;
    NSString *_fullScreenImageName;
    NSString *_inlineImageName;
    NSString *_fullScreenAlternateImageName;
    NSString *_inlineAlternateImageName;
    AVMicaPackage *_micaPackage;
    UIViewPropertyAnimator *_highlightAnimator;
    double _trackingStartTime;
    double _horizontalTranslationOfLongPress;
    NSNumber *_previousHorizontalPositionOfLongPress;
    NSTimer *_longPressTimer;
    AVUserInteractionObserverGestureRecognizer *_userInteractionGestureRecognizer;
    struct CGSize _extrinsicContentSize;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL disablesHighlightWhenLongPressed; // @synthesize disablesHighlightWhenLongPressed=_disablesHighlightWhenLongPressed;
@property (nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property (nonatomic) double force; // @synthesize force=_force;
@property (nonatomic) double forceThreshold; // @synthesize forceThreshold=_forceThreshold;
@property (copy, nonatomic) NSString *fullScreenAlternateImageName; // @synthesize fullScreenAlternateImageName=_fullScreenAlternateImageName;
@property (copy, nonatomic) NSString *fullScreenImageName; // @synthesize fullScreenImageName=_fullScreenImageName;
@property (nonatomic) BOOL hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property (nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property (nonatomic) double horizontalTranslationOfLongPress; // @synthesize horizontalTranslationOfLongPress=_horizontalTranslationOfLongPress;
@property (copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (nonatomic, getter=isIncluded) BOOL included; // @synthesize included=_included;
@property (copy, nonatomic) NSString *inlineAlternateImageName; // @synthesize inlineAlternateImageName=_inlineAlternateImageName;
@property (copy, nonatomic) NSString *inlineImageName; // @synthesize inlineImageName=_inlineImageName;
@property (weak, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property (nonatomic) double maximumForceSinceTrackingBegan; // @synthesize maximumForceSinceTrackingBegan=_maximumForceSinceTrackingBegan;
@property (strong, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property (nonatomic) BOOL multipleTouchesEndsTracking; // @synthesize multipleTouchesEndsTracking=_multipleTouchesEndsTracking;
@property (strong, nonatomic) NSNumber *previousHorizontalPositionOfLongPress; // @synthesize previousHorizontalPositionOfLongPress=_previousHorizontalPositionOfLongPress;
@property (nonatomic) double trackingStartTime; // @synthesize trackingStartTime=_trackingStartTime;
@property (nonatomic) BOOL treatsForcePressAsLongPress; // @synthesize treatsForcePressAsLongPress=_treatsForcePressAsLongPress;
@property (strong, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer; // @synthesize userInteractionGestureRecognizer=_userInteractionGestureRecognizer;
@property (nonatomic) BOOL wasForcePressTriggered; // @synthesize wasForcePressTriggered=_wasForcePressTriggered;
@property (nonatomic) BOOL wasLongPressed; // @synthesize wasLongPressed=_wasLongPressed;

+ (id)buttonWithAccessibilityIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_handleUserInteractionGestureRecognizer:(id)arg1;
- (id)_preferredImageName;
- (void)_resetTrackedState;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end

