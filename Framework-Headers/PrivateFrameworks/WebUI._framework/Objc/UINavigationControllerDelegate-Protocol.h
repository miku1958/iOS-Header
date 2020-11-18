//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UINavigationControllerDelegate <NSObject>

@optional
- (id<UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (id<UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id<UIViewControllerAnimatedTransitioning>)arg2;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;
@end

