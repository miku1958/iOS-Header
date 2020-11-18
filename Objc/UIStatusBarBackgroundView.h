//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

- (void).cxx_destruct;
- (id)_backgroundImageName;
- (id)_baseImage;
- (id)_glowImage;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_stopGlowAnimation;
- (BOOL)_styleCanGlow;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (id)style;

@end

