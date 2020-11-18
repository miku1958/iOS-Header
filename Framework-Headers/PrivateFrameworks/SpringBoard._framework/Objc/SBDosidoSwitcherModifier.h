//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (void).cxx_destruct;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isIndexVisible:(unsigned long long)arg1;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (long long)wallpaperStyle;

@end
