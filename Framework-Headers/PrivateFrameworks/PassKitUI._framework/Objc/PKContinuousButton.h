//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, NSMutableSet, UIActivityIndicatorView, UIColor, UIImage, _UIBackdropView;

@interface PKContinuousButton : UIButton
{
    CDStruct_e6a35582 _configuration;
    UIImage *_image;
    NSMutableSet *_disabledImageStates;
    UIColor *_overrideTitleColor;
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_selectedInputColor;
    UIColor *_disabledInputColor;
    UIColor *_appliedInputColor;
    CAShapeLayer *_layer;
    _UIBackdropView *_backdropView;
    long long _backdropStyle;
    BOOL _updatingBackdropSettings;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    struct CGSize _boundsSize;
    UIActivityIndicatorView *_activityIndicatorView;
    UIColor *_activityIndicatorColor;
    BOOL _showSpinner;
    BOOL _blurDisabled;
}

@property (nonatomic) BOOL blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property (nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;

+ (id)_filterInputColorForEffect:(long long)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_createHighlightFilterIfNecessary;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackdropSettings;
- (void)_updateColor;
- (void)_updateFilter;
- (void)_updateTitleColor;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(CDStruct_e6a35582)arg1;
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageEnabled:(BOOL)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)updateActivityIndicatorColorWithColor:(id)arg1;
- (void)updateImageView;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end

