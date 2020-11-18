//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (void).cxx_destruct;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appExposeModifier:(id)arg2;
- (long long)plusButtonStyle;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (id)scrollViewAttributes;
- (double)snapshotScaleForAppLayout:(id)arg1;

@end
