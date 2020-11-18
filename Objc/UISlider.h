//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, UIColor, UIImage, UIImageView, UIView, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

@interface UISlider : UIControl <NSCoding>
{
    float _value;
    float _minValue;
    float _maxValue;
    double _alpha;
    struct __CFDictionary *_contentLookup;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_maxTrackClipView;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
        unsigned int showValue:1;
        unsigned int trackEnabled:1;
        unsigned int creatingSnapshot:1;
        unsigned int thumbDisabled:1;
        unsigned int minTrackHidden:1;
    } _sliderFlags;
    double _hitOffset;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
    UIView *_thumbViewNeue;
    BOOL _useLookNeue;
    NSArray *_trackColors;
    BOOL _trackIsArtworkBased;
    BOOL _thumbIsArtworkBased;
    BOOL _maxColorIsValid;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
    UIImageView *_innerThumbView;
}

@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (readonly, nonatomic) UIImage *currentMaximumTrackImage;
@property (readonly, nonatomic) UIImage *currentMinimumTrackImage;
@property (readonly, nonatomic) UIImage *currentThumbImage;
@property (strong, nonatomic, getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:) _UIEdgeFeedbackGenerator *edgeFeedbackBehavior;
@property (strong, nonatomic, getter=_edgeFeedbackGenerator, setter=_setEdgeFeedbackGenerator:) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (strong, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maxTintColor;
@property (nonatomic) float maximumValue; // @dynamic maximumValue;
@property (strong, nonatomic) UIImage *maximumValueImage;
@property (strong, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minTintColor;
@property (nonatomic) float minimumValue; // @dynamic minimumValue;
@property (strong, nonatomic) UIImage *minimumValueImage;
@property (strong, nonatomic, getter=_modulationFeedbackGenerator, setter=_setModulationFeedbackGenerator:) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (strong, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property (nonatomic) float value; // @dynamic value;

+ (BOOL)_allowActionsToQueue;
- (void).cxx_destruct;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_buildTrackArtwork;
- (id)_contentForState:(unsigned long long)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (double)_cornerRadiusForRect:(struct CGRect)arg1;
- (void)_initImages;
- (void)_initSubviews;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_isThumbEnabled;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (void)_listenForContentSizeCategoryChangesIfNecessary;
- (id)_maxTrackView;
- (id)_maxValueView;
- (id)_maximumTrackImageForState:(unsigned long long)arg1;
- (id)_minTrackView;
- (id)_minValueView;
- (id)_minimumTrackImageForState:(unsigned long long)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_rebuildControlThumb:(BOOL)arg1 track:(BOOL)arg2;
- (void)_sendDelayedActions;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2;
- (void)_setThumbEnabled:(BOOL)arg1;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTrackEnabled:(BOOL)arg1;
- (void)_setUseLookNeue:(BOOL)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(BOOL)arg4;
- (void)_setupFeedback;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (id)_thumbImageForState:(unsigned long long)arg1;
- (BOOL)_trackEnabled;
- (void)_updateAppearanceForEnabled:(BOOL)arg1;
- (void)_updateMaxTrackColorForInitialization:(BOOL)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)createThumbViewNeue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isAnimatingValueChange;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setShowValue:(BOOL)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)thumbImageForState:(unsigned long long)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)tintColorDidChange;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;

@end

