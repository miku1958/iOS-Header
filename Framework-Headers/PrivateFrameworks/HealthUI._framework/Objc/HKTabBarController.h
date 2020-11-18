//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <HealthUI/UITabBarControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate>
{
    UIViewController *_previousViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *previousViewController; // @synthesize previousViewController=_previousViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTabBarControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
