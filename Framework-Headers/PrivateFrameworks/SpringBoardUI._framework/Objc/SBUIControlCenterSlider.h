//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIDynamicSlider.h>

#import <SpringBoardUI/SBUIControlCenterControl-Protocol.h>
#import <SpringBoardUI/_UISettingsKeyObserver-Protocol.h>

@class NSString, UIImage, UIVisualEffectView;

@interface SBUIControlCenterSlider : _UIDynamicSlider <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    double _valueImagePadding;
    BOOL _customTrackImage;
    UIVisualEffectView *_highlightEffectView;
    BOOL _highlightMinimumTrackImage;
    BOOL _shouldHighlightValueImagesWhileAdjusting;
    BOOL _adjusting;
    UIImage *_minValueMaskImage;
    UIImage *_maxValueMaskImage;
    UIImage *_trackMaskImage;
    struct UIEdgeInsets _trackCapInsets;
}

@property (nonatomic, getter=isAdjusting) BOOL adjusting; // @synthesize adjusting=_adjusting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL highlightMinimumTrackImage; // @synthesize highlightMinimumTrackImage=_highlightMinimumTrackImage;
@property (strong) UIImage *maxValueMaskImage; // @synthesize maxValueMaskImage=_maxValueMaskImage;
@property (strong) UIImage *minValueMaskImage; // @synthesize minValueMaskImage=_minValueMaskImage;
@property (nonatomic) BOOL shouldHighlightValueImagesWhileAdjusting; // @synthesize shouldHighlightValueImagesWhileAdjusting=_shouldHighlightValueImagesWhileAdjusting;
@property (readonly) Class superclass;
@property struct UIEdgeInsets trackCapInsets; // @synthesize trackCapInsets=_trackCapInsets;
@property (strong) UIImage *trackMaskImage; // @synthesize trackMaskImage=_trackMaskImage;

+ (id)_createTrackImageForState:(long long)arg1;
+ (id)_knobImage;
+ (id)_maxTrackImage;
+ (id)_minTrackImageForState:(long long)arg1;
+ (id)_trackImage;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (void)initialize;
- (void)_configureControlStates;
- (double)_naturalTrackWidth;
- (void)_setTrackImage:(id)arg1;
- (void)_updateEffects;
- (void)_updateMaximumTrackImage;
- (void)_updateMaximumValueImage;
- (void)_updateMinimumTrackImage;
- (void)_updateMinimumValueImage;
- (void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2;
- (double)_valueImageCenterTrackOffset;
- (id)_valueImageForImage:(id)arg1 state:(long long)arg2;
- (double)_valueImagePadding;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)leftValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (double)rightValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setTrackImage:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;

@end

