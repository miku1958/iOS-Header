//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class NSMutableArray;

@interface BFFNavigationController : PSRootController
{
    NSMutableArray *_observers;
    BOOL _animating;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;

- (void).cxx_destruct;
- (BOOL)_canShowTextServices;
- (void)_reapObservers;
- (BOOL)_usesTransitionController;
- (void)addDelegateObserver:(id)arg1;
- (id)backgroundColor;
- (id)init;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeDelegateObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end

