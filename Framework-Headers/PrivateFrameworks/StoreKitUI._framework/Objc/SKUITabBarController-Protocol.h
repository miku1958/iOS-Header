//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, UINavigationController, UIView, UIViewController;
@protocol SKUITabBarControllerDelegate;

@protocol SKUITabBarController <NSObject>

@property (readonly, nonatomic) NSArray *allViewControllers;
@property (nonatomic) id<SKUITabBarControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *floatingOverlayViewController;
@property (nonatomic) long long forcedUserInterfaceStyle;
@property (readonly, nonatomic) UINavigationController *moreNavigationController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly, nonatomic) UIView *tabBar;
@property (strong, nonatomic) UIViewController *transientViewController;
@property (copy, nonatomic) NSArray *viewControllers;

- (void)hideBarWithTransition:(int)arg1;
- (void)setTransientViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(NSArray *)arg1 animated:(BOOL)arg2;
- (void)showBarWithTransition:(int)arg1;

@optional
- (void)setFloatingOverlayViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
@end

