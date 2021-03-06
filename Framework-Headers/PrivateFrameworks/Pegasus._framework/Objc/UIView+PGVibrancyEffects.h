//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (PGVibrancyEffects)

@property (nonatomic, setter=PG_setAllowsEdgeAntialiasing:) BOOL PG_allowsEdgeAntialiasing;
@property (nonatomic, setter=PG_setAllowsGroupBlending:) BOOL PG_allowsGroupBlending;
@property (nonatomic, setter=PG_setAnchorPoint:) struct CGPoint PG_anchorPoint;
@property (strong, nonatomic, setter=PG_setCompositingFilter:) id PG_compositingFilter;

+ (void)PG_animateUsingDefaultDampedSpringWithInitialSpringVelocity:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)PG_animateUsingDefaultTimingWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)PG_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)PG_performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)PG_performWithoutRetargetingAnimation:(CDUnknownBlockType)arg1;
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;
- (id)PG_backdropGroupLeader;
- (double)PG_cornerRadius;
- (BOOL)PG_preferredVisibilityForView:(id)arg1;
- (void)PG_recursivelyDisallowGroupBlending;
- (void)PG_removeVibrancyEffect;
- (void)PG_updateVibrancyEffectForTintColor;
@end

