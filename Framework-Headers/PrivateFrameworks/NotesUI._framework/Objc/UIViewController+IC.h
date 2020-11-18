//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ICViewControllerManager, UINavigationController, UIWindowScene;

@interface UIViewController (IC)

@property (readonly, nonatomic) BOOL ic_isRTL;
@property (readonly, nonatomic) UINavigationController *ic_rootNavigationController;
@property (readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@property (readonly, nonatomic) UIWindowScene *ic_windowScene;

+ (void)ic_enableUIViewAnimations:(BOOL)arg1 forBlock:(CDUnknownBlockType)arg2;
- (id)ic_embedInNavigationControllerForModalPresentation;
- (BOOL)ic_isViewVisible;
- (double)ic_safeAreaDistanceFromBottom;
- (double)ic_safeAreaDistanceFromTop;
- (id)ic_safeAreaLayoutGuide;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)ic_showViewController:(id)arg1 animated:(BOOL)arg2 sender:(id)arg3;
- (id)ic_topViewController;
@end
