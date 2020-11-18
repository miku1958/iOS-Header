//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStatusBar_Base.h>

@class _UIStatusBar;

__attribute__((visibility("hidden")))
@interface UIStatusBar_Modern : UIStatusBar_Base
{
    _UIStatusBar *_statusBar;
}

@property (strong, nonatomic) _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;

+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 simulateLegacyAppearance:(BOOL)arg3 activeStyleOverride:(int *)arg4;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_canShowInOrientation:(long long)arg1;
- (id)_dataFromLegacyData:(const CDStruct_8a690d05 *)arg1;
- (id)_effectiveDataFromData:(id)arg1 activeOverride:(int)arg2;
- (long long)_effectiveStyleFromStyle:(long long)arg1;
- (int)_implicitStyleOverrideForStyle:(long long)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (void)_requestStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 animationParameters:(id)arg4 forced:(BOOL)arg5;
- (void)_updateSemanticContentAttributeFromLegacyData:(const CDStruct_8a690d05 *)arg1;
- (void)_updateWithData:(id)arg1 force:(BOOL)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (id)enabledPartIdentifiers;
- (void)forceUpdate:(BOOL)arg1;
- (void)forceUpdateData:(BOOL)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isTranslucent;
- (void)layoutSubviews;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setMode:(long long)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_8a690d05 *)arg2 withActions:(int)arg3;

@end
