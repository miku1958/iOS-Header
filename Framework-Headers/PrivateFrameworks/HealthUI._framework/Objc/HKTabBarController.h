//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <HealthUI/UITabBarControllerDelegate-Protocol.h>

@class NSString;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTabBarControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;

@end

