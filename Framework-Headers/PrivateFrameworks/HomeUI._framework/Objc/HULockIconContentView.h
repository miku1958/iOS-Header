//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

#import <HomeUI/CAAnimationDelegate-Protocol.h>

@class HULockIconStateTransition, HUShapeLayerView, HUVisualEffectContainerView, NSString, UIVisualEffectView;

@interface HULockIconContentView : HUPrimaryStateIconContentView <CAAnimationDelegate>
{
    HUShapeLayerView *_lockBodyView;
    HUVisualEffectContainerView *_lockBodyContainerView;
    HUShapeLayerView *_lockKeyholeFillView;
    HUVisualEffectContainerView *_lockKeyholeContainerView;
    HUShapeLayerView *_lockShackleView;
    UIVisualEffectView *_lockShackleContainerView;
    HULockIconStateTransition *_activeTransition;
    unsigned long long _lockState;
    struct CGSize _lastLayoutSize;
}

@property (strong, nonatomic) HULockIconStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property (strong, nonatomic) HUVisualEffectContainerView *lockBodyContainerView; // @synthesize lockBodyContainerView=_lockBodyContainerView;
@property (strong, nonatomic) HUShapeLayerView *lockBodyView; // @synthesize lockBodyView=_lockBodyView;
@property (strong, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView; // @synthesize lockKeyholeContainerView=_lockKeyholeContainerView;
@property (strong, nonatomic) HUShapeLayerView *lockKeyholeFillView; // @synthesize lockKeyholeFillView=_lockKeyholeFillView;
@property (strong, nonatomic) UIVisualEffectView *lockShackleContainerView; // @synthesize lockShackleContainerView=_lockShackleContainerView;
@property (strong, nonatomic) HUShapeLayerView *lockShackleView; // @synthesize lockShackleView=_lockShackleView;
@property (nonatomic) unsigned long long lockState; // @synthesize lockState=_lockState;
@property (readonly) Class superclass;

+ (id)_lockKeyholePathForBounds:(struct CGRect)arg1;
+ (id)_lockShacklePathForBounds:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_applyAnimation:(id)arg1 ofType:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_performTransitionToLockState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_removeAllTransitionAnimations;
- (void)_removePendingBounceAnimations;
- (void)_rotateShackleForLockState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_translateShackleForLockState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)_viewForTransitionAnimationType:(unsigned long long)arg1;
- (id)_viewsAnimatedForStateTransition;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)wantsManagedVibrancyEffect;

@end

