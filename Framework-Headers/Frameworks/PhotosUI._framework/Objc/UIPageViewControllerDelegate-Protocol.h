//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, UIPageViewController;

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(BOOL)arg4;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;
@end

