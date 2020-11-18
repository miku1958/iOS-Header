//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBlurEffectImpl.h>

@class UIBlurEffect, UIColor;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl
{
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
    UIBlurEffect *_effect;
}

@property (nonatomic) UIBlurEffect *effect; // @synthesize effect=_effect;

- (void).cxx_destruct;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)appendDescriptionTo:(id)arg1;
- (BOOL)canProvideVibrancyEffect;
- (void)encodeWithCoder:(id)arg1;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3;
- (BOOL)invertAutomaticStyle;
- (long long)style;
- (id)tintColor;

@end

