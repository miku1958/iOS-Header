//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
}

- (void).cxx_destruct;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)arg1;
- (id)_layoutSettings;
- (id)_opacitySettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 toAppLayout:(id)arg2;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
