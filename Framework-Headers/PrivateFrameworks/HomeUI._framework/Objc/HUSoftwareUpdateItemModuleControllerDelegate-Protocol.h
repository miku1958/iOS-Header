//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUSoftwareUpdateItemModuleController, NAFuture, UIViewController;
@protocol HUPreloadableViewController;

@protocol HUSoftwareUpdateItemModuleControllerDelegate <NSObject>
- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 dismissViewController:(UIViewController *)arg2;
- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 navigateToViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 presentViewController:(UIViewController *)arg2;
@end

