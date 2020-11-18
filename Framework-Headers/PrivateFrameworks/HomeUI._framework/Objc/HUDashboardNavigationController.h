//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <HomeUI/HUDashboardNavigationBarDelegate-Protocol.h>

@class NSString, UINavigationBar;

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate>
{
    UINavigationBar *_displayedNavigationBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UINavigationBar *displayedNavigationBar; // @synthesize displayedNavigationBar=_displayedNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_targetNavigationBarForUISplitViewControllerSidebarButton;
- (id)childViewControllerForStatusBarStyle;
- (void)navigationBar:(id)arg1 didChangeBackgroundVisibility:(BOOL)arg2;
- (long long)preferredStatusBarStyle;

@end
