//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWindow.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class NSCountedSet, NSString, UIViewController;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver>
{
    NSCountedSet *_orientationUpdateDisableReasons;
    BOOL _passesTouchesThrough;
    NSString *_debugName;
    UIViewController *_contentViewController;
}

@property (strong, nonatomic, setter=setContentViewController:) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL passesTouchesThrough; // @synthesize passesTouchesThrough=_passesTouchesThrough;
@property (readonly) Class superclass;

+ (BOOL)layoutContentViewControllerWithConstraints;
- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)disableInterfaceOrientationChangesForReason:(id)arg1;
- (unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;
- (void)enableInterfaceOrientationChangesForReason:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDebugName:(id)arg1;
- (BOOL)isActive;
- (BOOL)isDisablingInterfaceOrientationChanges;
- (void)setHidden:(BOOL)arg1;
- (void)setRootViewController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

