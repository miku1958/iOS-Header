//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIImage, UIMotionEffectGroup, _UIStackedImageConfiguration;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerView : UIView
{
    UIMotionEffectGroup *_stackMotionEffects;
    BOOL _installsMotionEffectsWhenFocused;
    UIImage *_stackImage;
    NSObject<UINamedLayerStack> *_constructedStackImage;
    _UIStackedImageConfiguration *_config;
}

@property (copy, nonatomic) _UIStackedImageConfiguration *config; // @synthesize config=_config;
@property (strong, nonatomic) NSObject<UINamedLayerStack> *constructedStackImage; // @synthesize constructedStackImage=_constructedStackImage;
@property (nonatomic) struct CGPoint focusDirection;
@property (nonatomic) BOOL installsMotionEffectsWhenFocused; // @synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isStackFocused) BOOL stackFocused;
@property (strong, nonatomic) UIImage *stackImage; // @synthesize stackImage=_stackImage;

+ (Class)layerClass;
- (void).cxx_destruct;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)_imageContainerLayer;
- (void)_installMotionEffects;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;
- (void)_uninstallMotionEffects;
- (void)_updateContainerLayerImages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2;

@end
