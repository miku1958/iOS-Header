//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSDictionary, UIViewController;
@protocol HUConfigurationViewController;

@protocol HUConfigurationViewControllerDelegate <NSObject>
- (void)viewController:(UIViewController<HUConfigurationViewController> *)arg1 didFinishWithConfigurationResults:(NSDictionary *)arg2;
- (void)viewControllerDidGoBack:(UIViewController<HUConfigurationViewController> *)arg1;
- (void)viewControllerWillAppear:(UIViewController<HUConfigurationViewController> *)arg1;
@end

